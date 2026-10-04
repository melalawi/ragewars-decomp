#include "common/types.h"
#include "span_1000/code_802A776C.h"
#include "types.h"
/* Finds or allocates one of four records and updates its parameters. */









s32 func_802A6FB8_de(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 var_a1;
    u32 key;
    char *temp_v1;
    char *var_v1;
    char *var_v1_2;

    var_a1 = 0;
    key = arg2 & 0xFFFF;
    var_v1 = arg0;
loop_1:
    if ((((func_802A7FA8_S1 *)(var_v1))->unk4 == 0) || (((func_802A7FA8_S1 *)(var_v1))->unk10 != key)) {
        var_a1 += 1;
        var_v1 += 0x38;
        if (var_a1 >= 4) {

        } else {
            goto loop_1;
        }
    }
    if (var_a1 == 4) {
        var_a1 = 0;
        var_v1_2 = arg0;
loop_7:
        if (((func_80203E78_S1 *)(var_v1_2))->unk4 != 0) {
            var_a1 += 1;
            var_v1_2 += 0x38;
            if (var_a1 >= 4) {

            } else {
                goto loop_7;
            }
        }
        if (var_a1 == 4) {
            return 0;
        }
    }
    temp_v1 = arg0 + ((var_a1 * 0x38) + 4);
    ((func_802A7FA8_S3 *)(arg0))->unkE4 = var_a1;
    ((func_802A7FA8_S4 *)(temp_v1))->unk0 = 1;
    ((func_802A7FA8_S4 *)(temp_v1))->unk8 = arg1;
    ((func_802A7FA8_S4 *)(temp_v1))->unkC = arg2;
    ((func_802A7FA8_S4 *)(temp_v1))->unk10 = arg3;
    ((func_802A7FA8_S4 *)(temp_v1))->unk14 = arg4;
    ((func_802A7FA8_S4 *)(temp_v1))->unk28 = arg5;
    ((func_802A7FA8_S4 *)(temp_v1))->unk2C = arg6;
    ((func_802A7FA8_S4 *)(temp_v1))->unk30 = arg7;
    ((func_802A7FA8_S4 *)(temp_v1))->unkD = (u8) (((func_802A7FA8_S4 *)(temp_v1))->unkD + 1);
    ((func_802A7FA8_S4 *)(temp_v1))->unk34 = arg8;
    return 1;
}
