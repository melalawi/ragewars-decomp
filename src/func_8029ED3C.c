#include "basetypes.h"

extern f32 D_800CAD64;
extern f32 func_8029C9FC(f32 arg0);

f32 func_8029ED3C(f32 arg0) {
    f32 r1 = func_8029C9FC(arg0);
    f32 r2 = func_8029C9FC(arg0 + D_800CAD64);
    return r1 / r2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5B04_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAD64_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5E74_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5EB4_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5BD4_4 = 1.57079637f;
#endif
