/* _doModFunc, drafted from ultralib src/audio/reverb.c: advance the chorus sawtooth by rsinc per
   sample, wrap it from +RANGE, fold it into a triangle and return it scaled by rsgain. The library
   evaluates RANGE in single precision against the cartridge's 2.0, 4.0 and 1.0 constants. */
#include "basetypes.h"

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
    void *rs;
} ALDelay;

extern const float D_800CCA28;    /* RANGE, followed by RANGE*2 */
extern const float D_800CCA30;    /* RANGE/2 */
#define RANGE_2 (*(&D_800CCA28 + 1))

f32 func_802BB3D0(ALDelay *d, s32 count)
{
    f32 val;

    d->rsval += d->rsinc * count;
    d->rsval = (d->rsval > D_800CCA28) ? d->rsval - RANGE_2 : d->rsval;

    val = d->rsval;
    val = (val < 0) ? -val : val;

    val -= D_800CCA30;

    return d->rsgain * val;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C76F8_4 = 2.0f;
const float unbake_rodata_800C76FC_4 = 4.0f;
const float unbake_rodata_800C7700_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCA28_4 = 2.0f;
const float unbake_rodata_800CCA2C_4 = 4.0f;
const float unbake_rodata_800CCA30_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C83C8_4 = 2.0f;
const float unbake_rodata_800C83CC_4 = 4.0f;
const float unbake_rodata_800C83D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8D98_4 = 2.0f;
const float unbake_rodata_800C8D9C_4 = 4.0f;
const float unbake_rodata_800C8DA0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C77D8_4 = 2.0f;
const float unbake_rodata_800C77DC_4 = 4.0f;
const float unbake_rodata_800C77E0_4 = 1.0f;
#endif
