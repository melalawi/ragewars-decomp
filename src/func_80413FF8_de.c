#include "span_16E000/code_80413728.h"
#include "types.h"

/* Loads the word at index D_80153C60 of the array D_80153C64 points to into D_80153C68. */
extern s32 D_8014D9D0;
extern s32 *D_8014D9D4;
extern s32 D_8014D9D8;

void func_80413FF8_de(void) {
    D_8014D9D8 = D_8014D9D4[D_8014D9D0];
}
