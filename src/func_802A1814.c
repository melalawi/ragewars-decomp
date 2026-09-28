#include "basetypes.h"

s32 func_802A1814(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_a3;
    u8 temp_a2;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a3 = var_a0 + arg2;
    if (arg2 < 4) {
        goto block_17;
    }
    if ((u32)var_a0 & 3) {
        goto block_17;
    }
    if ((u32)var_a1 & 3) {
        goto block_17;
    }
    var_a3 -= 4;
    if (var_a3 < var_a0) {
        var_a3 += 4;
        goto block_16;
    }
loop_6:
    if (*(u32 *)var_a0 != *(u32 *)var_a1) {
        var_a0 -= 4;
        var_a1 -= 4;
        goto block_11;
    }
    var_a0 += 4;
    var_a1 += 4;
    if (var_a3 >= var_a0) {
        goto loop_6;
    }
block_11:
    var_a3 += 4;
    goto block_16;
block_12:
    temp_v1 = *var_a0;
    temp_a2 = *var_a1;
    if (temp_v1 == temp_a2) {
        var_a0 += 1;
        var_a1 += 1;
        goto block_16;
    }
    if (temp_v1 < temp_a2) {
        return -1;
    }
    return 1;
block_16:
    ;
block_17:
    if (var_a0 < var_a3) {
        goto block_12;
    }
    return 0;
}
