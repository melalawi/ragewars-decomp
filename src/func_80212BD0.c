#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80212BD0(void *arg0) {
    void *temp_s0;
    temp_s0 = (*(void **)((s8 *)((*(void **)((s8 *)(arg0) + (0x1D8)))) + (0x1454)));
    (*(s32 *)((s8 *)(temp_s0) + (0x220))) = 0;
    func_80209988(temp_s0);
    (*(s32 *)((s8 *)(temp_s0) + (0x2FC))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4098_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9250_8 = 4294967296.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C41E8_4 = 3072.0f;
const float unbake_rodata_800C41EC_4 = 0.5f;
const float unbake_rodata_800C41F0_4 = 0.25f;
const float unbake_rodata_800C41F4_4 = 0.5f;
const float unbake_rodata_800C41F8_4 = 1.0f;
const float unbake_rodata_800C41FC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41CC_4 = 127.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4158_4 = 2.14748365e+09f;
#endif
