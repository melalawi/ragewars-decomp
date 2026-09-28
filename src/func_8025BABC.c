#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern s32 func_802B76F0(void *arg0);
extern void func_802B8030(void *arg0);

void func_8025BABC(s32 arg0, s16 arg1) {
    s32 base;
    s32 a0;
    void *s1;

    base = (arg1 * 0xCC) + arg0;
    base = base + 4;
    a0 = *(s32 *)(base + 0xB0);
    *(s32 *)(base + 0xAC) = 1;
    *(s32 *)(base + 0x50) = 0;
    s1 = (void *)(a0 + 0x84);
    if (*(s32 *)(base + 0x10) != *(s32 *)(a0 + 0x104)) {
        s32 idx = *(s32 *)(base + 0);
        s32 addr = a0 + idx * 2;
        func_802B7FD0(s1, *(s16 *)(addr + 0xDC));
        if (func_802B76F0(s1) != 0) {
            func_802B8030(s1);
        }
        *(s32 *)(base + 4) = -1;
    }
}
