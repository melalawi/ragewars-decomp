#include "span_16E000/code_80413728.h"
#include "types.h"

/* Stores the word D_80153C74 at index D_80153C6C of the word array D_80153C70 points to. */
extern s32 D_8014D9DC;
extern s32 *D_8014D9E0;
extern s32 D_8014D9E4;

void func_80414094_de(void) {
    D_8014D9E0[D_8014D9DC] = D_8014D9E4;
}
