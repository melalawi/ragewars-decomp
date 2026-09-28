#include "basetypes.h"

/* Toggles bit 0x8000 of the option word D_801462C8 and returns zero; it is one of a run of
   functions that each toggle one bit of that word. */
extern s32 D_801462C8;

s32 func_8043DC34(void) {
    D_801462C8 ^= 0x8000;
    return 0;
}
