#include "span_16E000/code_80445CE8.h"
#include "types.h"

/* Flips D_800D2AE0 between zero and one and returns zero. */
extern s32 D_800D2AE0;

s32 func_80446214_us_rev1(void) {
    D_800D2AE0 = D_800D2AE0 == 0;
    return 0;
}
