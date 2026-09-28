#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern s32 func_802B76F0(void *arg0);
extern void func_802B8030(void *arg0);

void func_8025C5FC(void *arg0) {
    s32 a0;
    void *s1;

    a0 = *(s32 *)((char *)arg0 + 0xB0);
    *(s32 *)((char *)arg0 + 0xAC) = 1;
    *(s32 *)((char *)arg0 + 0x50) = 0;
    s1 = (void *)(a0 + 0x84);
    if (*(s32 *)((char *)arg0 + 0x10) != *(s32 *)(a0 + 0x104)) {
        s32 idx = *(s32 *)arg0;
        s32 addr = a0 + idx * 2;
        func_802B7FD0(s1, *(s16 *)(addr + 0xDC));
        if (func_802B76F0(s1) != 0) {
            func_802B8030(s1);
        }
        *(s32 *)((char *)arg0 + 4) = -1;
    }
}
