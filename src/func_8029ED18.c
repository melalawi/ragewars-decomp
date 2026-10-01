#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_8029C9FC(f32);
extern f32 D_800CAD60;
void func_8029ED18(f32 arg0) {
    func_8029C9FC(arg0 + D_800CAD60);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5B00_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAD60_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5E70_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5EB0_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5BD0_4 = 1.57079637f;
#endif
