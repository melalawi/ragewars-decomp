#include "basetypes.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern s16 func_8022F95C(void *arg0);
extern s32 func_8022B174(void *arg0);
extern void func_8022B974(void *arg0);
extern s32 func_80214178(void *, void *, s32);
extern void func_8022B9B4(void *arg0);
extern s32 func_802301E4(void *, void *);

extern f32 D_800C8144;

void func_8023333C(void *arg0, void *arg1) {
    void *actor;

    actor = *(void **)((char *)arg0 + 0x1D8);
    *(s32 *)((char *)arg1 + 0x13C) = 2;
    if (func_80222A80(actor, *(s16 *)((char *)actor + 0x62E)) == 0) {
        *(s16 *)((char *)actor + 0x770) = func_8022F95C(actor);
        return;
    }

    if (*(f32 *)((char *)arg0 + 0x104) >= D_800C8144) {
        if (func_8022B174(actor) == 0) {
            func_8022B974(actor);
        }
    }

    if (!((*(s32 *)((char *)actor + 0x6AC) & 0x4000) &&
          (*(s32 *)((char *)actor + 0x5E4) != 0))) {
        func_80214178(arg0, arg1, 2);
        func_8022B9B4(actor);
        *(s32 *)((char *)arg1 + 0x13C) = 1;
    }

    if (func_802301E4(arg0, arg1) != 0) {
        func_8022B9B4(actor);
    }
}
