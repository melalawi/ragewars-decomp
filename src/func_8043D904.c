#include "basetypes.h"

/* Toggles bit 0x200 of the option word D_801462C8 and returns zero; the functions after it in this
   run each toggle the next bit. */
extern s32 D_801462C8;

s32 func_8043D904(void) {
    D_801462C8 ^= 0x200;
    return 0;
}
