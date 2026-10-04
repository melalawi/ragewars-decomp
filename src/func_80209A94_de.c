#include "span_1000/code_80208410.h"
#include "types.h"




s32 func_80209A94_de(void *arg0) {
    s32 val;

    val = ((func_80209A94_S1 *)(arg0))->unk21C;
    if (val >= 8) {
        goto ge_8;
    }
    if (val >= 3) {
        goto ret1;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_8:
    if (val != 0xD) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3344_4 = 1.0f;
const float unbake_rodata_800C3348_4 = 0.5f;
const float unbake_rodata_800C334C_4 = 18.0f;
const float unbake_rodata_800C3350_4 = 0.800000012f;
const float unbake_rodata_800C3354_4 = 0.600000024f;
const float unbake_rodata_800C3358_4 = 0.5f;
const float unbake_rodata_800C335C_4 = 0.800000012f;
const float unbake_rodata_800C3360_4 = 0.400000006f;
const float unbake_rodata_800C3364_4 = 0.0061599859f;
const float unbake_rodata_800C3368_4 = 1.0f;
const float unbake_rodata_800C336C_4 = 0.0123199718f;
const float unbake_rodata_800C3370_4 = 255.0f;
const float unbake_rodata_800C3374_4 = 0.333333343f;
const float unbake_rodata_800C3378_4 = 9.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8414_4 = 30.0f;
const float unbake_rodata_800C8418_4 = 4.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C3398_8 = 4294967296.0;
const float unbake_rodata_800C33A0_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C33A8_8 = 4294967296.0;
const float unbake_rodata_800C33B0_4 = 4.0f;
const float unbake_rodata_800C33B4_4 = 0.0174532942f;
const float unbake_rodata_800C33B8_4 = 16.0f;
const float unbake_rodata_800C33BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C33C0_4 = 1.0f;
const float unbake_rodata_800C33C4_4 = 64.0f;
const float unbake_rodata_800C33C8_4 = 48.0f;
const float unbake_rodata_800C33CC_4 = 255.0f;
const float unbake_rodata_800C33D0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3324_4 = 30.0f;
const float unbake_rodata_800C3328_4 = 4.0f;
#endif
