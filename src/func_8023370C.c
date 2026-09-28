#include "basetypes.h"

extern f32 func_80274878(f32, f32, s32);
extern s32 func_80214178(void *, void *, s32);
extern f32 D_800C8168;
extern s32 D_800CF9E0;

void func_8023370C(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f20;

    temp_f20 = D_800C8168;
    temp_f0 = func_80274878(*(f32 *)((char *)arg1 + 0x124), temp_f20, D_800CF9E0);
    *(f32 *)((char *)arg1 + 0x124) = temp_f0;
    if (temp_f20 <= temp_f0) {
        func_80214178(arg0, arg1, 2);
    }
}
