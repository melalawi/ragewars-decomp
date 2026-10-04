#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Copies D_80153C78 into both D_80153C80 and D_80153C60. Three consecutive functions,
   func_804141C0_de to func_80414200_de, have this same body. */
extern s32 D_8014D9E8;
extern s32 D_8014D9F0;
extern s32 D_8014D9D0;

void func_804141C0_de(void) {
    s32 value = D_8014D9E8;

    D_8014D9F0 = value;
    D_8014D9D0 = value;
}
