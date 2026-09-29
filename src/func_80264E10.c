#include "basetypes.h"

extern f32 func_80274B00(f32 arg0, f32 arg1);
extern f32 D_80146CF8[2];
typedef struct { f32 unk0; } func_80264E10_G2;
extern func_80264E10_G2 D_800C9400;
typedef struct { f32 unk0; } func_80264E10_G3;
extern func_80264E10_G3 D_800C9404;
typedef struct { f32 unk0; } func_80264E10_G4;
extern func_80264E10_G4 D_800C9408;

typedef struct func_80264E10_S1 func_80264E10_S1;
typedef struct func_80264E10_S2 func_80264E10_S2;
struct func_80264E10_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_80264E10_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    u8 unk8;
    char pad8[0x9 - 0x8 - sizeof(u8)];
    u8 unk9;
    char pad9[0x14 - 0x9 - sizeof(u8)];
    f32 unk14;
};

s32 func_80264E10(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = *(void **)arg0;
    temp_v1 = *(s32 *)temp_a0;
    switch (temp_v1) {
    case 0: {
        f32 divisor = D_80146CF8[1];
        temp_f1 = ((func_80264E10_S1 *)(arg0))->unk4 + (D_800C9400.unk0 / divisor);
        ((func_80264E10_S1 *)(arg0))->unk4 = temp_f1;
        if (((func_80264E10_S2 *)(temp_a0))->unk14 <= temp_f1) {
            return 1;
        }
        goto block_7;
    }
    case 1: {
        f32 divisor = D_80146CF8[1];
        temp_f1_2 = ((func_80264E10_S1 *)(arg0))->unk4 - (D_800C9404.unk0 / divisor);
        ((func_80264E10_S1 *)(arg0))->unk4 = temp_f1_2;
        if (temp_f1_2 <= 0.0f) {
            ((func_80264E10_S1 *)(arg0))->unk4 =
                temp_f1_2 + ((func_80264E10_S2 *)(temp_a0))->unk4;
            ((func_80264E10_S1 *)(arg0))->unk8 = func_80274B00(
                (f32)((func_80264E10_S2 *)(temp_a0))->unk8 * D_800C9408.unk0,
                (f32)((func_80264E10_S2 *)(temp_a0))->unk9 * D_800C9408.unk0);
        }
        goto block_7;
    }
    default:
block_7:
        return 0;
    }
}
