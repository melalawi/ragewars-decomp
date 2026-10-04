#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Replaces the option byte D_801462E2 with what func_804423BC_de returns for the second argument, that byte, 8, 0, 0xFF and 0, turning 0xF7 into 0xF8, and returns zero. */

extern u8 D_80142222;
extern s32 func_804423BC_de(void *, s32, s32, s32, s32, s32);

s32 func_80445020_de(void *first, void *second) {
    u8 *option = &D_80142222;
    s32 value = *option;

    value = func_804423BC_de(second, value, 8, 0, 0xFF, 0);
    if (value == 0xF7) {
        value = 0xF8;
    }
    *option = value;
    return 0;
}
