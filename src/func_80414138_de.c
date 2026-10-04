#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Loads the byte at offset D_80153C78 of the buffer D_80153C7C points to into both D_80153C80 and
   D_80153C60. */
extern u8 *D_8014D9EC;
extern s32 D_8014D9E8;
extern s32 D_8014D9F0;
extern s32 D_8014D9D0;

void func_80414138_de(void) {
    s32 value = D_8014D9EC[D_8014D9E8];

    D_8014D9F0 = value;
    D_8014D9D0 = value;
}
