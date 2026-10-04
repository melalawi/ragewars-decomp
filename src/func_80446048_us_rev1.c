#include "span_16E000/code_80445CE8.h"
#include "types.h"

/* Replaces D_800D0EBC with what func_804423BC_de returns for the second argument, D_800D0EBC, 1, 0, 1 and 1,
   and returns zero. */
extern s32 D_800D0EBC;
extern s32 func_804423BC_de(void *, s32, s32, s32, s32, s32);

s32 func_80446048_us_rev1(void *first, void *second) {
    D_800D0EBC = func_804423BC_de(second, D_800D0EBC, 1, 0, 1, 1);
    return 0;
}
