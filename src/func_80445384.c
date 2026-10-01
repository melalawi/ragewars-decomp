#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 2, 0x14, 1, 0xB4 and the pooled constant
   D_800E2808. */
extern f32 D_800E2808;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445384(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 2, 0x14, 1, 0xB4, D_800E2808);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E2808_4 = 1.0f;
#endif
