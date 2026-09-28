#include "basetypes.h"

extern u8 func_802A15A0(u8);
extern u8 D_800E285C[0x42];

/* Maps input bytes through a lookup table and stores results. */
void func_8040570C(u8 *arg0, s8 *arg1, s32 arg2) {
    s32 var_s2;
    s8 *var_s1;
    s32 var_a0;
    u8 *var_s0;
    int new_var;

    var_s2 = 0;
    if (arg2 > 0) {
        new_var = 0x42;
        var_s1 = arg1;
        var_s0 = arg0;
        do {
            *var_s0 = func_802A15A0(*var_s0);
            for (var_a0 = 0; var_a0 < 0x42; var_a0 += 1) {
                if (*var_s0 == D_800E285C[var_a0]) {
                    *var_s1 = (s8)var_a0;
                    break;
                }
            }
            if (var_a0 == new_var) {
                *var_s1 = 0;
            }
            var_s1 += 1;
            var_s2 += 1;
            var_s0 += 1;
        } while (var_s2 < arg2);
    }
}
