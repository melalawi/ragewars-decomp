#include "basetypes.h"

extern void func_8020A884(void *arg0, void *arg1);
extern f32 func_80216F44(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f32 func_8020AA0C(void *arg0);
extern void func_8020A95C(void *arg0, void *arg1);

void func_8020A7B0(void *arg0, void *arg1) {
    s32 timer;
    void *record;
    f32 distance;

    if (arg0 == 0) {
        return;
    }
    func_8020A884(arg0, arg1);
    timer = *(s32 *)((char *)arg0 + 0x2E4);
    if (timer > 0) {
        *(s32 *)((char *)arg0 + 0x2E4) = timer - 1;
        return;
    }
    if (timer == 0) {
        *(s32 *)((char *)arg0 + 0x23C) = 1;
        *(s32 *)((char *)arg0 + 0x2E8) -= 1;
    }
    if (*(s32 *)((char *)arg0 + 0x2E8) != 0) {
        return;
    }
    *(s32 *)((char *)arg0 + 0x2E4) = -1;
    record = *(void **)((char *)*(void **)((char *)arg0 + 0x64) + 0x1D8);
    distance = func_80216F44(*(s32 *)arg0,
                             *(s32 *)((char *)record + 8),
                             *(s32 *)((char *)record + 0xC),
                             *(s32 *)((char *)record + 0x10));
    if (func_8020AA0C(arg0) < distance) {
        *(s32 *)((char *)arg0 + 0x23C) = 1;
        return;
    }
    *(s32 *)((char *)arg0 + 0x23C) = 0;
    func_8020A95C(arg0, arg1);
}
