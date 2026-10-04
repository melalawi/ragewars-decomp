#include "span_16E000/code_80410E9C.h"
#include "types.h"

/* Clears the word held in D_800E2AC0. */
extern s32 D_800DEA70;

void func_80411F28_de(void) {
    D_800DEA70 = 0;
}
