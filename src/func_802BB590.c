#include "basetypes.h"

extern void func_802B8FE0(s32 arg0, s32 arg1, s32 arg2);
extern int func_802BB1A8(int *arg0, int arg1, int arg2);
extern s32 func_802BA610(void *arg0, s32 arg1, s32 arg2);

s32 func_802BB590(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 scaled = arg1 * 0x4C;
    s32 temp_a2;

    func_802B8FE0(*(s32 *)((char *)arg0 + 0x34) + scaled + 0x20, arg2, arg3);
    temp_a2 = *(s32 *)((char *)arg0 + 0x34) + scaled;
    func_802BB1A8((int *)(temp_a2 + 0x20), 1, temp_a2);
    func_802BA610(*(void **)((char *)arg0 + 0x30), 2, *(s32 *)((char *)arg0 + 0x34) + scaled + 0x20);
    return *(s32 *)((char *)arg0 + 0x34) + scaled + 0x20;
}
