#include "span_166000/code_80426310.h"
#include "types.h"

extern s32 D_80142208_de[];

/* Toggles the bits arg1 names in the settings flag word D_801462C8 and returns 0. */
s32 func_8043D0D4_de(s32 arg0, s32 arg1) {
    s32 *flags = D_80142208_de;

    *flags ^= arg1;
    return 0;
}
