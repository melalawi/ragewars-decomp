#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern void func_802231B0(s32, s32, void *);
extern void func_802233CC(s32 arg0, s32 arg1, void *arg2);
extern s32 func_8024E61C(void *arg0);
extern void func_802227D0(void *, void *, s32);
extern f32 func_8024E668(void *arg0, s32 arg1);
extern char D_800CE7E4;
extern char D_800CE730;
extern s32 D_800CED30;
extern f32 D_800C7E68[2];

void func_8022CC24(void *arg0, void *arg1) {
    s32 value;

    func_802748E0((s32)arg0 + 0x72C, 0.0f, 0.25f);
    func_802231B0((s32)arg0, (s32)arg1, &D_800CE7E4);
    if (!(*(s32 *)((char *)arg0 + 0x660) & 0x8000)) {
        func_802233CC((s32)arg0, (s32)arg1, &D_800CE730);
    }
    if (*(f32 *)((char *)arg1 + 0x20) <= 0.0f) {
        if (func_8024E61C(arg1) != 0) {
            func_802227D0(arg0, arg1, 2);
        }
    }
    if (*(f32 *)((char *)arg1 + 0x20) <= 0.0f) {
        if (func_8024E668(arg1, 0) < 0.0f) {
            if (-func_8024E668(arg1, 0) < D_800C7E68[0]) {
                goto set_value;
            }
        } else if (func_8024E668(arg1, 0) < D_800C7E68[1]) {
set_value:
            if (*(void **)((char *)arg0 + 0x13B4) == &D_800CED30) {
                *(s32 *)((char *)arg0 + 0x86C) = 0x5E2E;
            } else {
                *(s32 *)((char *)arg0 + 0x86C) = 0x7F8;
            }
        }
    }
}
