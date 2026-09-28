/* alRaw16Pull, drafted from ultralib src/audio/load.c: DMA raw 16-bit samples into DMEM at 8-byte
   alignment for the requested output count, restarting from the loop start and merging the
   sections in DMEM when the count crosses the loop end, and clearing what runs past the table. */
#include "basetypes.h"

typedef struct {
    unsigned int w0;
    unsigned int w1;
} Awords;

typedef union {
    Awords words;
    long long int force_union_align;
} Acmd;

#define _SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#define aClearBuffer(pkt, d, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(2, 24, 8) | _SHIFTL(d, 0, 24);           \
        _a->words.w1 = (unsigned int)(c);                               \
    }

#define aLoadBuffer(pkt, s)                                             \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(4, 24, 8);                               \
        _a->words.w1 = (unsigned int)(s);                               \
    }

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(i, 0, 16));                             \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aDMEMMove(pkt, i, o, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(10, 24, 8) | _SHIFTL(i, 0, 24);          \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

typedef s32 (*ALDMAproc)(s32 addr, s32 len, void *state);

typedef struct {
    u32 start;
    u32 end;
    u32 count;
} ALRawLoop;

typedef struct ALWaveTable_s {
    u8 *base;
    s32 len;
    u8 type;
    u8 flags;
} ALWaveTable;

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    ALFilter filter;
    void *state;
    void *lstate;
    ALRawLoop loop;
    ALWaveTable *table;
    s32 bookSize;
    ALDMAproc dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
} ALLoadFilter;

Acmd *func_802C3604(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    s32 nbytes;
    s32 dramLoc;
    s32 dramAlign;
    s32 dmemAlign;
    s32 overFlow;
    s32 startZero;
    s32 nSam;
    s32 op;

    ALLoadFilter *f = (ALLoadFilter *)filter;
    ALFilter *a = (ALFilter *)filter;

    if (outCount == 0)
        return ptr;

    if ((outCount + f->sample > f->loop.end) && (f->loop.count != 0)) {

        nSam = f->loop.end - f->sample;
        nbytes = nSam << 1;
        if (nSam > 0) {
            dramLoc = (f->dma)(f->memin, nbytes, f->dmaState);
            dramAlign = dramLoc & 0x7;
            nbytes += dramAlign;
            aSetBuffer(ptr++, 0, *outp, 0, nbytes + 8 - (nbytes & 0x7));
            aLoadBuffer(ptr++, dramLoc - dramAlign);
        } else
            dramAlign = 0;

        *outp += dramAlign;

        f->memin = (s32)f->table->base + (f->loop.start << 1);
        f->sample = f->loop.start;
        op = *outp;

        while (outCount > nSam) {

            op += (nSam << 1);
            outCount -= nSam;
            if ((f->loop.count != -1) && (f->loop.count != 0))
                f->loop.count--;

            nSam = MIN(outCount, f->loop.end - f->loop.start);
            nbytes = nSam << 1;

            dramLoc = (f->dma)(f->memin, nbytes, f->dmaState);
            dramAlign = dramLoc & 0x7;
            nbytes += dramAlign;
            if (op & 0x7)
                dmemAlign = 8 - (op & 0x7);
            else
                dmemAlign = 0;

            aSetBuffer(ptr++, 0, op + dmemAlign, 0, nbytes + 8 - (nbytes & 0x7));
            aLoadBuffer(ptr++, dramLoc - dramAlign);

            if (dramAlign || dmemAlign)
                aDMEMMove(ptr++, op + dramAlign + dmemAlign, op, nSam << 1);
        }

        f->sample += outCount;
        f->memin += (outCount << 1);

        return ptr;
    }

    nbytes = outCount << 1;
    overFlow = f->memin + nbytes - ((s32)f->table->base + f->table->len);
    if (overFlow < 0)
        overFlow = 0;
    if (overFlow > nbytes)
        overFlow = nbytes;

    if (overFlow < nbytes) {
        if (outCount > 0) {
            nbytes -= overFlow;
            dramLoc = (f->dma)(f->memin, nbytes, f->dmaState);
            dramAlign = dramLoc & 0x7;
            nbytes += dramAlign;
            aSetBuffer(ptr++, 0, *outp, 0, nbytes + 8 - (nbytes & 0x7));
            aLoadBuffer(ptr++, dramLoc - dramAlign);
        } else
            dramAlign = 0;
        *outp += dramAlign;

        f->sample += outCount;
        f->memin += outCount << 1;
    } else {
        f->memin += outCount << 1;
    }

    if (overFlow) {
        startZero = (outCount << 1) - overFlow;
        if (startZero < 0)
            startZero = 0;
        aClearBuffer(ptr++, startZero + *outp, overFlow);
    }
    return ptr;
}
