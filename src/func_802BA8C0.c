/* alFxPull, drafted from ultralib src/audio/reverb.c: pull the effect's source, mix the aux left
   and right outputs into the delay line input, run each delay section (load, feed-forward and
   feedback mixes, low-pass, save, gain into the output), advance the delay line input modulo its
   length and move the result into the aux left output. */
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

typedef struct ALLowPass_s ALLowPass;

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
    ALLowPass *lp;
    void *rs;
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

extern char D_800CC9D0[]; /* "EX" */
extern char D_800CC9D4[]; /* "audio/reverb.c" */
extern void func_802BFD40(char *, char *, s32); /* __assert */
extern Acmd *func_802BAE40(ALFx *, ALDelay *, s32, s32, Acmd *); /* _loadOutputBuffer */
extern Acmd *func_802BB1BC(ALFx *, s16 *, s32, s32, Acmd *);    /* _loadBuffer */
extern Acmd *func_802BB038(ALFx *, s16 *, s32, s32, Acmd *);    /* _saveBuffer */
extern Acmd *func_802BB32C(ALLowPass *, s32, s32, Acmd *);      /* _filterBuffer */

#define AL_TEMP_0 0
#define AL_TEMP_1 320
#define AL_AUX_L_OUT 1728
#define AL_AUX_R_OUT 2048

#define _SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(i, 0, 16));                             \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aMix(pkt, f, g, i, o)                                           \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(12, 24, 8) | _SHIFTL(f, 16, 8) |        \
                        _SHIFTL(g, 0, 16));                             \
        _a->words.w1 = _SHIFTL(i, 16, 16) | _SHIFTL(o, 0, 16);          \
    }

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

#define SWAP(in, out) \
    {                 \
        s16 t = out;  \
        out = in;     \
        in = t;       \
    }

Acmd *func_802BA8C0(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    ALFx *r = (ALFx *)filter;
    ALFilter *source = r->filter.source;
    s16 i, buff1, buff2, input, output;
    s16 *in_ptr, *out_ptr, gain, *prev_out_ptr = 0;
    ALDelay *d, *pd;

    if (!source)
        func_802BFD40(D_800CC9D0, D_800CC9D4, 75);

    ptr = (*source->handler)(source, outp, outCount, sampleOffset, p);

    input = AL_AUX_L_OUT;
    output = AL_AUX_R_OUT;
    buff1 = AL_TEMP_0;
    buff2 = AL_TEMP_1;

    aSetBuffer(ptr++, 0, 0, 0, outCount << 1);
    aMix(ptr++, 0, 0xda83, AL_AUX_L_OUT, input);
    aMix(ptr++, 0, 0x5a82, AL_AUX_R_OUT, input);
    ptr = func_802BB038(r, r->input, input, outCount, ptr);

    aClearBuffer(ptr++, output, outCount << 1);

    for (i = 0; i < r->section_count; i++) {
        d = &r->delay[i];
        in_ptr = &r->input[-d->input];
        out_ptr = &r->input[-d->output];

        if (in_ptr == prev_out_ptr) {
            SWAP(buff1, buff2);
        } else {
            ptr = func_802BB1BC(r, in_ptr, buff1, outCount, ptr);
        }
        ptr = func_802BAE40(r, d, buff2, outCount, ptr);

        if (d->ffcoef) {
            aMix(ptr++, 0, (u16)d->ffcoef, buff1, buff2);
            if (!d->rs && !d->lp) {
                ptr = func_802BB038(r, out_ptr, buff2, outCount, ptr);
            }
        }

        if (d->fbcoef) {
            aMix(ptr++, 0, (u16)d->fbcoef, buff2, buff1);
            ptr = func_802BB038(r, in_ptr, buff1, outCount, ptr);
        }

        if (d->lp)
            ptr = func_802BB32C(d->lp, buff2, outCount, ptr);

        if (!d->rs)
            ptr = func_802BB038(r, out_ptr, buff2, outCount, ptr);

        if (d->gain)
            aMix(ptr++, 0, (u16)d->gain, buff2, output);

        prev_out_ptr = &r->input[d->output];
    }

    r->input += outCount;
    if (r->input > &r->base[r->length])
        r->input -= r->length;

    aDMEMMove(ptr++, output, AL_AUX_L_OUT, outCount << 1);

    return ptr;
}
