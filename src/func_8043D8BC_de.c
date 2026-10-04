#include "span_16E000/code_8043D904.h"
#include "types.h"

/* Toggles bit 0x1000 of the option word D_80142208_de and returns zero; the functions after it in this
   run each toggle the next bit. */
extern s32 D_80142208_de;

s32 func_8043D8BC_de(void) {
    D_80142208_de ^= 0x1000;
    return 0;
}
