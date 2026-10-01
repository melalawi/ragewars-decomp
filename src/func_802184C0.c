#include "basetypes.h"

extern void func_80274090(f32 *arg0);
extern f32 D_800C7340;
extern f32 D_800C7344;
extern f32 D_800D2988;

f32 func_802184C0(f32 arg0, f32 arg1, s32 arg2, f32 arg3) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    func_80274090(&arg0);
    func_80274090(&arg1);
    if (arg2 > 0) {
        if (arg1 < arg0) {
            arg1 += D_800C7340;
        }
    } else if (arg1 > arg0) {
        arg1 -= D_800C7344;
    }
    f3 = arg1 - arg0;
    f1 = f3 * arg3 * D_800D2988;
    f2 = f1;
    if (f1 < 0.0f) {
        f2 = -f1;
    }
    if (f3 < 0.0f) {
        if (-f3 < f2) {
            goto clamp;
        }
    } else if (f3 < f2) {
clamp:
        f1 = f3;
    }
    return f1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2180_4 = 6.28318596f;
const float unbake_rodata_800C2184_4 = 6.28318596f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7340_4 = 6.28318596f;
const float unbake_rodata_800C7344_4 = 6.28318596f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24F0_4 = 6.28318596f;
const float unbake_rodata_800C24F4_4 = 6.28318596f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2530_4 = 6.28318596f;
const float unbake_rodata_800C2534_4 = 6.28318596f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2250_4 = 6.28318596f;
const float unbake_rodata_800C2254_4 = 6.28318596f;
#endif
