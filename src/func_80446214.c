#include "basetypes.h"

/* Flips D_800D2AE0 between zero and one and returns zero. */
extern s32 D_800D2AE0;

s32 func_80446214(void) {
    D_800D2AE0 = D_800D2AE0 == 0;
    return 0;
}
