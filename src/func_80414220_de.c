#include "span_16E000/code_80414280.h"
#include "types.h"

/* Stores the byte D_80153C8F at the offset D_80153C84 within the buffer D_80153C88 points to. */
extern u8 *D_8014D9F8;
extern s32 D_8014D9F4;
extern u8 D_8014D9FF;

void func_80414220_de(void) {
    D_8014D9F8[D_8014D9F4] = D_8014D9FF;
}
