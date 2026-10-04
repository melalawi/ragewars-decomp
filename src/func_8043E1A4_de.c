#include "common/types.h"
#include "span_16E000/code_8043D904.h"
#include "types.h"
/* Sets arg0's unk14 field to the address of D_800D76CC and returns 0. */



extern char D_800D36A0;

s32 func_8043E1A4_de(func_80254D70_S1 *arg0) {
    arg0->unk14 = &D_800D36A0;
    return 0;
}
