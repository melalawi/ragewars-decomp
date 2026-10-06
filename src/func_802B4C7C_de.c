#include "span_1000/code_802B4730.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "abi.h"
#include "audio_callbacks.h"
#include "common/unused.h"
#include "types.h"
/* _pullSubFrame, drafted from ultralib src/audio/env.c: when the envelope mixer is playing, pull
   its source and append the buffer, volume and envelope-mixer commands for one subframe,
   recomputing the ramp targets and rates on the first pull after a change. */


















extern s16 D_800D4210[128];    /* eqpower */
#if defined(VERSION_US)
#define RW_AUDIO_ASSERT_EX D_800C7520
#elif defined(VERSION_DE)
#define RW_AUDIO_ASSERT_EX D_800C7600
#elif defined(VERSION_EU)
#define RW_AUDIO_ASSERT_EX D_800C81F0
#elif defined(VERSION_EU_X)
#define RW_AUDIO_ASSERT_EX D_800C8BC0
#else
#define RW_AUDIO_ASSERT_EX D_800CC850
#endif
extern char RW_AUDIO_ASSERT_EX[]; /* Resident "EX" assertion expression. */
extern char D_800C7604[];      /* "audio/env.c" */

extern void func_802BAC50_de(const char *, const char *, s32);          /* __assert */
extern unsigned int func_802BBBC0_de(void *);                           /* osVirtualToPhysical */
  /* _getRate */

Acmd *func_802B4C7C_de(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    struct ALEnvMixer_s *e = (struct ALEnvMixer_s *)filter;
    ALFilter_s14_2 *source = e->filter.source;

    if (e->motion != 1 || !outCount)
        return ptr;

    ((source) ? ((void)0) : func_802BAC50_de(RW_AUDIO_ASSERT_EX, D_800C7604, 366));

    ptr = (*source->handler)(source, inp, outCount, sampleOffset, p);

    aSetBuffer(ptr++, 0x00, *inp, 1088 + *outp, outCount << 1);
    aSetBuffer(ptr++, 0x08, 1408 + *outp, 1728 + *outp, 2048 + *outp);

    if (e->first) {
        e->first = 0;

        e->ltgt = (e->volume * D_800D4210[e->pan]) >> 15;
        e->lratm = func_802B4F68_de((f64)e->cvolL, (f64)e->ltgt, e->segEnd, &(e->lratl));
        e->rtgt = (e->volume * D_800D4210[128 - e->pan - 1]) >> 15;
        e->rratm = func_802B4F68_de((f64)e->cvolR, (f64)e->rtgt, e->segEnd, &(e->rratl));

        aSetVolume(ptr++, 0x02 | 0x04, e->cvolL, 0, 0);
        aSetVolume(ptr++, 0x00 | 0x04, e->cvolR, 0, 0);
        aSetVolume(ptr++, 0x02 | 0x00, e->ltgt, e->lratm, e->lratl);
        aSetVolume(ptr++, 0x00 | 0x00, e->rtgt, e->rratm, e->rratl);
        aSetVolume(ptr++, 0x08, e->dryamt, 0, e->wetamt);
        aEnvMixer(ptr++, 0x01 | 0x08, func_802BBBC0_de(e->state));
    }
    else
        aEnvMixer(ptr++, 0x00 | 0x08, func_802BBBC0_de(e->state));

    *inp += (outCount << 1);
    e->delta += outCount;

    return ptr;
}

