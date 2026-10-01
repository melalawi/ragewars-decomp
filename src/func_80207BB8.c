#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern f32 D_800D2988;
extern f32 D_800C6C90;

typedef struct func_80207BB8_S1 func_80207BB8_S1;
typedef struct func_80207BB8_S2 func_80207BB8_S2;
typedef struct func_80207BB8_S3 func_80207BB8_S3;
typedef struct func_80207BB8_S4 func_80207BB8_S4;
struct func_80207BB8_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x38 - 0x18 - sizeof(void*)];
    s32 unk38;
};
struct func_80207BB8_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80207BB8_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x38 - 0x24 - sizeof(s32)];
    f32 unk38;
};
struct func_80207BB8_S4 {
    char pad0[0x64];
    f32 unk64;
};

void func_80207BB8(void *arg0, void *arg1) {
    void *temp_a3;
    s32 temp_a2;
    s32 var_v1;

    temp_a3 = &((func_80207BB8_S2 *)(((func_80207BB8_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207BB8_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x10000) {
        var_v1 = (u32)(((func_80207BB8_S1 *)(arg0))->unk38 & 0x40) < (u32)var_v1;
    }
    if ((temp_a2 & 0x4000) && !(((func_80207BB8_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (((func_80207BB8_S1 *)(arg0))->unk38 & 8) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        ((func_80207BB8_S4 *)(arg1))->unk64 = ((func_80207BB8_S4 *)(arg1))->unk64 + (D_800D2988 / ((func_80207BB8_S3 *)(temp_a3))->unk38);
    }
    if (((func_80207BB8_S4 *)(arg1))->unk64 >= D_800C6C90) {
        func_80214178(arg0, arg1, 2);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1AD0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6C90_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1E40_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1E80_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1BA0_4 = 1.0f;
#endif
