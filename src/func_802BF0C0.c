#include "basetypes.h"

extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);
extern int func_802BF0A0(void);
extern s32 func_802C0CB0(s32);

extern s32 D_800CCC00;
extern s32 D_800CCC04;

s32 func_802BF0C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 & 7) {
        func_802BFD40(&D_800CCC00, &D_800CCC04, 0x3A);
    }
    if (arg2 & 7) {
        func_802BFD40(&D_800CCC00, &D_800CCC04, 0x3B);
    }
    if (arg3 & 7) {
        func_802BFD40(&D_800CCC00, &D_800CCC04, 0x3C);
    }
    if (func_802BF0A0() != 0) {
        return -1;
    }
    *(volatile s32 *)0xA4040000 = arg1;
    *(volatile s32 *)0xA4040004 = func_802C0CB0(arg2);
    if (arg0 == 0) {
        *(volatile s32 *)0xA404000C = arg3 - 1;
    } else {
        *(volatile s32 *)0xA4040008 = arg3 - 1;
    }
    return 0;
}
