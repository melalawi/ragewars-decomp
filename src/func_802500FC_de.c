#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8024E914.h"
#include "types.h"



extern f32 D_800C3E50_de;
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);







s32 func_802500FC_de(void *arg0, s32 arg1) {
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

    func_80271F68_de(&sp10, (Vec3 *)(arg1 + 0x128),
                  &((func_802500A4_S1 *)(arg0))->unk8);
    temp_f0 = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
    threshold = D_800C3E50_de;
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
