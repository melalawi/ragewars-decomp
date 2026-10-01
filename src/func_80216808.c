#include "basetypes.h"

extern void func_80217074(void *arg0, f32 arg1);
extern f32 D_800D2988;

void func_80216808(void *arg0, s32 arg1, f32 arg2, f32 arg3) {
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;

    f0 = arg2;
    f1 = arg3;
    f3 = f1;
    if (f0 < f1 || (f0 = -f0, f1 < f0)) {
        f1 = f0;
    }
    f1 = f1 * D_800D2988;
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
    func_80217074(arg0, f1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C45D8_4 = 80.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9798_4 = 80.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C44E0_8 = 4294967296.0;
const double unbake_rodata_800C44E8_8 = 4294967296.0;
const double unbake_rodata_800C44F0_8 = 4294967296.0;
const double unbake_rodata_800C44F8_8 = 4294967296.0;
const double unbake_rodata_800C4500_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C44B8_8 = 4294967296.0;
const double unbake_rodata_800C44C0_8 = 4294967296.0;
const double unbake_rodata_800C44C8_8 = 4294967296.0;
const double unbake_rodata_800C44D0_8 = 4294967296.0;
const double unbake_rodata_800C44D8_8 = 4294967296.0;
const float unbake_rodata_800C44E0_4 = 9.58767268e-05f;
const float unbake_rodata_800C44E4_4 = 9.58767268e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C45C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C45C8_4 = 2.14748365e+09f;
const float unbake_rodata_800C45CC_4 = 2.14748365e+09f;
const float unbake_rodata_800C45D0_4 = 2.14748365e+09f;
const float unbake_rodata_800C45D4_4 = 2.14748365e+09f;
const float unbake_rodata_800C45D8_4 = 2.14748365e+09f;
const float unbake_rodata_800C45DC_4 = 2.14748365e+09f;
const float unbake_rodata_800C45E0_4 = 2.14748365e+09f;
#endif
