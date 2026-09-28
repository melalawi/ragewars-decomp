/* Streams raw 16-bit samples into DMEM for the requested byte count: clears the output when the wave table is empty, otherwise refills a 0x100-sample block at D_800D9360 through func_802C525C and func_802C2370 whenever the filter has none left (clearing and stopping when none arrives), then loads the available samples at 8-byte alignment and moves them into place. Adapted from func_802C3604 (alRaw16Pull) with the loop handling replaced by the streamed block, updated through a pointer to D_800D9360. */
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

extern s32 D_800D9360;
extern s32 func_802C525C();
extern void func_802C2370(s32 buffer, s32 size);

Acmd *func_802C3988(void *filter, s16 *outp, s32 byteCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    s32 nbytes;
    s32 dramAlign;
    s32 dmemAlign;
    s32 nSam;
    s32 op;

    ALLoadFilter *f = (ALLoadFilter *)filter;
    s32 *stream;

    op = *outp;
    if (f->table->base == 0) {
        aClearBuffer(ptr++, op, byteCount << 1);
        return ptr;
    }
    if (byteCount != 0) {
        stream = &D_800D9360;
        do {
            nSam = byteCount;
            if (f->sample == 0) {
                D_800D9360 = func_802C525C();
                if (D_800D9360 == 0) {
                    aClearBuffer(ptr++, op, byteCount << 1);
                    return ptr;
                }
                func_802C2370(D_800D9360, 0x200);
                f->sample = 0x100;
            }
            if (f->sample < byteCount) {
                nSam = f->sample;
            }
            nbytes = nSam << 1;
            dramAlign = D_800D9360 & 0x7;
            nbytes += dramAlign;
            if (op & 0x7) {
                dmemAlign = 8 - (op & 0x7);
            } else {
                dmemAlign = 0;
            }
            aSetBuffer(ptr++, 0, op + dmemAlign, 0, nbytes + 8 - (nbytes & 0x7));
            aLoadBuffer(ptr++, (D_800D9360 & 0x1FFFFFFF) - dramAlign);
            if (dramAlign || dmemAlign) {
                aDMEMMove(ptr++, op + dramAlign + dmemAlign, op, nSam << 1);
            }
            byteCount -= nSam;
            op += nSam << 1;
            *stream += nSam << 1;
            f->sample -= nSam;
        } while (byteCount != 0);
    }
    return ptr;
}
