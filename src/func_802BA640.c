/* alResamplePull, drafted from ultralib src/audio/resample.c: at unity pitch pull the source and
   move its output; otherwise clip and quantise the pitch ratio, pull the input sample count it
   needs and append a resample command. The ratio limit, unity pitch and its reciprocal are the
   cartridge floats D_800CC990, the one after it, and D_800CC998. */
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

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(i, 0, 16));                             \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aResample(pkt, f, p, s)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(5, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(p, 0, 16));                             \
        _a->words.w1 = (unsigned int)(s);                               \
    }

#define aDMEMMove(pkt, i, o, c)                                         \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(10, 24, 8) | _SHIFTL(i, 0, 24);          \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

typedef Acmd *(*ALCmdHandler)(void *, s16 *, s32, s32, Acmd *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    ALCmdHandler handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct ALResampler_s {
    ALFilter filter;
    void *state;
    f32 ratio;
    s32 upitch;
    f32 delta;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    s32 motion;
} ALResampler;

extern unsigned int func_802C0CB0(void *); /* osVirtualToPhysical */

extern const float D_800CC990; /* MAX_RATIO, followed by UNITY_PITCH */
#define UNITY_PITCH (*(&D_800CC990 + 1))
extern const float D_800CC998;    /* 1 / UNITY_PITCH */

Acmd *func_802BA640(void *filter, s16 *outp, s32 outCnt, s32 sampleOffset, Acmd *p)
{
    ALResampler *f = (ALResampler *)filter;
    Acmd *ptr = p;
    s16 inp;
    s32 inCount;
    ALFilter *source = f->filter.source;
    s32 incr;
    f32 finCount;
    f32 ratio;
    f32 unity;

    inp = 320; /* AL_DECODER_OUT */

    if (!outCnt)
        return ptr;

    if (f->upitch) {

        ptr = (*source->handler)(source, &inp, outCnt, sampleOffset, p);
        aDMEMMove(ptr++, inp, *outp, outCnt << 1);

    } else {

        if (f->ratio > D_800CC990) f->ratio = D_800CC990;

        ratio = f->ratio;
        unity = UNITY_PITCH;
        f->ratio = (f32)(s32)(ratio * unity) * D_800CC998;

        finCount = f->delta + (f->ratio * (f32)outCnt);
        inCount = (s32)finCount;
        f->delta = finCount - (f32)inCount;

        ptr = (*source->handler)(source, &inp, inCount, sampleOffset, p);

        incr = (s32)(f->ratio * unity);
        aSetBuffer(ptr++, 0, inp, *outp, outCnt << 1);
        aResample(ptr++, f->first, incr, func_802C0CB0(f->state));
        f->first = 0;
    }

    return ptr;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7660_4 = 1.99995995f;
const float unbake_rodata_800C7664_4 = 32768.0f;
const float unbake_rodata_800C7668_4 = 3.05175781e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC990_4 = 1.99995995f;
const float unbake_rodata_800CC994_4 = 32768.0f;
const float unbake_rodata_800CC998_4 = 3.05175781e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C8330_4 = 1.99995995f;
const float unbake_rodata_800C8334_4 = 32768.0f;
const float unbake_rodata_800C8338_4 = 3.05175781e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8D00_4 = 1.99995995f;
const float unbake_rodata_800C8D04_4 = 32768.0f;
const float unbake_rodata_800C8D08_4 = 3.05175781e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C7740_4 = 1.99995995f;
const float unbake_rodata_800C7744_4 = 32768.0f;
const float unbake_rodata_800C7748_4 = 3.05175781e-05f;
#endif
