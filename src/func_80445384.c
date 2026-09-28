#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 2, 0x14, 1, 0xB4 and the pooled constant
   D_800E2808. */
extern f32 D_800E2808;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445384(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 2, 0x14, 1, 0xB4, D_800E2808);
}
