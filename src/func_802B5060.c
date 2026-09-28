#include "basetypes.h"

extern s32 func_802B51A4(void *, s16 *, s32);

void func_802B5060(s32 arg0) {
    s16 sp10[8];

    sp10[0] = 0x11;
    func_802B51A4(arg0 + 0x48, sp10, 0);
}
