#include "span_16E000/code_8040BBC0.h"
#include "types.h"
/* Detects the storage configuration and updates the cached selection. */
#define NULL ((void *)0)
s32 func_80265350_de();                                /* extern */
void func_8040BBB0_de();                                  /* extern */
extern s32 D_800DE888_de;
extern u8 D_800DE88B;
extern s32 D_800DE88C;
extern s32 D_800DE890;
extern u8 D_80142788;

void func_8040C318_de(void) {
    if (D_800DE888_de == -1) {
        if (func_80265350_de() != 0x400000) {
            D_800DE888_de = 1;
        } else {
            D_800DE888_de = 0;
        }
        D_80142788 = D_800DE88B;
    }
    if ((D_800DE890 < 5) && (D_800DE88C != D_800DE888_de)) {
        func_8040BBB0_de();
        D_800DE88C = D_800DE888_de;
    }
}
