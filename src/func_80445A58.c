#include "basetypes.h"

/* Replaces the option byte D_801462E2 with what func_8044252C returns for the second argument, that byte, 8, 0, 0xFF and 0, turning 0xF7 into 0xF8, and returns zero. */

extern u8 D_801462E2;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80445A58(void *first, void *second) {
    u8 *option = &D_801462E2;
    s32 value = *option;

    value = func_8044252C(second, value, 8, 0, 0xFF, 0);
    if (value == 0xF7) {
        value = 0xF8;
    }
    *option = value;
    return 0;
}
