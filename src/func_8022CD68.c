#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800C7E70;
extern f32 D_800C7E74;
extern f32 D_800C7E78;
void func_8022CD68(void *arg0, void *arg1) {
    if ((*(f32 *)((s8 *)(arg0) + (0x6A4))) < 0.0f) {
        (*(f32 *)((s8 *)(arg0) + (0x6C4))) = (f32) D_800C7E70;
    } else {
        (*(f32 *)((s8 *)(arg0) + (0x6C4))) = (f32) D_800C7E74;
    }
    (*(f32 *)((s8 *)(arg1) + (0x20))) = (f32) D_800C7E78;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CB0_4 = (-30.7199993f);
const float unbake_rodata_800C2CB4_4 = 30.7199993f;
const float unbake_rodata_800C2CB8_4 = 307.199982f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E70_4 = (-30.7199993f);
const float unbake_rodata_800C7E74_4 = 30.7199993f;
const float unbake_rodata_800C7E78_4 = 307.199982f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3024_4 = (-30.7199993f);
const float unbake_rodata_800C3028_4 = 30.7199993f;
const float unbake_rodata_800C302C_4 = 307.199982f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3064_4 = (-30.7199993f);
const float unbake_rodata_800C3068_4 = 30.7199993f;
const float unbake_rodata_800C306C_4 = 307.199982f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D80_4 = (-30.7199993f);
const float unbake_rodata_800C2D84_4 = 30.7199993f;
const float unbake_rodata_800C2D88_4 = 307.199982f;
#endif
