#include "span_1000/code_8023A284.h"
#include "types.h"

s32 func_80255D14_de(void *, s32);
s32 func_8023B8AC_de(void *arg0) {
    s32 temp_s0;
    temp_s0 = (((struct IntegerState8A4 *) ((s8 *) arg0))->unk_8A0);
    if (temp_s0 != 0) {
        func_80255ED8_de(arg0 + 0x8A0, temp_s0);
        func_80255D14_de(arg0 + 0x8B4, temp_s0);
    }
    return temp_s0;
}
