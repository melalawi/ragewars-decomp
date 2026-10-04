#include "span_16E000/code_8040BBC0.h"
#include "types.h"

/* Gives D_800E28E0 the value 0x14 when it is still zero. */
extern s32 D_800DE890;

void func_8040C2F8_de(void) {
    if (D_800DE890 == 0) {
        D_800DE890 = 0x14;
    }
}
