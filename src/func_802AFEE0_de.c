#include "span_1000/code_802B3A80.h"
#include "types.h"



extern s32 func_802B00D4_de(void *, s16 *, s32);

void func_802AFEE0_de(s32 arg0, s32 arg1, s8 arg2) {
    Buf16c sp10;

    sp10.count = 2;
    sp10.f8 = (s8)(arg1 | 0xB0);
    sp10.fA = arg2;
    sp10.zero = 0;
    sp10.f9 = 0x5B;
    func_802B00D4_de(arg0 + 0x48, &sp10, 0);
}
