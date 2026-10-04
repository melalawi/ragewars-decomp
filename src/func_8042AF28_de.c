#include "span_16E000/code_8042ACB0.h"
#include "types.h"

/* Returns whether D_80154010 holds anything other than -1; func_8042AFC0_de stores it. */
extern s32 D_8014DD80;

s32 func_8042AF28_de(void) {
    return D_8014DD80 != -1;
}
