#include "basetypes.h"

typedef union {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
    long long force_union_align;
} Acmd;

typedef Acmd *(*ALCmdHandler)(void *, s16 *, s32, s32, Acmd *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    ALCmdHandler handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

#define _SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))

#define aClearBuffer(pkt, d, c)                                                    \
    {                                                                              \
        Acmd *_a = (Acmd *)pkt;                                                    \
        _a->words.w0 = _SHIFTL(2, 24, 8) | _SHIFTL(d, 0, 24);                      \
        _a->words.w1 = (unsigned int)(c);                                          \
    }

#define aSetBuffer(pkt, f, i, o, c)                                                \
    {                                                                              \
        Acmd *_a = (Acmd *)pkt;                                                    \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(i, 0, 16)); \
        _a->words.w1 = (_SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16));                   \
    }

#define aMix(pkt, f, g, i, o)                                                      \
    {                                                                              \
        Acmd *_a = (Acmd *)pkt;                                                    \
        _a->words.w0 = (_SHIFTL(12, 24, 8) | _SHIFTL(f, 16, 8) | _SHIFTL(g, 0, 16)); \
        _a->words.w1 = _SHIFTL(i, 16, 16) | _SHIFTL(o, 0, 16);                     \
    }

typedef struct {
    ALFilter filter;
    s32 sourceCount;
    s32 maxSources;
    ALFilter **sources;
} ALMainBus;

/* alMainBusPull (libultra audio main bus): clears the main left and right buffers, then pulls each source and mixes the aux outputs into the main buffers. */
Acmd *func_802BA4D0(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p) {
    Acmd *ptr = p;
    ALMainBus *m = (ALMainBus *)filter;
    ALFilter **sources = m->sources;
    s32 i;

    aClearBuffer(ptr++, 0x440, outCount << 1);
    aClearBuffer(ptr++, 0x580, outCount << 1);

    for (i = 0; i < m->sourceCount; i++) {
        ptr = (*sources[i]->handler)(sources[i], outp, outCount, sampleOffset, ptr);
        aSetBuffer(ptr++, 0, 0, 0, outCount << 1);
        aMix(ptr++, 0, 0x7FFF, 0x6C0, 0x440);
        aMix(ptr++, 0, 0x7FFF, 0x800, 0x580);
    }
    return ptr;
}
