/* Finds the first available controller slot and caches its index. */
#include "basetypes.h"
#define NULL ((void *)0)

void func_80404E28(s32);                               /* extern */
s32 func_80404F04(s32);                             /* extern */
extern s32 D_800E28C8;

void func_80409770(void) {
    s32 var_s0;
    s32 var_s1;
    s32 unavailable;

    if (D_800E28C8 == -1) {
        var_s0 = 0;
        var_s1 = 0;
    unavailable = -2;
loop_2:
        func_80404E28(var_s0);
        if (func_80404F04(var_s0) == unavailable) {
            var_s0 += 1;
            if (var_s0 >= 4) {
                var_s0 = 0;
            }
            var_s1 += 1;
            if (var_s1 < 4) {
                goto loop_2;
            }
        }
        if (var_s1 == 4) {
            var_s0 = -1;
        }
        D_800E28C8 = var_s0;
    }
}
