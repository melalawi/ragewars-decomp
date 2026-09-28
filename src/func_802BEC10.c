#include "basetypes.h"

extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern s32 D_800CCBC0;
extern s32 D_800CCBC4;
extern s32 D_80000308;

s32 func_802BEC10(s32 arg0, s32 *arg1) {
    u32 status;

    if (arg1 == 0) {
        func_802BFD40(&D_800CCBC0, &D_800CCBC4, 0x3D);
    }
    status = *(volatile u32 *)0xA4600010;
    while (status & 3) {
        status = *(volatile u32 *)0xA4600010;
    }
    *arg1 = *(s32 *)(D_80000308 | arg0 | 0xA0000000);
    return 0;
}
