#include "span_16E000/code_8040BBC0.h"
#include "types.h"

/* Stores its argument in D_800E28D8, which func_8040C474_de returns, and calls func_8040BBB0_de. */
extern s32 D_800DE888_de;
extern void func_8040BBB0_de();

void func_8040C2D4_de(s32 value) {
    D_800DE888_de = value;
    func_8040BBB0_de();
}
