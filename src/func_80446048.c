#include "basetypes.h"

/* Replaces D_800D0EBC with what func_8044252C returns for the second argument, D_800D0EBC, 1, 0, 1 and 1,
   and returns zero. */
extern s32 D_800D0EBC;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80446048(void *first, void *second) {
    D_800D0EBC = func_8044252C(second, D_800D0EBC, 1, 0, 1, 1);
    return 0;
}
