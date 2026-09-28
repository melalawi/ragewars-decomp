#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern void func_8022CE68(s32 arg0, s32 arg1);
extern f32 D_800C7E7C;
extern f32 D_800C7E80;

void func_8022CDAC(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = *(f32 *)((char *)arg0 + 0x6C4);
    if ((temp_f2 < 0.0f && *(f32 *)((char *)arg0 + 0x6A4) >= 0.0f) ||
        (temp_f2 > 0.0f && *(f32 *)((char *)arg0 + 0x6A4) <= 0.0f) ||
        (*(f32 *)((char *)arg0 + 0x658) >= D_800C7E7C)) {
        func_802227D0(arg0, arg1, 8);
    } else {
        *(f32 *)((char *)arg1 + 0x20) = D_800C7E80;
    }
    func_8022CE68((s32)arg0, (s32)arg1);
}
