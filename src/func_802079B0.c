#include "basetypes.h"

typedef void (*Callback)(void *arg0, void *arg1);

extern s32 D_8011FE88;
extern f32 D_800D2988;

extern s32 func_80285F28(void *, void *);
extern void func_80206A20(void *arg0, void *arg1);
extern void func_80206DD4(void *arg0, void *arg1);

void func_802079B0(void *arg0, void *arg1) {
    void *record;
    void *handler;
    Callback callback;
    s32 flags;

    record = (char *)*(void **)((char *)arg0 + 0x18) + 0x14;
    if (func_80285F28(&D_8011FE88, arg0) == 0) {
        flags = *(s32 *)((char *)arg0 + 0x100);
        flags &= ~0x10000;
        flags &= ~0x100;
        *(s32 *)((char *)arg0 + 0x100) = flags;
        return;
    }

    *(s32 *)((char *)arg0 + 0x100) |= 0x10000;
    handler = *(void **)((char *)arg1 + 0x30);
    if (handler != 0) {
        callback = *(Callback *)((char *)handler + 8);
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    *(f32 *)((char *)arg1 + 0x13C) +=
        *(f32 *)((char *)record + 0x48) * D_800D2988;
    func_80206A20(arg0, arg1);
    if (*(s8 *)((char *)arg1 + 0x34) != 4) {
        func_80206DD4(arg0, arg1);
    }
}
