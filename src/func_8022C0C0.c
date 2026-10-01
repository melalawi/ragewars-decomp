#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800D2988;
void func_8022C0C0(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    temp_f1 = (*(f32 *)((s8 *)(arg0) + (0x678)));
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        (*(f32 *)((s8 *)(arg0) + (0x678))) = temp_f0;
        if (temp_f0 < 0.0f) {
            (*(f32 *)((s8 *)(arg0) + (0x678))) = 0.0f;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7288_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC5B8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6298_1C[] = {0x002A8CACU, 0x002A8CBCU, 0x002A8CECU, 0x002A8CCCU, 0x002A8CDCU, 0x002A8CDCU, 0x002A8CECU};
const float unbake_rodata_800C62B4_4 = 24.0f;
const float unbake_rodata_800C62B8_4 = 12.0f;
const float unbake_rodata_800C62BC_4 = 6.0f;
const float unbake_rodata_800C62C0_4 = 16.0f;
const float unbake_rodata_800C62C4_4 = 8.0f;
const float unbake_rodata_800C62C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6270_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C61E0_8 = 4294967296.0;
const float unbake_rodata_800C61E8_4 = 1.0f;
const float unbake_rodata_800C61EC_4 = 1.0f;
#endif
