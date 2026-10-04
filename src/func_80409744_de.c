#include "span_16E000/code_80408E1C.h"
#include "types.h"
/* Finds the first available controller slot and caches its index. */
#define NULL ((void *)0)

void func_80404E28_de(s32);                               /* extern */
s32 func_80404F04_de(s32);                             /* extern */
extern s32 D_800DE878;

void func_80409744_de(void) {
    s32 var_s0;
    s32 var_s1;
    s32 unavailable;

    if (D_800DE878 == -1) {
        var_s0 = 0;
        var_s1 = 0;
    unavailable = -2;
loop_2:
        func_80404E28_de(var_s0);
        if (func_80404F04_de(var_s0) == unavailable) {
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
        D_800DE878 = var_s0;
    }
}
