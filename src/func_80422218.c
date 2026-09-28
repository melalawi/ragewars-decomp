#include "basetypes.h"

/* Calls func_80245A10 with 1, func_802459F0 with the pooled constant D_800E1648 and
   func_80245A4C with 0x43, 0x4F, 0x12 and 0x80. */
extern f32 D_800E1648;
extern void func_80245A10(s32);
extern void func_802459F0(f32);
extern void func_80245A4C(s32, s32, s32, s32);

void func_80422218(void) {
    func_80245A10(1);
    func_802459F0(D_800E1648);
    func_80245A4C(0x43, 0x4F, 0x12, 0x80);
}
