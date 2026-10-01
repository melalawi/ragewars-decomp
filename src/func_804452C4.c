#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 0, 2, 1, 0xFF and the pooled constant D_800E27FC. */
extern f32 D_800E27FC;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_804452C4(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 0, 2, 1, 0xFF, D_800E27FC);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E27FC_4 = 1.0f;
#endif
