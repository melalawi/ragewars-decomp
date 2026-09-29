/* _decodeChunk, libultra's ADPCM chunk decoder called by alAdpcmPull (func_802C31C0): DMA the next
   ADPCM bytes into DMEM aligned down to 8 bytes, set the loop state when looping, and queue the ADPCM
   decode of tsam samples. */
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
#define K0_TO_PHYS(x) ((u32)(x) & 0x1FFFFFFF)
#define A_LOOP 0x02

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |          \
                       _SHIFTL(i, 0, 16);                               \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aLoadBuffer(pkt, s)                                             \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(4, 24, 8);                               \
        _a->words.w1 = (unsigned int)(s);                               \
    }

#define aSetLoop(pkt, a)                                                \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(15, 24, 8);                              \
        _a->words.w1 = (unsigned int)(a);                               \
    }

#define aADPCMdec(pkt, f, s)                                            \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(1, 24, 8) | _SHIFTL(f, 16, 8);           \
        _a->words.w1 = (unsigned int)(s);                               \
    }

typedef s32 (*ALDMAproc)(s32 addr, s32 len, void *state);

typedef struct {
    u32 start;
    u32 end;
    u32 count;
} ALRawLoop;

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
    void *table;
    s32 bookSize;
    ALDMAproc dma;
    void *dmaState;
    s32 sample;
    s32 lastsam;
    s32 first;
    s32 memin;
} ALLoadFilter;

Acmd *func_802C3D24(Acmd *ptr, ALLoadFilter *f, s32 tsam, s32 nbytes, s16 outp, s16 inp, u32 flags)
{
    s32 dramAlign, dramLoc;

    if (nbytes > 0) {
        dramLoc = (f->dma)(f->memin, nbytes, f->dmaState);
        dramAlign = dramLoc & 0x7;
        nbytes += dramAlign;
        aSetBuffer(ptr++, 0, inp, 0, nbytes + 8 - (nbytes & 0x7));
        aLoadBuffer(ptr++, dramLoc - dramAlign);
    } else
        dramAlign = 0;

    if (flags & A_LOOP) {
        aSetLoop(ptr++, K0_TO_PHYS(f->lstate));
    }

    aSetBuffer(ptr++, 0, inp + dramAlign, outp, tsam << 1);
    aADPCMdec(ptr++, flags, K0_TO_PHYS(f->state));
    f->first = 0;

    return ptr;
}
