#include "span_16E000/code_80444260.h"
#include "types.h"

/* Replaces the option byte D_801462E3 with what func_804423BC_de returns for the second argument, that
   byte, 1, 0, 2 and 1, and returns zero. */
extern u8 D_80142223;
extern s32 func_804423BC_de(void *, s32, s32, s32, s32, s32);

s32 func_804446D8_de(void *first, void *second) {
    u8 *option = &D_80142223;

    *option = func_804423BC_de(second, *option, 1, 0, 2, 1);
    return 0;
}
