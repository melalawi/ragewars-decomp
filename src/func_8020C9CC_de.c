#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"




s32 func_8020C9CC_de(void *arg0) {
    u8 temp_v1;
    s32 val;

    temp_v1 = ((func_8020C9CC_S1 *)(arg0))->unk4;
    val = temp_v1;
    if (val == 4) {
        goto ret1;
    }
    if (val >= 5) {
        goto ge_5;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_5:
    if (val != 7) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3540_4 = 9.99999997e-07f;
const float unbake_rodata_800C3544_4 = 2.0f;
const float unbake_rodata_800C3548_4 = 9.99999997e-07f;
const float unbake_rodata_800C354C_4 = 2.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8650_4 = 1.0f;
const float unbake_rodata_800C8654_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3574_4 = 2.14748365e+09f;
const float unbake_rodata_800C3578_4 = 2.14748365e+09f;
const float unbake_rodata_800C357C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3580_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C35A8_4 = 1.0f;
const float unbake_rodata_800C35AC_4 = 0.25f;
const float unbake_rodata_800C35B0_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3560_4 = 1.0f;
const float unbake_rodata_800C3564_4 = 15.0f;
#endif
