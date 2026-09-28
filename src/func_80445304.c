#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 1, 8, 0xA, 0x7D0 and the pooled constant D_800E2800. */
extern f32 D_800E2800;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445304(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 1, 8, 0xA, 0x7D0, D_800E2800);
}
