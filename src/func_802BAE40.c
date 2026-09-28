/* _loadOutputBuffer, drafted from ultralib src/audio/reverb.c: load a delay section's output into
   a DMEM buffer; with a chorus resampler, modulate the read position by _doModFunc, load the
   varying number of samples it needs and resample them to incount. The pitch arithmetic is in
   single precision against the cartridge's UNITY_PITCH, 1/UNITY_PITCH and 1.0 constants, with
   UNITY_PITCH held in a float local as the cartridge keeps it in a saved register. */
#include "basetypes.h"

typedef union {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
    long long force_union_align;
} Acmd;

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
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
} ALResampler;

typedef struct {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    void *lp;
    ALResampler *rs;
} ALDelay;

typedef struct {
    ALFilter filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay *delay;
    u8 section_count;
    void *paramHdl;
} ALFx;

extern const float D_800CCA18; /* 1/CONVERT, followed by UNITY_PITCH */
extern const float D_800CCA20; /* 1/UNITY_PITCH */
extern const float D_800CCA24; /* 1.0 */
#define UNITY_PITCH (*(&D_800CCA18 + 1))

extern f32 func_802BB3D0(ALDelay *, s32);                    /* _doModFunc */
extern Acmd *func_802BB1BC(ALFx *, s16 *, s32, s32, Acmd *); /* _loadBuffer */
extern u32 func_802C0CB0(void *);                            /* osVirtualToPhysical */

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

Acmd *func_802BAE40(ALFx *r, ALDelay *d, s32 buff, s32 incount, Acmd *p)
{
    Acmd *ptr = p;
    s32 ratio, count, rbuff = 640;
    s16 *out_ptr;
    f32 fincount, fratio, delta;
    s32 ramalign = 0, length;
    f32 unity;

    if (d->rs) {
        length = d->output - d->input;
        delta = func_802BB3D0(d, incount);
        delta /= length;
        unity = UNITY_PITCH;
        delta = (s32)(delta * unity);
        delta = delta * D_800CCA20;
        fratio = D_800CCA24 - delta;

        fincount = d->rs->delta + (fratio * (f32)incount);
        count = (s32)fincount;
        d->rs->delta = fincount - (f32)count;

        out_ptr = &r->input[-(d->output - d->rsdelta)];
        ramalign = ((s32)out_ptr & 0x7) >> 1;

        ptr = func_802BB1BC(r, out_ptr - ramalign, rbuff, count + ramalign, ptr);

        ratio = (s32)(fratio * unity);
        aSetBuffer(ptr++, 0, rbuff + (ramalign << 1), buff, incount << 1);
        aResample(ptr++, d->rs->first, ratio, func_802C0CB0(d->rs->state));

        d->rs->first = 0;
        d->rsdelta += count - incount;
    } else {
        out_ptr = &r->input[-d->output];
        ptr = func_802BB1BC(r, out_ptr, buff, incount, ptr);
    }

    return ptr;
}
