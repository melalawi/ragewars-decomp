#include "basetypes.h"

/* Toggles bit 4 of the option word D_801462C8 and returns zero; the functions after it in this
   run each toggle the next bit. */
extern s32 D_801462C8;

s32 func_8043D54C(void) {
    D_801462C8 ^= 4;
    return 0;
}
