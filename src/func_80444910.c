#include "basetypes.h"

/* Replaces the option byte D_801462E7 with what func_8044252C returns for the second argument, that
   byte, 1, 0, 1 and 1, and returns zero. */
extern u8 D_801462E7;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80444910(void *first, void *second) {
    u8 *option = &D_801462E7;

    *option = func_8044252C(second, *option, 1, 0, 1, 1);
    return 0;
}
