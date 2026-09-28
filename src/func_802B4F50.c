#include "basetypes.h"

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B4F50(s32 arg0) {
    s16 sp10[8];

    sp10[0] = 0xF;
    func_802B51A4(arg0 + 0x48, sp10, 0);
}
