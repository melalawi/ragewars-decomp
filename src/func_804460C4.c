#include "basetypes.h"

/* Replaces D_800E63BC with what func_8044252C returns for the second argument, D_800E63BC, 1, 0, 1 and 1,
   and returns zero. */
extern s32 D_800E63BC;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_804460C4(void *first, void *second) {
    D_800E63BC = func_8044252C(second, D_800E63BC, 1, 0, 1, 1);
    return 0;
}
