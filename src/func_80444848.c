#include "basetypes.h"

/* Replaces the option byte D_801462E3 with what func_8044252C returns for the second argument, that
   byte, 1, 0, 2 and 1, and returns zero. */
extern u8 D_801462E3;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80444848(void *first, void *second) {
    u8 *option = &D_801462E3;

    *option = func_8044252C(second, *option, 1, 0, 2, 1);
    return 0;
}
