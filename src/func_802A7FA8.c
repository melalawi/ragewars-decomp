/* Finds or allocates one of four records and updates its parameters. */
#include "basetypes.h"
s32 func_802A7FA8(char *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 var_a1;
    u32 key;
    char *temp_v1;
    char *var_v1;
    char *var_v1_2;

    var_a1 = 0;
    key = arg2 & 0xFFFF;
    var_v1 = arg0;
loop_1:
    if ((*(s32 *)(var_v1 + 0x4) == 0) || (*(u8 *)(var_v1 + 0x10) != key)) {
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
        if (*(s32 *)(var_v1_2 + 0x4) != 0) {
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
    *(s16 *)(arg0 + 0xE4) = var_a1;
    *(s32 *)(temp_v1 + 0x0) = 1;
    *(s32 *)(temp_v1 + 0x8) = arg1;
    *(u8 *)(temp_v1 + 0xC) = arg2;
    *(s32 *)(temp_v1 + 0x10) = arg3;
    *(s32 *)(temp_v1 + 0x14) = arg4;
    *(f32 *)(temp_v1 + 0x28) = arg5;
    *(s32 *)(temp_v1 + 0x2C) = arg6;
    *(s32 *)(temp_v1 + 0x30) = arg7;
    *(u8 *)(temp_v1 + 0xD) = (u8) (*(u8 *)(temp_v1 + 0xD) + 1);
    *(s32 *)(temp_v1 + 0x34) = arg8;
    return 1;
}
