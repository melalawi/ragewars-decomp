/* Decreases a float field at offset 0x12C0 by the given amount, clamps it from below at a floor, and when it reaches the floor builds and dispatches an event. Adapted from func_8022B5FC, with the add, the clamp direction, the constant, the third argument (a field plus 0x1900), and a duplicated clamp assignment (which keeps the constant reloaded rather than held in a register) changed. */
#include "basetypes.h"

extern void func_80216488(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800CE3E0;

typedef struct {
    char data[24];
} Local;

void func_8022B68C(void *arg0, f32 arg1, void *arg2) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f0 = *(f32 *)((char *)arg0 + 0x12C0) - arg1;
    temp_f1 = *(&D_800CE3E0 + 1);
    if (!(temp_f0 <= temp_f1)) {
        if (arg0 != 0) {
            temp_f1 = temp_f0;
        } else {
            temp_f1 = temp_f0;
        }
    }
    temp_f0 = *(&D_800CE3E0 + 1);
    *(f32 *)((char *)arg0 + 0x12C0) = temp_f1;
    if (temp_f1 <= temp_f0) {
        func_80216488(&sp18, arg2, *(s32 *)((char *)arg0 + 0x174) + 0x1900, 25.599998f, 0x80, 0);
        func_80219A40(arg0, (char *)arg0 + 0x170, &sp18);
    }
}
