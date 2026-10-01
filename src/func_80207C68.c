#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_80207C68(void *arg0, s32 *arg1) {
    if (!((*(s32 *)((s8 *)((*(void **)((s8 *)(arg0) + (0x18)))) + (0x38))) & 0x80)) {
        *arg1 &= 0xFFFDFFFF;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E58_4 = 0.0136135686f;
const float unbake_rodata_800C2E5C_4 = 1.79049289f;
const float unbake_rodata_800C2E60_4 = 1.0f;
const float unbake_rodata_800C2E64_4 = 1.79049289f;
const float unbake_rodata_800C2E68_4 = 1.0f;
const float unbake_rodata_800C2E6C_4 = 1.79049289f;
const float unbake_rodata_800C2E70_4 = 1.79049289f;
const float unbake_rodata_800C2E74_4 = 1.0f;
const float unbake_rodata_800C2E78_4 = 1.0f;
const float unbake_rodata_800C2E7C_4 = 25.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DFC_4 = 150.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EB8_4 = 1.0f;
const float unbake_rodata_800C2EBC_4 = 9.99999975e-06f;
const float unbake_rodata_800C2EC0_4 = 100000000.0f;
const float unbake_rodata_800C2EC4_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2EF4_4 = 150.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D0C_4 = 150.0f;
#endif
