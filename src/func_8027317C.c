#include "basetypes.h"

extern f32 D_800C99D0;

void func_8027317C(void *arg0, void *arg1, f32 arg2) {
    char *o = (char *)arg0;
    f32 zero = 0.0f;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f0 = D_800C99D0;
    *(f32 *)(o + 0x3C) = temp_f0;
    *(f32 *)(o + 0x28) = temp_f0;
    *(f32 *)(o + 0x0) = temp_f0;
    *(f32 *)(o + 0x38) = zero;
    *(f32 *)(o + 0x34) = zero;
    *(f32 *)(o + 0x30) = zero;
    *(f32 *)(o + 0x2C) = zero;
    *(f32 *)(o + 0x24) = zero;
    *(f32 *)(o + 0x20) = zero;
    *(f32 *)(o + 0x1C) = zero;
    *(f32 *)(o + 0xC) = zero;
    *(f32 *)(o + 0x8) = zero;
    *(f32 *)(o + 0x4) = zero;
    temp_f3 = temp_f0 / *(f32 *)((char *)arg1 + 4);
    temp_f2 = *(f32 *)((char *)arg1 + 0) * temp_f3;
    temp_f1 = *(f32 *)((char *)arg1 + 8) * temp_f3;
    *(f32 *)(o + 0x34) = arg2;
    *(f32 *)(o + 0x14) = zero;
    *(f32 *)(o + 0x10) = -temp_f2;
    *(f32 *)(o + 0x18) = -temp_f1;
    *(f32 *)(o + 0x30) = arg2 * temp_f2;
    *(f32 *)(o + 0x38) = arg2 * temp_f1;
}
