#include "span_1000/code_802B53FC.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "abi.h"
#include "audio_callbacks.h"
#include "common/unused.h"
#include "span_1000/code_802B53FC.h"
#include "types.h"
/* alFxPull, drafted from ultralib src/audio/reverb.c: pull the effect's source, mix the aux left
   and right outputs into the delay line input, run each delay section (load, feed-forward and
   feedback mixes, low-pass, save, gain into the output), advance the delay line input modulo its
   length and move the result into the aux left output. */






typedef struct ALLowPass_s ALLowPass;





/* Resident 'EX' object proven in every holding ROM. */
#if defined(VERSION_DE)
#define RW_REVERB_ASSERT_EX D_800C7780
#elif defined(VERSION_US)
#define RW_REVERB_ASSERT_EX D_800C76A0
#elif defined(VERSION_EU)
#define RW_REVERB_ASSERT_EX D_800C8370
#elif defined(VERSION_EU_X)
#define RW_REVERB_ASSERT_EX D_800C8D40
#else
#define RW_REVERB_ASSERT_EX D_800CC9D0
#endif
extern char RW_REVERB_ASSERT_EX[];
extern char D_800C7784_de[]; /* "audio/reverb.c" */
extern void func_802BAC50_de(char *, char *, s32); /* __assert */
extern Acmd *func_802B5D70_de(struct ALFx *, ALDelay28 *, s32, s32, Acmd *); /* _loadOutputBuffer */
extern Acmd *func_802B60EC_de(struct ALFx *, s16 *, s32, s32, Acmd *);    /* _loadBuffer */
extern Acmd *func_802B5F68_de(struct ALFx *, s16 *, s32, s32, Acmd *);    /* _saveBuffer */

#define AL_TEMP_0 0
#define AL_TEMP_1 320
#define AL_AUX_L_OUT 1728
#define AL_AUX_R_OUT 2048











#define SWAP(in, out) \
    {                 \
        s16 t = out;  \
        out = in;     \
        in = t;       \
    }

Acmd *func_802B57F0_de(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    struct ALFx *r = (struct ALFx *)filter;
    ALFilter_s14_2 *source = (ALFilter_s14_2 *)r->filter.source;
    s16 i, buff1, buff2, input, output;
    s16 *in_ptr, *out_ptr, gain, *prev_out_ptr = 0;
    ALDelay28 *d, *pd;

    if (!source)
        func_802BAC50_de(RW_REVERB_ASSERT_EX, D_800C7784_de, 75);

    ptr = (*source->handler)(source, outp, outCount, sampleOffset, p);

    input = AL_AUX_L_OUT;
    output = AL_AUX_R_OUT;
    buff1 = AL_TEMP_0;
    buff2 = AL_TEMP_1;

    aSetBuffer(ptr++, 0, 0, 0, outCount << 1);
    aMix(ptr++, 0, 0xda83, AL_AUX_L_OUT, input);
    aMix(ptr++, 0, 0x5a82, AL_AUX_R_OUT, input);
    ptr = func_802B5F68_de(r, r->input, input, outCount, ptr);

    aClearBuffer(ptr++, output, outCount << 1);

    for (i = 0; i < r->section_count; i++) {
        d = &r->delay[i];
        in_ptr = &r->input[-d->input];
        out_ptr = &r->input[-d->output];

        if (in_ptr == prev_out_ptr) {
            SWAP(buff1, buff2);
        } else {
            ptr = func_802B60EC_de(r, in_ptr, buff1, outCount, ptr);
        }
        ptr = func_802B5D70_de(r, d, buff2, outCount, ptr);

        if (d->ffcoef) {
            aMix(ptr++, 0, (u16)d->ffcoef, buff1, buff2);
            if (!d->rs && !d->lp) {
                ptr = func_802B5F68_de(r, out_ptr, buff2, outCount, ptr);
            }
        }

        if (d->fbcoef) {
            aMix(ptr++, 0, (u16)d->fbcoef, buff2, buff1);
            ptr = func_802B5F68_de(r, in_ptr, buff1, outCount, ptr);
        }

        if (d->lp)
            ptr = func_802B625C_de(d->lp, buff2, outCount, ptr);

        if (!d->rs)
            ptr = func_802B5F68_de(r, out_ptr, buff2, outCount, ptr);

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
