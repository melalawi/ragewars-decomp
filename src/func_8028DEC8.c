#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

s32 func_8028DEC8(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;
    s32 i;

    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(*(void **)((char *)arg0 + 0x80), 0), arg1), 2);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32)temp_v0, 1);
    temp_a0 = (u8 *)func_8028FD94(temp_v0, 1);
    mask = 1 << (arg2 & 7);
    i = arg2;
    if (i < 0) {
        i += 7;
    }
    return (temp_a0[i >> 3] & mask) != 0;
}
