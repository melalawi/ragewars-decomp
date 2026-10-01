#include "basetypes.h"

/* Forwards its three arguments to func_80444FA0 with 2, 0x10, 0x66, 0xA000 and the pooled constant D_800E2804. */
extern f32 D_800E2804;
extern void func_80444FA0(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445344(void *first, void *second, void *third) {
    func_80444FA0(first, second, third, 2, 0x10, 0x66, 0xA000, D_800E2804);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E2804_4 = 10.2399998f;
#endif
