#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
M2C_UNK func_80209874(void *, s32);
s32 func_8020DD04(s32);
void func_8020DC60(void *arg0) {
    s32 temp_v0;
    temp_v0 = func_8020DD04((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0)))) + (0x18))) + 0x14);
    (*(s32 *)((s8 *)(arg0) + (0x230))) = temp_v0;
    func_80209874(arg0, temp_v0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C38D0_4 = 1.0f;
const float unbake_rodata_800C38D4_4 = 1.5f;
const float unbake_rodata_800C38D8_4 = 65536.0f;
const float unbake_rodata_800C38DC_4 = 3.05185094e-05f;
const float unbake_rodata_800C38E0_4 = 2.0f;
const float unbake_rodata_800C38E4_4 = 2.14748365e+09f;
const float unbake_rodata_800C38E8_4 = 1.0f;
const float unbake_rodata_800C38EC_4 = 0.5f;
const float unbake_rodata_800C38F0_4 = 0.300000012f;
const float unbake_rodata_800C38F4_4 = (-2.0f);
const float unbake_rodata_800C38F8_4 = 3.0f;
const float unbake_rodata_800C38FC_4 = 0.970000029f;
const float unbake_rodata_800C3900_4 = 0.0299999993f;
const float unbake_rodata_800C3904_4 = 1.52587891e-05f;
const float unbake_rodata_800C3908_4 = 0.5f;
const float unbake_rodata_800C390C_4 = 65536.0f;
const float unbake_rodata_800C3910_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A40_4 = 1.57079637f;
const float unbake_rodata_800C8A44_4 = 1.57079637f;
const float unbake_rodata_800C8A48_4 = 0.5f;
const float unbake_rodata_800C8A4C_4 = 3.14159274f;
const float unbake_rodata_800C8A50_4 = 3.14159274f;
const float unbake_rodata_800C8A54_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3978_4 = 10.2399998f;
const float unbake_rodata_800C397C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3924_4 = 10.2399998f;
const float unbake_rodata_800C3928_4 = 30.7199993f;
const float unbake_rodata_800C392C_4 = 0.204799995f;
const float unbake_rodata_800C3930_4 = 1.0f;
const float unbake_rodata_800C3934_4 = 4.09600019f;
const float unbake_rodata_800C3938_4 = 1.04857612f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C3934_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#endif
