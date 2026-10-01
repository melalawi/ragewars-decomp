#include "basetypes.h"

extern f32 D_800C99A0;
extern f32 D_800C99A8;
extern f32 func_802BC380(f32);
extern f32 func_80274640(f32 arg0);

f32 func_8027266C(f32 *arg0) {
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
    ratio = y / func_802BC380(magnitude_squared);
    if (ratio < *(&D_800C99A0 + 1)) {
        return zero;
    }
    if (D_800C99A8 < ratio) {
        goto return_zero;
    }
    return func_80274640(ratio) - *(&D_800C99A8 + 1);

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
