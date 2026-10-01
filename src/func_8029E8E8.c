#include "basetypes.h"

extern f32 D_800CAC9C;
extern f32 func_802BC380(void);

f32 func_8029E8E8(f32 arg0) {
    f32 var_f0;

    if (arg0 <= 0.0f) {
        var_f0 = 0.0f;
    } else {
        var_f0 = func_802BC380();
    }
    return D_800CAC9C / var_f0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5A3C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC9C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5DAC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5DEC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5B0C_4 = 1.0f;
#endif
