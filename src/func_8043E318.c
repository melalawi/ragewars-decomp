#include "basetypes.h"

/** Runs func_8044252C on a byte in arg1->unk1C->unk5D8[0x83] and writes the result back into that byte. */

extern s32 func_8044252C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

s32 func_8043E318(void *arg0, void *arg1) {
    void *p;
    u8 *base;
    u8 *bytep;
    s32 result;

    p = *(void **)((char *)arg1 + 0x1C);
    base = *(u8 **)((char *)p + 0x5D8);
    bytep = base + 0x83;
    result = func_8044252C(arg1, *bytep, 1, 0, 0xA, 0);
    *bytep = (u8)result;
    return 0;
}
