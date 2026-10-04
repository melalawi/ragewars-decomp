#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Forwards its three arguments to func_80444FA0_us_rev1 with 0, 0, 1, 0xFF and the pooled constant (1.0f). */
extern void func_80444FA0_us_rev1(void *, void *, void *, s32, s32, s32, s32, f32);

void func_8044524C_us_rev1(void *first, void *second, void *third) {
    func_80444FA0_us_rev1(first, second, third, 0, 0, 1, 0xFF, (1.0f));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E27F4_4 = 1.0f;
#endif
