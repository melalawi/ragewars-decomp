#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"


extern f32 func_802B72B0_de(void);

f32 func_8029D8E8_de(f32 arg0) {
    f32 var_f0;

    if (arg0 <= 0.0f) {
        var_f0 = 0.0f;
    } else {
        var_f0 = func_802B72B0_de();
    }
    return D_800C5B0C_de / var_f0;
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
