#include "span_1000/code_80200400.h"
#include "types.h"

/** Return strlen(arg0) + 1 (byte count including the terminating NUL). */
s32 func_802016DC_de(u8 *arg0) {
    u8 *var_v1;
    u8 temp;

    var_v1 = arg0 + 1;
    if (*arg0 != 0) {
        do {
            temp = *var_v1;
            var_v1 += 1;
        } while (temp != 0);
    }
    return var_v1 - arg0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C197C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B3C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CEC_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D2C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A28_4 = 0.5f;
const float unbake_rodata_800C1A2C_4 = 6.28318596f;
const float unbake_rodata_800C1A30_4 = 0.5f;
const float unbake_rodata_800C1A34_4 = 0.00999999978f;
const float unbake_rodata_800C1A38_4 = 0.00999999978f;
#endif
