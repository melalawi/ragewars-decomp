#include "basetypes.h"

extern void func_802938E8(s32 arg0, u32 arg1, s32 arg2, s32 arg3);

void func_802941D0(s32 arg0) {
    s32 eight;
    u32 bits;

    eight = 8;
    bits = 0x41400000;
    func_802938E8(arg0, (double)bits, eight, eight);
}
