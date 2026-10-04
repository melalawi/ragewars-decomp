#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Loads the 24-bit big-endian value at index D_80153C60 of the three-byte array D_80153C64 points
   to into D_80153C68. */
extern s32 D_8014D9D0;
extern u8 *D_8014D9D4;
extern s32 D_8014D9D8;

void func_80414024_de(void) {
    D_8014D9D8 = (D_8014D9D4[D_8014D9D0 * 3] << 16) | (D_8014D9D4[D_8014D9D0 * 3 + 1] << 8) |
                 D_8014D9D4[D_8014D9D0 * 3 + 2];
}
