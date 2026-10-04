#include "span_1000/code_802B3A80.h"
#include "types.h"

extern s32 func_802B00D4_de(void *, s16 *, s32);

void func_802AFE80_de(s32 arg0) {
    s16 sp10[8];

    sp10[0] = 0xF;
    func_802B00D4_de(arg0 + 0x48, sp10, 0);
}
