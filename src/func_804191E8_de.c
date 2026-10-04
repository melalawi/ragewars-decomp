#include "span_16E000/code_80414280.h"
#include "types.h"

/* Clears the word held in D_800E32E4. */
extern s32 D_800DF294;

void func_804191E8_de(void) {
    D_800DF294 = 0;
}
