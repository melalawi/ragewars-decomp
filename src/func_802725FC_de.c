#include "span_1000/code_8027230C.h"
#include "span_C76B0/data.h"
#include "types.h"



extern f32 func_802B72B0_de(f32);
extern f32 func_802745D0_de(f32 arg0);

f32 func_802725FC_de(f32 *arg0) {
    f32 y;
    f32 zero;
    f32 x;
    f32 z;
    f32 magnitude_squared;
    f32 ratio;

    y = arg0[1];
    zero = 0.0f;
    x = arg0[0];
    z = arg0[2];
    if (y == zero) {
        return zero;
    }
    magnitude_squared = (x * x) + (y * y) + (z * z);
    if (magnitude_squared == zero) {
        return zero;
    }
    ratio = y / func_802B72B0_de(magnitude_squared);
    if (ratio < *(&D_800C48B0_de + 1)) {
        return zero;
    }
    if (D_800C48B8_de < ratio) {
        goto return_zero;
    }
    return func_802745D0_de(ratio) - *(&D_800C48B8_de + 1);

return_zero:
    return zero;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47E4_4 = (-1.0f);
const float unbake_rodata_800C47E8_4 = 1.0f;
const float unbake_rodata_800C47EC_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99A4_4 = (-1.0f);
const float unbake_rodata_800C99A8_4 = 1.0f;
const float unbake_rodata_800C99AC_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B64_4 = (-1.0f);
const float unbake_rodata_800C4B68_4 = 1.0f;
const float unbake_rodata_800C4B6C_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BA4_4 = (-1.0f);
const float unbake_rodata_800C4BA8_4 = 1.0f;
const float unbake_rodata_800C4BAC_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48B4_4 = (-1.0f);
const float unbake_rodata_800C48B8_4 = 1.0f;
const float unbake_rodata_800C48BC_4 = 1.57079637f;
#endif
