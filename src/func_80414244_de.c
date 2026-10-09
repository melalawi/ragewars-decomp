#include "span_16E000/code_80413728.h"
#include "types.h"

/* Writes the low nibble of D_80153C8F as nibble D_80153C84 of the packed array D_80153C88 points to, the low nibble for odd indices and the high one for even.
   Adapted from func_80414168_de with the nibble read changed to a read-modify-write store. */
extern s32 D_8014D9F4;
extern u8 *D_8014D9F8;
extern u8 D_8014D9FF;

void func_80414244_de(void) {
    s32 index = D_8014D9F4;

    if (index & 1) {
        D_8014D9F8[index >> 1] = (D_8014D9F8[index >> 1] & 0xF0) | (D_8014D9FF & 0xF);
    } else {
        D_8014D9F8[index >> 1] = (D_8014D9F8[index >> 1] & 0xF) | ((D_8014D9FF & 0xF) << 4);
    }
}
