/* Decreases a float field at offset 0x12C0 by the given amount, clamps it from below at a floor, and when it reaches the floor builds and dispatches an event. Adapted from func_8022B5FC, with the add, the clamp direction, the constant, the third argument (a field plus 0x1900), and a duplicated clamp assignment (which keeps the constant reloaded rather than held in a register) changed. */
#include "basetypes.h"

extern void func_80216488(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800CE3E0[2];

typedef struct {
    char data[24];
} Local;

typedef struct func_8022B68C_S1 func_8022B68C_S1;
struct func_8022B68C_S1 {
    char pad0[0x170];
    char unk170;
    char pad170[0x174 - 0x170 - sizeof(char)];
    s32 unk174;
    char pad174[0x12C0 - 0x174 - sizeof(s32)];
    f32 unk12C0;
};

void func_8022B68C(void *arg0, f32 arg1, void *arg2) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f0 = ((func_8022B68C_S1 *)(arg0))->unk12C0 - arg1;
    temp_f1 = D_800CE3E0[1];
    if (!(temp_f0 <= temp_f1)) {
        if (arg0 != 0) {
            temp_f1 = temp_f0;
        } else {
            temp_f1 = temp_f0;
        }
    }
    temp_f0 = D_800CE3E0[1];
    ((func_8022B68C_S1 *)(arg0))->unk12C0 = temp_f1;
    if (temp_f1 <= temp_f0) {
        func_80216488(&sp18, arg2, ((func_8022B68C_S1 *)(arg0))->unk174 + 0x1900, 25.599998f, 0x80, 0);
        func_80219A40(arg0, &((func_8022B68C_S1 *)(arg0))->unk170, &sp18);
    }
}
