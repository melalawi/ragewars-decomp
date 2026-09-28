#include "basetypes.h"

/* Toggles bit 0 of D_800E63AC and returns zero. */
extern s32 D_800E63AC;

s32 func_804453C4(void) {
    D_800E63AC ^= 1;
    return 0;
}
