#include "basetypes.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 func_8022AAC4(void *, s32);

s32 func_8020F5A4(void **arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    temp_v0 = func_8022AAC4(temp_a0, (s32) M2C_FIELD(temp_a0, s16 *, 0x62E));
    switch (temp_v0) {
        case 0:
            return 5;
        case 1:
            return 6;
        case 2:
            return 7;
        default:
            return 4;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3D60_4 = 2.14748365e+09f;
const float unbake_rodata_800C3D64_4 = 0.00787401572f;
const float unbake_rodata_800C3D68_4 = 102.399994f;
const float unbake_rodata_800C3D6C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8E70_4 = 10.2399998f;
const float unbake_rodata_800C8E74_4 = 0.0247369502f;
const float unbake_rodata_800C8E78_4 = 0.349999994f;
const float unbake_rodata_800C8E7C_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3C00_4 = 1.57079637f;
const float unbake_rodata_800C3C04_4 = 1.57079637f;
const float unbake_rodata_800C3C08_4 = 0.5f;
const float unbake_rodata_800C3C0C_4 = 3.14159274f;
const float unbake_rodata_800C3C10_4 = 3.14159274f;
const float unbake_rodata_800C3C14_4 = 0.5f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C3C24_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C3D00_3C[] = {0x0024E2ECU, 0x0024E2F4U, 0x0024E2ECU, 0x0024E2ECU, 0x0024E2F4U, 0x0024E2ECU, 0x0024E2ECU, 0x0024E2ECU, 0x0024E2ECU, 0x0024E2F4U, 0x0024E2ECU, 0x0024E2F4U, 0x0024E2ECU, 0x0024E2ECU, 0x0024E2ECU};
#endif
