#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);

typedef struct func_80207C94_S1 func_80207C94_S1;
typedef struct func_80207C94_S2 func_80207C94_S2;
typedef struct func_80207C94_S3 func_80207C94_S3;
typedef struct func_80207C94_S4 func_80207C94_S4;
struct func_80207C94_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x38 - 0x18 - sizeof(void*)];
    s32 unk38;
};
struct func_80207C94_S2 {
    char pad0[0x14];
    char unk14;
};
struct func_80207C94_S3 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x50 - 0x24 - sizeof(s32)];
    f32 unk50;
};
struct func_80207C94_S4 {
    s32 unk0;
    char pad0[0x40 - 0x0 - sizeof(s32)];
    f32 unk40;
};

void func_80207C94(void *arg0, void *arg1) {
    s32 temp_a2;
    void *temp_a3;
    s32 var_v1;
    s32 temp_v0;

    temp_a3 = &((func_80207C94_S2 *)(((func_80207C94_S1 *)(arg0))->unk18))->unk14;
    temp_a2 = ((func_80207C94_S3 *)(temp_a3))->unk24;
    var_v1 = 1;
    if (temp_a2 & 0x20) {
        temp_v0 = ((func_80207C94_S4 *)(arg1))->unk0 & 0x20000;
        var_v1 = (u32)0 < (u32)temp_v0;
    }
    if ((temp_a2 & 0x200) && !(((func_80207C94_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if ((((func_80207C94_S3 *)(temp_a3))->unk24 & 0x800) && (((func_80207C94_S1 *)(arg0))->unk38 & 0x40)) {
        var_v1 = 0;
    }
    if (var_v1 != 0) {
        if (((func_80207C94_S4 *)(arg1))->unk40 >= ((func_80207C94_S3 *)(temp_a3))->unk50) {
            func_80214178(arg0, arg1, 3);
        }
    } else {
        ((func_80207C94_S4 *)(arg1))->unk40 = 0.0f;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E80_4 = 1.0f;
const float unbake_rodata_800C2E84_4 = 1.0f;
const float unbake_rodata_800C2E88_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E10_4 = 300.0f;
const float unbake_rodata_800C7E14_4 = 22.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EC8_4 = 17.0f;
const float unbake_rodata_800C2ECC_4 = 255.0f;
const float unbake_rodata_800C2ED0_4 = 8.53333378f;
const float unbake_rodata_800C2ED4_4 = 17.0f;
const float unbake_rodata_800C2ED8_4 = 255.0f;
const float unbake_rodata_800C2EDC_4 = 8.53333378f;
const float unbake_rodata_800C2EE0_4 = 128.0f;
const float unbake_rodata_800C2EE4_4 = 0.425000012f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2EF8_4 = 1.0f;
const float unbake_rodata_800C2EFC_4 = 9.99999975e-06f;
const float unbake_rodata_800C2F00_4 = 100000000.0f;
const float unbake_rodata_800C2F04_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D20_4 = 300.0f;
const float unbake_rodata_800C2D24_4 = 22.5f;
#endif
