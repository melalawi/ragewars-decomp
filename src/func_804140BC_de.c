#include "common/types.h"
#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Stores the three bytes D_80153C75, D_80153C76 and D_80153C77 as entry D_80153C6C of the
   three-byte array D_80153C70 points to. */
extern s32 D_8014D9DC;
extern u8 *D_8014D9E0;

extern u8 D_8014D9E6;


void func_804140BC_de(void) {
    D_8014D9E0[D_8014D9DC * 3] = D_8014D9E5;
    D_8014D9E0[D_8014D9DC * 3 + 1] = D_8014D9E6;
    D_8014D9E0[D_8014D9DC * 3 + 2] = D_8014D9E7;
}
