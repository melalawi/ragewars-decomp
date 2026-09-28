#include "basetypes.h"

extern void func_802BA4B0(void *arg0, void *a, void *b, s32 c);
extern s32 func_802B5410(s32, s32, void *, s32, s32);

extern char D_2B9800;
extern char D_2BA288;

void func_802B96AC(void *arg0, s32 arg1) {
    s32 result;

    func_802BA4B0(arg0, &D_2B9800, &D_2BA288, 4);
    result = func_802B5410(0, 0, arg1, 1, 0x50);
    *(s32 *)((char *)arg0 + 0x14) = result;
    *(s32 *)((char *)arg0 + 0x38) = 1;
    *(s32 *)((char *)arg0 + 0x48) = 0;
    *(s16 *)((char *)arg0 + 0x1A) = 1;
    *(s16 *)((char *)arg0 + 0x28) = 1;
    *(s16 *)((char *)arg0 + 0x2E) = 1;
    *(s16 *)((char *)arg0 + 0x1C) = 1;
    *(s16 *)((char *)arg0 + 0x1E) = 1;
    *(s16 *)((char *)arg0 + 0x20) = 0;
    *(s16 *)((char *)arg0 + 0x22) = 0;
    *(s16 *)((char *)arg0 + 0x26) = 1;
    *(volatile s16 *)((char *)arg0 + 0x24) = 0;
    *(volatile s16 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x30) = 0;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s16 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(s32 *)((char *)arg0 + 0x44) = 0;
}
