#include "basetypes.h"

extern void *func_8022A82C(char *);
extern f32 func_80209B64(void *arg0);
extern f32 func_80274B00(f32 arg0, f32 arg1);
extern s32 D_801468A0;
extern f32 D_800C6F40;
extern f32 D_800C6F48;

typedef struct func_8020EA10_S1 func_8020EA10_S1;
typedef struct func_8020EA10_S2 func_8020EA10_S2;
typedef struct func_8020EA10_S3 func_8020EA10_S3;
typedef struct func_8020EA10_S4 func_8020EA10_S4;
struct func_8020EA10_S1 {
    char pad0[0x78];
    s32 unk78;
};
struct func_8020EA10_S2 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_8020EA10_S3 {
    char pad0[0x8F];
    u8 unk8F;
};
struct func_8020EA10_S4 {
    char pad0[0x4];
    f32 unk4;
};

s32 func_8020EA10(void **arg0) {
    char *base;
    f32 temp_f20;

    base = (char *)&D_801468A0;
    if (((func_8020EA10_S1 *)(base))->unk78 == 0) {
        return 0;
    }
    if (((func_8020EA10_S3 *)((((func_8020EA10_S2 *)((*arg0)))->unk5D8)))->unk8F != 0) {
        return 0;
    }
    if (func_8022A82C(base - 0x1860) != 0) {
        return 0;
    }
    temp_f20 = func_80209B64(arg0) * D_800C6F40 + ((func_8020EA10_S4 *)(&D_800C6F40))->unk4;
    if (temp_f20 < func_80274B00(0.0f, D_800C6F48)) {
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1D80_4 = 0.600000024f;
const float unbake_rodata_800C1D84_4 = 0.200000003f;
const float unbake_rodata_800C1D88_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6F40_4 = 0.600000024f;
const float unbake_rodata_800C6F44_4 = 0.200000003f;
const float unbake_rodata_800C6F48_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C20F0_4 = 0.600000024f;
const float unbake_rodata_800C20F4_4 = 0.200000003f;
const float unbake_rodata_800C20F8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2130_4 = 0.600000024f;
const float unbake_rodata_800C2134_4 = 0.200000003f;
const float unbake_rodata_800C2138_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1E50_4 = 0.600000024f;
const float unbake_rodata_800C1E54_4 = 0.200000003f;
const float unbake_rodata_800C1E58_4 = 1.0f;
#endif
