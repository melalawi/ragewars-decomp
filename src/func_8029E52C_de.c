#include "common/types.h"
#include "span_1000/code_8029F304.h"
#include "types.h"

/* Scales a three-float vector to the length held at D_800CAE30 + 4, taking the square root through func_802B72B0_de only when the squared length is positive. Adapted from func_8027207C_de with the square root wrapped in an inline helper that returns zero for a non-positive argument, the scaling made unconditional and the constant changed. */
extern f32 func_802B72B0_de(f32);
extern char D_800C5CA0_de;

static inline f32 safe_sqrt(f32 x) {
    if (x <= 0.0f) {
        return 0.0f;
    }
    return func_802B72B0_de(x);
}



void func_8029E52C_de(f32 *arg0) {
    f32 mag;
    f32 scale;

    mag = safe_sqrt((arg0[0] * arg0[0]) + (arg0[1] * arg0[1]) + (arg0[2] * arg0[2]));
    scale = ((func_802077F4_S2 *)(&D_800C5CA0_de))->unk4 / mag;
    arg0[0] = arg0[0] * scale;
    arg0[1] = arg0[1] * scale;
    arg0[2] = arg0[2] * scale;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BD4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE34_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F44_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5F84_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CA4_4 = 1.0f;
#endif
