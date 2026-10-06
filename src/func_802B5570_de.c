#include "span_1000/code_802B53FC.h"
#include "abi.h"
/* alResamplePull, drafted from ultralib src/audio/resample.c: at unity pitch pull the source and
   move its output; otherwise clip and quantise the pitch ratio, pull the input sample count it
   needs and append a resample command. The ratio limit, unity pitch and its reciprocal are the
   cartridge floats D_800C7740_de, the one after it, and D_800C7748_de. */
#include "types.h"
#include "acmd.h"
#include "abi.h"
#include "common/unused.h"
#include "span_C76B0/data.h"

extern unsigned int func_802BBBC0_de(void *); /* osVirtualToPhysical */

 /* MAX_RATIO, followed by UNITY_PITCH */
#define UNITY_PITCH D_800C7744_de

    /* 1 / UNITY_PITCH */

Acmd *func_802B5570_de(void *filter, s16 *outp, s32 outCnt, s32 sampleOffset, Acmd *p)
{
    ALResampler_s *f = (ALResampler_s *)filter;
    Acmd *ptr = p;
    s16 inp;
    s32 inCount;
    ALFilter_s14_2 *source = f->filter.source;
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

        if (f->ratio > D_800C7740_de) f->ratio = D_800C7740_de;

        ratio = f->ratio;
        unity = UNITY_PITCH;
        f->ratio = (f32)(s32)(ratio * unity) * D_800C7748_de;

        finCount = f->delta + (f->ratio * (f32)outCnt);
        inCount = (s32)finCount;
        f->delta = finCount - (f32)inCount;

        ptr = (*source->handler)(source, &inp, inCount, sampleOffset, p);

        incr = (s32)(f->ratio * unity);
        aSetBuffer(ptr++, 0, inp, *outp, outCnt << 1);
        aResample(ptr++, f->first, incr, func_802BBBC0_de(f->state));
        f->first = 0;
    }

    return ptr;
}

