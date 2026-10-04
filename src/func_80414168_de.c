#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Reads nibble D_80153C78 of the packed array D_80153C7C points to, the low nibble for odd indices
   and the high one for even, into both D_80153C80 and D_80153C60. */
extern s32 D_8014D9E8;
extern u8 *D_8014D9EC;
extern s32 D_8014D9F0;
extern s32 D_8014D9D0;

void func_80414168_de(void) {
    s32 index = D_8014D9E8;
    s32 value;

    if (index & 1) {
        value = D_8014D9EC[index >> 1] & 0xF;
    } else {
        value = D_8014D9EC[index >> 1] >> 4;
    }
    D_8014D9F0 = value;
    D_8014D9D0 = value;
}
