#include "basetypes.h"

extern void func_802748E0(f32 *, f32, f32);
extern void func_8044A4C0(void *);
extern f32 D_800C7EB4;

void func_8022D56C(void *arg0) {
    f32 value;

    if (*(s32 *)((char *)arg0 + 0x850) != 0) {
        return;
    }
    if ((*(s32 *)((char *)arg0 + 0x664) & 0x8000) == 0) {
        func_802748E0((f32 *)((char *)arg0 + 0x72C), 1.308997f, 0.25f);
    }
    value = *(f32 *)((char *)arg0 + 0x658);
    if (D_800C7EB4 < value) {
        func_8044A4C0(arg0);
    }
}
