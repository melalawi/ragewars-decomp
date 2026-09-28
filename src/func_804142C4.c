#include "basetypes.h"

/* Writes the low nibble of D_80153C8F as nibble D_80153C84 of the packed array D_80153C88 points to, the low nibble for odd indices and the high one for even.
   Adapted from func_804141E8 with the nibble read changed to a read-modify-write store. */
extern s32 D_80153C84;
extern u8 *D_80153C88;
extern u8 D_80153C8F;

void func_804142C4(void) {
    s32 index = D_80153C84;

    if (index & 1) {
        D_80153C88[index >> 1] = (D_80153C88[index >> 1] & 0xF0) | (D_80153C8F & 0xF);
    } else {
        D_80153C88[index >> 1] = (D_80153C88[index >> 1] & 0xF) | ((D_80153C8F & 0xF) << 4);
    }
}
