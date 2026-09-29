#include "basetypes.h"

extern u8 D_800E285C[];

/* Converts a controller-pak filename through its character table, blanking leading nulls, then trims trailing spaces. */
void func_80405648(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 i;
    s32 started;

    for (i = 0; i < arg2; i++) {
        arg1[i] = 0;
    }

    started = 0;
    for (i = started; i < arg2; i++, arg0++) {
        if (*arg0 < 0x42) {
            if (*arg0 == 0 && !started) {
                arg1[i] = ' ';
            } else {
                arg1[i] = D_800E285C[*arg0];
                started = 1;
            }
        } else {
            arg1[i] = '~';
        }
    }

    for (i = arg2 - 1; i >= 0; i--) {
        if (arg1[i] != ' ' && arg1[i] != 0) {
            break;
        }
        arg1[i] = 0;
    }
    arg1[arg2 - 1] = 0;
}
