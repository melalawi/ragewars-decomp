#include "basetypes.h"

extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern int func_802BEE60(void);
extern void func_802C2370(s32 arg0, s32 arg1);
extern s32 func_802C0CB0(s32);
extern void func_802C2060(s32 arg0, s32 arg1);

extern s32 D_800CCBE0;
extern s32 D_800CCBE4;

s32 func_802BEDA0(s32 arg0, s32 arg1) {
    if (arg1 & 3) {
        func_802BFD40(&D_800CCBE0, &D_800CCBE4, 0x37);
    }
    if (func_802BEE60() != 0) {
        return -1;
    }
    if (arg0 == 1) {
        func_802C2370(arg1, 0x40);
    }
    *(volatile s32 *)0xA4800000 = func_802C0CB0(arg1);
    if (arg0 == 0) {
        *(volatile s32 *)0xA4800004 = 0x1FC007C0;
    } else {
        *(volatile s32 *)0xA4800010 = 0x1FC007C0;
    }
    if (arg0 == 0) {
        func_802C2060(arg1, 0x40);
    }
    return 0;
}
