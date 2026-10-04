#include "span_1000/code_802B3A80.h"
#include "span_1000/types.h"
#include "types.h"



extern s32 func_802B00D4_de(void *, s16 *, s32);

void func_802AFF30_de(s32 arg0, s32 arg1) {
    Buf16 sp10;

    sp10.value = arg1;
    sp10.count = 0xD;
    func_802B00D4_de(arg0 + 0x48, &sp10, 0);
}
