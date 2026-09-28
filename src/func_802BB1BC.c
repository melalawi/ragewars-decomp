/* _loadBuffer, drafted from ultralib src/audio/reverb.c: load count samples of the delay line at
   curr_ptr into the DMEM buffer buff, wrapping the read back to r->base when it would run past
   the end of the line. The wrapped arm emits its two loads as a pair of set-buffer and load-buffer
   commands against this function's own cartridge command words. */
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

extern u32 func_802C0CB0(void *); /* osVirtualToPhysical */

#define _SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(i, 0, 16));                             \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aLoadBuffer(pkt, s)                                             \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(4, 24, 8);                               \
        _a->words.w1 = (unsigned int)(s);                               \
    }

Acmd *func_802BB1BC(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p)
{
    Acmd *ptr = p;
    s32 after_end, before_end;
    s16 *updated_ptr, *delay_end;

    delay_end = &r->base[r->length];

    if (curr_ptr < r->base)
        curr_ptr += r->length;
    updated_ptr = curr_ptr + count;

    if (updated_ptr > delay_end) {
        after_end = updated_ptr - delay_end;
        before_end = delay_end - curr_ptr;

        aSetBuffer(ptr++, 0, buff, 0, before_end << 1);
        aLoadBuffer(ptr++, func_802C0CB0(curr_ptr));
        aSetBuffer(ptr++, 0, buff + (before_end << 1), 0, after_end << 1);
        aLoadBuffer(ptr++, func_802C0CB0(r->base));
    } else {
        aSetBuffer(ptr++, 0, buff, 0, count << 1);
        aLoadBuffer(ptr++, func_802C0CB0(curr_ptr));
    }

    aSetBuffer(ptr++, 0, 0, 0, count << 1);

    return ptr;
}
