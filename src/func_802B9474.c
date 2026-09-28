#include "basetypes.h"

typedef s32 (*FuncPtr)(void *);

extern void func_802BA4B0(void *arg0, void *a, void *b, s32 c);
extern s32 func_802B5410(s32, s32, void *, s32, s32);

extern char D_2C31C0;
extern char D_2C3B94;

void func_802B9474(void *arg0, FuncPtr arg1, s32 arg2) {
    func_802BA4B0(arg0, &D_2C31C0, &D_2C3B94, 0);
    *(s32 *)((char *)arg0 + 0x14) = func_802B5410(0, 0, arg2, 1, 0x20);
    *(s32 *)((char *)arg0 + 0x18) = func_802B5410(0, 0, arg2, 1, 0x20);
    *(s32 *)((char *)arg0 + 0x30) = arg1((char *)arg0 + 0x34);
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 1;
    *(s32 *)((char *)arg0 + 0x44) = 0;
}
