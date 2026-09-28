#include "basetypes.h"

/* Toggles bit 0x800 of the option word D_801462C8 and returns zero; the functions after it in this
   run each toggle the next bit. */
extern s32 D_801462C8;

s32 func_8043DA14(void) {
    D_801462C8 ^= 0x800;
    return 0;
}
