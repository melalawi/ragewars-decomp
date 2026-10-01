#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_802127F4(void *arg0) {
    void *temp_s0;
    temp_s0 = (*(void **)((s8 *)((*(void **)((s8 *)(arg0) + (0x1D8)))) + (0x1454)));
    (*(s32 *)((s8 *)(temp_s0) + (0x220))) = 0;
    func_80209988(temp_s0);
    (*(s32 *)((s8 *)(temp_s0) + (0x2FC))) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4078_8 = 4294967296.0;
const double unbake_rodata_800C4080_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9220_4 = 0.333333343f;
const float unbake_rodata_800C9224_4 = 0.5f;
const double unbake_rodata_800C9228_8 = 4294967296.0;
const float unbake_rodata_800C9230_4 = 1.0f;
const float unbake_rodata_800C9234_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4188_4 = 0.5f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C41B0_8 = 4294967296.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C411C_4 = 1.0f;
const float unbake_rodata_800C4120_4 = (-2000.0f);
const float unbake_rodata_800C4124_4 = 2000.0f;
const float unbake_rodata_800C4128_4 = (-1.0f);
const float unbake_rodata_800C412C_4 = 1.0f;
#endif
