#include "basetypes.h"

/* Loads the word at index D_80153C60 of the array D_80153C64 points to into D_80153C68. */
extern s32 D_80153C60;
extern s32 *D_80153C64;
extern s32 D_80153C68;

void func_80414078(void) {
    D_80153C68 = D_80153C64[D_80153C60];
}
