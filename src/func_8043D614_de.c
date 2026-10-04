#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Toggles bit 0x80 of the option word D_80142208_de and returns zero; the functions after it in this
   run each toggle the next bit. */
extern s32 D_80142208_de;

s32 func_8043D614_de(void) {
    D_80142208_de ^= 0x80;
    return 0;
}
