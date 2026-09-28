#include "basetypes.h"

s32 func_802A13AC(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (arg2 == 0) {
        return 0;
    }
    arg2 -= 1;
    while (arg2 != 0 && (temp_v1 = *var_a0) != 0 && temp_v1 == *var_a1) {
        arg2 -= 1;
        var_a0 += 1;
        var_a1 += 1;
    }
    return *var_a0 - *var_a1;
}
