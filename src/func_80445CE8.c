#include "basetypes.h"

/* Replaces the option byte D_801462E1 with what func_8044252C returns for the second argument, that byte, 8, 0, 0xFF and 0, turning 0xF7 into 0xF8, and returns zero. Adapted from func_80445A58 with the option byte D_801462E1 changed. */

extern u8 D_801462E1;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80445CE8(void *first, void *second) {
    u8 *option = &D_801462E1;
    s32 value = *option;

    value = func_8044252C(second, value, 8, 0, 0xFF, 0);
    if (value == 0xF7) {
        value = 0xF8;
    }
    *option = value;
    return 0;
}
