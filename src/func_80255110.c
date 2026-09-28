#include "basetypes.h"

extern void func_802BFD50(void *arg0, s32 arg1, s32 arg2);
extern s32 func_802C06E0(s32 *, s32);
extern void func_802C0250(s32 *arg0, void *arg1, s32 arg2);
extern void func_802C0390(s32, s32, s32);
extern s32 D_800D2B28;
extern s32 D_800D2954;

s32 func_80255110(s32 *arg0, void *arg1) {
    char sp10[0x18];
    s32 sp28;
    s32 sp2C;
    s32 temp;

    func_802BFD50(sp10, (s32) &sp28, 1);
    temp = D_800D2B28;
    *(void **)((char *)arg1 + 0x20) = sp10;
    D_800D2954 = 2;
    func_802C06E0(arg0, temp);
    func_802C0250((s32 *)((char *)arg0 + 0x230), arg1, 1);
    func_802C0390((s32) sp10, (s32) &sp2C, 1);
    return 1;
}
