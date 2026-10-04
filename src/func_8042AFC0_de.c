#include "span_16E000/code_8042ACB0.h"
#include "types.h"

/* Stores its argument in D_80154010. */
extern s32 D_8014DD80;

void func_8042AFC0_de(s32 value) {
    D_8014DD80 = value;
}
