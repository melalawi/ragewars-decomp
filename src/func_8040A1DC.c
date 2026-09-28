/* Finds the next available controller slot with wraparound. */
#include "basetypes.h"
#define NULL ((void *)0)
void func_80404E28(s32);                               /* extern */
s32 func_80404F04(s32);                             /* extern */

s32 func_8040A1DC(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 unavailable;

    var_s0 = 0;
    if (arg0 != -1) {
        var_s0 = arg0 + 1;
        if (var_s0 >= 4) {
            var_s0 = 0;
        }
    }
    var_s1 = 0;
    unavailable = -2;
loop_4:
    func_80404E28(var_s0);
    if (func_80404F04(var_s0) == unavailable) {
        var_s0 += 1;
        if (var_s0 >= 4) {
            var_s0 = 0;
        }
        var_s1 += 1;
        if (var_s1 < 4) {
            goto loop_4;
        }
    }
    if (var_s1 == 4) {
        var_s0 = -1;
    }
    return var_s0;
}
