#include "basetypes.h"

extern s32 D_801462C8[];

/* Toggles the bits arg1 names in the settings flag word D_801462C8 and returns 0. */
s32 func_8043D2B4(s32 arg0, s32 arg1) {
    s32 *flags = D_801462C8;

    *flags ^= arg1;
    return 0;
}
