/* alAdpcmPull, drafted from ultralib src/audio/load.c: load the ADPCM codebook, then decode the
   requested output count through _decodeChunk, restarting from the loop start and merging the
   sections in DMEM when the count crosses the loop end, and clearing what runs past the table.
   This cartridge's version addresses the codebook through the game's book cache func_802570E0
   (book, bookSize) where the reference writes K0_TO_PHYS(book). */
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
#define A_LOOP 0x02
#define ADPCMFSIZE 16
#define ADPCMFBYTES 9
#define LFSAMPLES 4
#define AL_DECODER_IN 0

#define aClearBuffer(pkt, d, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(2, 24, 8) | _SHIFTL(d, 0, 24);           \
        _a->words.w1 = (unsigned int)(c);                               \
    }

#define aDMEMMove(pkt, i, o, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(10, 24, 8) | _SHIFTL(i, 0, 24);          \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aLoadADPCM(pkt, c, d)                                           \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(11, 24, 8) | _SHIFTL(c, 0, 24);          \
        _a->words.w1 = (unsigned int)d;                                 \
    }

typedef s32 (*ALDMAproc)(s32 addr, s32 len, void *state);

typedef struct {
    s32 order;
    s32 npredictors;
    s16 book[1];
} ALADPCMBook;

typedef struct {
    void *loop;
    ALADPCMBook *book;
} ALADPCMWaveInfo;

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
    union {
        ALADPCMWaveInfo adpcmWave;
    } waveInfo;
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

extern u32 func_802570E0(s16 *book, s32 size); /* game ADPCM codebook cache */
extern Acmd *func_802C3D24(Acmd *ptr, ALLoadFilter *f, s32 tsam, s32 nbytes, s16 outp, s16 inp,
                           u32 flags); /* _decodeChunk */

Acmd *func_802C31C0(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    s16 inp;
    s32 tsam;
    s32 nframes;
    s32 nbytes;
    s32 overFlow;
    s32 startZero;
    s32 nOver;
    s32 nSam;
    s32 op;
    s32 nLeft;
    s32 bEnd;
    s32 decoded = 0;
    s32 looped = 0;

    ALLoadFilter *f = (ALLoadFilter *)filter;

    if (outCount == 0)
        return ptr;

    inp = AL_DECODER_IN;
    aLoadADPCM(ptr++, f->bookSize,
               func_802570E0(f->table->waveInfo.adpcmWave.book->book, f->bookSize));

    looped = (outCount + f->sample > f->loop.end) && (f->loop.count != 0);
    if (looped)
        nSam = f->loop.end - f->sample;
    else
        nSam = outCount;

    if (f->lastsam)
        nLeft = ADPCMFSIZE - f->lastsam;
    else
        nLeft = 0;
    tsam = nSam - nLeft;
    if (tsam < 0) tsam = 0;

    nframes = (tsam + ADPCMFSIZE - 1) >> LFSAMPLES;
    nbytes = nframes * ADPCMFBYTES;

    if (looped) {

        ptr = func_802C3D24(ptr, f, tsam, nbytes, *outp, inp, f->first);

        if (f->lastsam)
            *outp += (f->lastsam << 1);
        else
            *outp += (ADPCMFSIZE << 1);

        f->lastsam = f->loop.start & 0xf;
        f->memin = (s32)f->table->base + ADPCMFBYTES *
            ((s32)(f->loop.start >> LFSAMPLES) + 1);
        f->sample = f->loop.start;

        bEnd = *outp;
        while (outCount > nSam) {

            outCount -= nSam;

            op = (bEnd + ((nframes + 1) << (LFSAMPLES + 1))) & ~0x1f;

            bEnd += (nSam << 1);

            if ((f->loop.count != -1) && (f->loop.count != 0))
                f->loop.count--;

            nSam = MIN(outCount, f->loop.end - f->loop.start);
            tsam = nSam - ADPCMFSIZE + f->lastsam;
            if (tsam < 0) tsam = 0;
            nframes = (tsam + ADPCMFSIZE - 1) >> LFSAMPLES;
            nbytes = nframes * ADPCMFBYTES;
            ptr = func_802C3D24(ptr, f, tsam, nbytes, op, inp, f->first | A_LOOP);

            aDMEMMove(ptr++, op + (f->lastsam << 1), bEnd, nSam << 1);
        }

        f->lastsam = (outCount + f->lastsam) & 0xf;
        f->sample += outCount;
        f->memin += ADPCMFBYTES * nframes;
        return ptr;
    }

    nSam = nframes << LFSAMPLES;

    overFlow = f->memin + nbytes - ((s32)f->table->base + f->table->len);
    if (overFlow < 0)
        overFlow = 0;
    nOver = (overFlow / ADPCMFBYTES) << LFSAMPLES;
    if (nOver > nSam + nLeft)
        nOver = nSam + nLeft;

    nbytes -= overFlow;

    if ((nOver - (nOver & 0xf)) < outCount) {
        decoded = 1;
        ptr = func_802C3D24(ptr, f, nSam - nOver, nbytes, *outp, inp, f->first);

        if (f->lastsam)
            *outp += (f->lastsam << 1);
        else
            *outp += (ADPCMFSIZE << 1);

        f->lastsam = (outCount + f->lastsam) & 0xf;
        f->sample += outCount;
        f->memin += ADPCMFBYTES * nframes;
    } else {
        f->lastsam = 0;
        f->memin += ADPCMFBYTES * nframes;
    }

    if (nOver) {
        f->lastsam = 0;
        if (decoded)
            startZero = (nLeft + nSam - nOver) << 1;
        else
            startZero = 0;
        aClearBuffer(ptr++, startZero + *outp, nOver << 1);
    }

    return ptr;
}
