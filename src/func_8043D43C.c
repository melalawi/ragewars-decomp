#include "basetypes.h"

extern s32 D_801462C8;

/* Toggles bit 0 of the settings flag word D_801462C8 and returns 0. */
s32 func_8043D43C(void) {
    D_801462C8 ^= 1;
    return 0;
}
