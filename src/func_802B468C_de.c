#include "span_1000/code_802B8D4C.h"
#include "types.h"
/* _init_lpfilter, drafted from ultralib src/audio/drvrnew.c: derive the low-pass filter's gain and
   its sixteen coefficients from the configured cutoff. This object carries its own copies of the
   1/16384 and 16384.0 double constants, at D_800CC838 and D_800CC840, distinct from the copies the
   inlined body in alFxNew uses. */

extern const f64 D_800C75E8_de; /* 1.0 / 16384 */
extern const f64 D_800C75F0_de; /* 16384.0 */

void func_802B468C_de(AudioLowPassFilter *lp)
{
    s32 i, temp;
    s16 fc;
    f64 ffc, fcoef;

    temp = lp->cutoff * 16384;
    fc = temp >> 15;
    lp->gain = 16384 - fc;

    lp->first = 1;
    for (i = 0; i < 8; i++)
        lp->coefficients.taps[i] = 0;

    lp->coefficients.taps[i++] = fc;
    fcoef = ffc = (f64)fc * D_800C75E8_de;

    for (; i < 16; i++) {
        fcoef *= ffc;
        lp->coefficients.taps[i] = (s16)(fcoef * D_800C75F0_de);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7508_8 = 6.103515625e-05;
const double unbake_rodata_800C7510_8 = 16384.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC838_8 = 6.103515625e-05;
#elif defined(VERSION_EU)
const double unbake_rodata_800C81D8_8 = 6.103515625e-05;
const double unbake_rodata_800C81E0_8 = 16384.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C8BA8_8 = 6.103515625e-05;
#elif defined(VERSION_DE)
const double unbake_rodata_800C75E8_8 = 6.103515625e-05;
const double unbake_rodata_800C75F0_8 = 16384.0;
#endif
