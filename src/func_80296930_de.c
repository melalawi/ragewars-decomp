#include "span_1000/code_80297008.h"
#include "span_C76B0/data.h"
#include "types.h"



f32 func_80296930_de(f32 *arg0, f32 *arg1, f32 *arg2) {
    f32 x;
    f32 y;
    f32 z;
    f32 dot1;
    f32 dot2;

    x = arg0[0];
    y = arg0[1];
    z = arg0[2];
    dot1 = (x * arg1[0]) + (y * arg1[1]) + (z * arg1[2]);
    dot2 = (x * arg2[0]) + (y * arg2[1]) + (z * arg2[2]);
    if (dot2 == dot1) {
        return D_800C5510_de;
    }
    return (arg0[3] - dot1) / (dot2 - dot1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5440_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA6A0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C57B0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57F0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5510_4 = 1.0f;
#endif
