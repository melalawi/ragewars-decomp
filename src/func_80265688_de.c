#include "span_1000/code_8026565C.h"
#include "types.h"

void func_80265688_de(u8 *arg0, s32 arg1, s32 arg2) {
    s32 byteIdx;
    s32 mask;

    byteIdx = arg1 / 8;
    mask = 1 << (arg1 % 8);
    if (arg2 != 0) {
        arg0[byteIdx] |= mask;
        return;
    }
    arg0[byteIdx] &= ~mask;
}
