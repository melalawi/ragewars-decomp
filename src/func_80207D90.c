#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern f32 D_800D2988;

typedef struct func_80207D90_S1 func_80207D90_S1;
typedef struct func_80207D90_S2 func_80207D90_S2;
typedef struct func_80207D90_S3 func_80207D90_S3;
typedef struct func_80207D90_S4 func_80207D90_S4;
struct func_80207D90_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x38 - 0x18 - sizeof(void*)];
    s32 unk38;
};
struct func_80207D90_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80207D90_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x38 - 0x24 - sizeof(s32)];
    f32 unk38;
};
struct func_80207D90_S4 {
    char pad0[0x64];
    f32 unk64;
};

void func_80207D90(void *arg0, void *arg1) {
    void *temp_a3;
    s32 temp_a2;
    s32 var_v1;

    temp_a3 = &((func_80207D90_S2 *)(((func_80207D90_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207D90_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x20000) {
        var_v1 = (u32)(((func_80207D90_S1 *)(arg0))->unk38 & 0x40) < (u32)var_v1;
    }
    if ((temp_a2 & 0x8000) && !(((func_80207D90_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (((func_80207D90_S1 *)(arg0))->unk38 & 8) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        ((func_80207D90_S4 *)(arg1))->unk64 = ((func_80207D90_S4 *)(arg1))->unk64 - (D_800D2988 / ((func_80207D90_S3 *)(temp_a3))->unk38);
    }
    if (((func_80207D90_S4 *)(arg1))->unk64 <= 0.0f) {
        func_80214178(arg0, arg1, 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F00_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7FE0_4 = 1.0f;
const float unbake_rodata_800C7FE4_4 = 1.0f;
const float unbake_rodata_800C7FE8_4 = 1.79049289f;
const float unbake_rodata_800C7FEC_4 = 1.0f;
const float unbake_rodata_800C7FF0_4 = 1.79049289f;
const float unbake_rodata_800C7FF4_4 = 1.0f;
const float unbake_rodata_800C7FF8_4 = 1.79049289f;
const float unbake_rodata_800C7FFC_4 = 1.79049289f;
const float unbake_rodata_800C8000_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2F6C_4 = 0.00390625f;
const float unbake_rodata_800C2F70_4 = 0.25f;
const float unbake_rodata_800C2F74_4 = 256.0f;
const float unbake_rodata_800C2F78_4 = 0.00390625f;
const float unbake_rodata_800C2F7C_4 = 0.600000024f;
const float unbake_rodata_800C2F80_4 = 0.00390625f;
const float unbake_rodata_800C2F84_4 = 0.800000012f;
const float unbake_rodata_800C2F88_4 = 256.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2F3C_4 = 75.0f;
const float unbake_rodata_800C2F40_4 = 15.0f;
const float unbake_rodata_800C2F44_4 = 75.0f;
const float unbake_rodata_800C2F48_4 = 7.5f;
const float unbake_rodata_800C2F4C_4 = 2.14748365e+09f;
const float unbake_rodata_800C2F50_4 = 0.0666666701f;
const float unbake_rodata_800C2F54_4 = 1.5f;
const float unbake_rodata_800C2F58_4 = 15.0f;
const float unbake_rodata_800C2F5C_4 = 2.14748365e+09f;
const float unbake_rodata_800C2F60_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2EF0_4 = 1.0f;
const float unbake_rodata_800C2EF4_4 = 1.0f;
const float unbake_rodata_800C2EF8_4 = 1.79049289f;
const float unbake_rodata_800C2EFC_4 = 1.0f;
const float unbake_rodata_800C2F00_4 = 1.79049289f;
const float unbake_rodata_800C2F04_4 = 1.0f;
const float unbake_rodata_800C2F08_4 = 1.79049289f;
const float unbake_rodata_800C2F0C_4 = 1.79049289f;
const float unbake_rodata_800C2F10_4 = 1.0f;
#endif
