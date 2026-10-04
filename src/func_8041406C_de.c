#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Stores the halfword D_80153C76 at index D_80153C6C of the halfword array D_80153C70 points to. */
extern s32 D_8014D9DC;
extern u16 *D_8014D9E0;
extern u16 D_8014D9E6;

void func_8041406C_de(void) {
    D_8014D9E0[D_8014D9DC] = D_8014D9E6;
}
