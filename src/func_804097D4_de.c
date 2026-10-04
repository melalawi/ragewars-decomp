#include "span_16E000/code_80408E1C.h"
#include "types.h"

/* Returns whether D_800E28C8 holds anything other than -1. */
extern s32 D_800DE878;

s32 func_804097D4_de(void) {
    return D_800DE878 != -1;
}
