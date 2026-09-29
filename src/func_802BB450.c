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

#define aInterleave(pkt, l, r)                                                     \
    {                                                                              \
        Acmd *_a = (Acmd *)pkt;                                                    \
        _a->words.w0 = _SHIFTL(13, 24, 8);                                         \
        _a->words.w1 = _SHIFTL(l, 16, 16) | _SHIFTL(r, 0, 16);                     \
    }

#define aSaveBuffer(pkt, s)                                                        \
    {                                                                              \
        Acmd *_a = (Acmd *)pkt;                                                    \
        _a->words.w0 = _SHIFTL(6, 24, 8);                                          \
        _a->words.w1 = (unsigned int)(s);                                          \
    }

typedef struct {
    ALFilter filter;
    s32 dramout;
    s32 first;
} ALSave;

extern char D_800CCA40[];
extern char D_800CCA44[];
extern void func_802BFD40(const char *, const char *, s32); /* __assert */

/* alSavePull (libultra audio save filter): pulls the source, interleaves the main left and right buffers and saves the result to the filter's DRAM output. */
Acmd *func_802BB450(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p) {
    Acmd *ptr = p;
    ALSave *f = (ALSave *)filter;
    ALFilter *source = f->filter.source;

    if (!source) {
        func_802BFD40(D_800CCA40, D_800CCA44, 34);
    }

    ptr = (*source->handler)(source, outp, outCount, sampleOffset, ptr);

    aSetBuffer(ptr++, 0, 0, 0, outCount << 1);
    aInterleave(ptr++, 0x440, 0x580);
    aSetBuffer(ptr++, 0, 0, 0, outCount << 2);
    aSaveBuffer(ptr++, f->dramout);
    return ptr;
}
