#include "basetypes.h"

extern s32 D_801462C8;

/* Toggles bit 1 of the settings flag word D_801462C8 and returns 0. */
s32 func_8043D4C4(void) {
    D_801462C8 ^= 2;
    return 0;
}
