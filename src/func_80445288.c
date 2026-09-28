#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 0, 1, 1, 0xFF and the pooled constant D_800E27F8. */
extern f32 D_800E27F8;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445288(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 0, 1, 1, 0xFF, D_800E27F8);
}
