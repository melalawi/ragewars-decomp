#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Forwards its three arguments to func_80444FA0_us_rev1 with 1, 8, 0xA, 0x7D0 and the pooled constant (1.0f). */
extern void func_80444FA0_us_rev1(void *, void *, void *, s32, s32, s32, s32, f32);

void func_80445304_us_rev1(void *first, void *second, void *third) {
    func_80444FA0_us_rev1(first, second, third, 1, 8, 0xA, 0x7D0, (1.0f));
}
