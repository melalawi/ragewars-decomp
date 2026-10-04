#include "span_166000/code_8043D0F0.h"
#include "types.h"

extern s32 D_80142208_de;

/* Toggles bit 1 of the settings flag word D_801462C8 and returns 0. */
s32 func_8043D2E4_de(void) {
    D_80142208_de ^= 2;
    return 0;
}
