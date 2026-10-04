#include "span_16E000/code_8043D904.h"
#include "types.h"

/* Toggles bit 0x4000 of the option word D_80142208_de and returns zero; it is one of a run of
   functions that each toggle one bit of that word. */
extern s32 D_80142208_de;

s32 func_8043D9CC_de(void) {
    D_80142208_de ^= 0x4000;
    return 0;
}
