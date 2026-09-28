#include "basetypes.h"

s32 func_8022EEF4(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    s32 space;

    var_v1 = 0;
    space = 0x20;
    var_a1 = arg1;
loop_1:
    var_a1 -= 1;
    if (*((u8 *)arg0 + var_a1) == space) {
        var_v1 += 1;
        if (var_a1 > 0) {
            goto loop_1;
        }
    }
    return var_v1;
}
