#include "basetypes.h"

typedef struct func_8020F984_S1 func_8020F984_S1;
typedef struct func_8020F984_S2 func_8020F984_S2;
typedef struct func_8020F984_S3 func_8020F984_S3;
struct func_8020F984_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8020F984_S2 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    void* unk3C;
    char pad3C[0x6C - 0x3C - sizeof(void*)];
    s32 unk6C;
    char pad6C[0x94 - 0x6C - sizeof(s32)];
    s32 unk94;
};
struct func_8020F984_S3 {
    char pad0[0x100];
    s32 unk100;
};

extern func_8020F984_S1 D_800C7000;

s32 func_8020F984(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_v0;
    s32 mask;
    s32 var_a1;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = -1;
    var_f1 = D_800C7000.unk4;
    var_v1 = 0;
    if (((func_8020F984_S2 *)(var_a0))->unk38 > 0) {
        mask = 0x300000;
        temp_f2 = var_f1;
        temp_v0 = ((func_8020F984_S2 *)(var_a0))->unk38;
        do {
            if ((((func_8020F984_S3 *)(((func_8020F984_S2 *)(var_a0))->unk3C))->unk100 & mask) &&
                ((temp_f0 = (f32)((func_8020F984_S2 *)(var_a0))->unk94, temp_f0 < var_f1) ||
                 (var_f1 == temp_f2)) &&
                (((func_8020F984_S2 *)(var_a0))->unk6C != 0)) {
                var_f1 = temp_f0;
                var_a1 = var_v1;
                var_a0++;
                var_a0--;
            }
            var_v1 += 1;
            var_a0 += 4;
        } while (var_v1 < temp_v0);
    }
    return var_a1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E44_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7004_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C21B4_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C21F4_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1F14_4 = (-1.0f);
#endif
