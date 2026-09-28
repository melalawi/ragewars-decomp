#include "basetypes.h"

/* Loads the 24-bit big-endian value at index D_80153C60 of the three-byte array D_80153C64 points
   to into D_80153C68. */
extern s32 D_80153C60;
extern u8 *D_80153C64;
extern s32 D_80153C68;

void func_804140A4(void) {
    D_80153C68 = (D_80153C64[D_80153C60 * 3] << 16) | (D_80153C64[D_80153C60 * 3 + 1] << 8) |
                 D_80153C64[D_80153C60 * 3 + 2];
}
