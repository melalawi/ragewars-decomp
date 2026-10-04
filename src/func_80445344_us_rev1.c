#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Forwards its three arguments to func_80444FA0_us_rev1 with 2, 0x10, 0x66, 0xA000 and the pooled constant (10.239999771118164f). */
extern void func_80444FA0_us_rev1(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445344_us_rev1(void *first, void *second, void *third) {
    func_80444FA0_us_rev1(first, second, third, 2, 0x10, 0x66, 0xA000, (10.239999771118164f));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const float unbake_rodata_800E2804_4 = 10.2399998f;
#endif
