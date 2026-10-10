#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "resident_event_handler.h"
#include "shared/func_802B80B4_eu_closed.h"
#include "span_1000/code_80200610.h"
#include "types.h"
s32 func_802B8CF0_de(void *arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

extern s32 D_800F2CC0;
extern s32 D_800F2CE0;

void func_8020095C_de(s32 arg0, s8 *arg1, u32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s8 *var_s0;
    u32 var_s1;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    var_s2 = arg0;
    var_s0 = arg1;
    var_s1 = arg2;
    var_s3 = -(D_800C8140_de == 0);
    if (var_s1 != 0) {
loop_1:
        temp_a0 = var_s2;
        if (var_s2 & 3) {
            var_s2 += 1;
            *var_s0 = func_80200840_de(temp_a0);
            var_s1 -= 1;
            var_s0 += 1;
            if (var_s1 != 0) {
                goto loop_1;
            }
        }
    }
    if (var_s1 >= 4U) {
        var_v0 = var_s1 < 0x10U;
        do {
            if ((var_v0 == 0) && (!((s32) var_s0 & 0xF) & (~var_s3 != 0))) {
                var_s3 = func_802B8CF0_de(&D_800F2CE0, 1, 0, var_s2, (s32) var_s0, var_s1, &D_800F2CC0);
                var_v0_2 = var_s1 < 4U;
                if (var_s3 != -1) {
                    func_802BB2A0_de((s32) &D_800F2CC0, 0, 1);
                    var_s1 = 0;
                    goto block_10;
                }
            } else {
                temp_v0 = func_802005A0_de(var_s2);
                var_s0[0] = (s8) (temp_v0 >> 0x18);
                var_s0[1] = (s8) (temp_v0 >> 0x10);
                var_s0[2] = (s8) (temp_v0 >> 8);
                var_s0[3] = (u8) temp_v0;
                var_s0 += 4;
                var_s2 += 4;
                var_s1 -= 4;
block_10:
                var_v0_2 = var_s1 < 4U;
            }
            var_v0 = var_s1 < 0x10U;
        } while (var_v0_2 == 0);
    }
    if (var_s1 != 0) {
        do {
            temp_a0_2 = var_s2;
            var_s2 += 1;
            *var_s0 = func_80200840_de(temp_a0_2);
            var_s1 -= 1;
            var_s0 += 1;
        } while (var_s1 != 0);
    }
}
