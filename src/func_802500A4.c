#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C8F40;
extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);

typedef struct func_802500A4_S1 func_802500A4_S1;
typedef struct func_802500A4_S2 func_802500A4_S2;
typedef union func_802500A4_S1_UE0 { s8 v0; u8 v1; } func_802500A4_S1_UE0;
struct func_802500A4_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    void* unk18;
    char pad18[0xD8 - 0x18 - sizeof(void*)];
    u16 unkD8;
    char padD8[0xDC - 0xD8 - sizeof(u16)];
    s32 unkDC;
    char padDC[0xE0 - 0xDC - sizeof(s32)];
    func_802500A4_S1_UE0 unkE0;
};
struct func_802500A4_S2 {
    char pad0[0xE];
    s8 unkE;
    char padE[0xF - 0xE - sizeof(s8)];
    s8 unkF;
    char padF[0x24 - 0xF - sizeof(s8)];
    s32 unk24;
};

s32 func_802500A4(void *arg0, s32 arg1) {
    Vec3 sp10;
    f32 temp_f0;
    f32 threshold;
    s32 var_v1;
    s8 temp_v0;
    s32 var_v1_2;
    u16 temp_v1;
    u16 var_v0;
    u8 next_timer;
    void *temp_a0;

    func_80271FD8(&sp10, (Vec3 *)(arg1 + 0x128),
                  &((func_802500A4_S1 *)(arg0))->unk8);
    temp_f0 = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
    threshold = D_800C8F40;
    if (!(threshold <= temp_f0)) {
        var_v1 = (s32)temp_f0;
    } else {
        var_v1 = (s32)(temp_f0 - threshold) | 0x80000000;
    }
    temp_a0 = ((func_802500A4_S1 *)(arg0))->unk18;
    ((func_802500A4_S1 *)(arg0))->unkDC = var_v1;
    if ((u32)var_v1 >= (u32)(((func_802500A4_S2 *)(temp_a0))->unk24 * 2)) {
        var_v1_2 = ((func_802500A4_S2 *)(temp_a0))->unkF;
    } else {
        var_v1_2 = ((func_802500A4_S2 *)(temp_a0))->unkE;
    }

    if (var_v1_2 == -1) {
        if (((func_802500A4_S1 *)(arg0))->unkE0.v0 <= 0) {
            ((func_802500A4_S1 *)(arg0))->unkE0.v0 = 0;
            ((func_802500A4_S1 *)(arg0))->unkD8 =
                ((func_802500A4_S1 *)(arg0))->unkD8 | 4;
            return 0;
        }
        temp_v1 = ((func_802500A4_S1 *)(arg0))->unkD8;
        if (temp_v1 & 0x200) {
            ((func_802500A4_S1 *)(arg0))->unkD8 = temp_v1 | 4;
            ((func_802500A4_S1 *)(arg0))->unkE0.v0 = 0;
            return 0;
        }
        temp_v0 = ((func_802500A4_S1 *)(arg0))->unkE0.v1 - 1;
        ((func_802500A4_S1 *)(arg0))->unkE0.v0 = temp_v0;
        if (temp_v0 < 0) {
            ((func_802500A4_S1 *)(arg0))->unkE0.v0 = 0;
        }
        var_v0 = ((func_802500A4_S1 *)(arg0))->unkD8 | 4;
        goto block_20;
    } else if (((func_802500A4_S1 *)(arg0))->unkE0.v0 < 8) {
        next_timer = ((func_802500A4_S1 *)(arg0))->unkE0.v1 + 1;
        if (((func_802500A4_S1 *)(arg0))->unkD8 & 0x200) {
            ((func_802500A4_S1 *)(arg0))->unkE0.v0 = 8;
            ((func_802500A4_S1 *)(arg0))->unkD8 =
                ((func_802500A4_S1 *)(arg0))->unkD8 & 0xFFFB;
        } else {
            ((func_802500A4_S1 *)(arg0))->unkE0.v0 =
                next_timer;
            var_v0 = ((func_802500A4_S1 *)(arg0))->unkD8 | 4;
block_20:
            ((func_802500A4_S1 *)(arg0))->unkD8 = var_v0;
        }
    } else {
        ((func_802500A4_S1 *)(arg0))->unkE0.v0 = 8;
    }
    return 1;
}
