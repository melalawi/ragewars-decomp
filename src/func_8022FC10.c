#include "basetypes.h"

extern s32 func_80214178(void *, void *, s32);
extern void func_8022BC04(void *arg0);

extern f32 D_800C7F80;
extern s16 D_800CE8DC;
extern void *D_800D052C[];
extern f32 D_800D2988;

void func_8022FC10(void *arg0, void *arg1) {
    void *actor;
    s16 index;
    s32 value;
    f32 old_delta;
    f32 scaled_delta;
    f32 zero;
    f32 timer;
    void *callback_owner;
    void (*callback)(void *, void *);

    actor = *(void **)((char *)arg0 + 0x1D8);
    index = *(s16 *)((char *)actor + 0x650);
    value = *(s16 *)((char *)&D_800CE8DC + index * 0x18);

    if (0.0f < *(f32 *)((char *)actor + 0x11D8)) {
        return;
    }

    old_delta = D_800D2988;
    scaled_delta = old_delta * D_800C7F80;
    if (actor != 0 && (*(s32 *)((char *)actor + 0x122C) & 0x2000)) {
        D_800D2988 = scaled_delta;
    } else {
        D_800D2988 = old_delta;
    }

    timer = *(f32 *)((char *)arg1 + 0x148);
    zero = 0.0f;
    if (zero < timer) {
        *(f32 *)((char *)arg1 + 0x148) = timer - D_800D2988;
        *(u8 *)((char *)arg0 + 1) = 0;
    } else {
        *(u8 *)((char *)arg0 + 1) = 0;
    }

    if (zero < *(f32 *)((char *)arg1 + 0x130)) {
        *(f32 *)((char *)arg1 + 0x130) -= D_800D2988;
    }

    if (value == 1) {
        func_80214178(arg0, arg1, 1);
    }
    if (*(s16 *)((char *)actor + 0x770) != *(s16 *)((char *)actor + 0x62E)) {
        *(s32 *)((char *)actor + 0x7E8) = 0;
        func_80214178(arg0, arg1, 1);
    }

    callback_owner = *(void **)((char *)arg1 + 0x30);
    if (callback_owner != 0) {
        callback = *(void (**)(void *, void *))((char *)callback_owner + 8);
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    callback = *(void (**)(void *, void *))((char *)D_800D052C[*(s16 *)((char *)actor + 0x62E)] + 0x5C);
    if (callback != 0) {
        callback(arg0, arg1);
    }
    func_8022BC04(actor);
    D_800D2988 = old_delta;
}
