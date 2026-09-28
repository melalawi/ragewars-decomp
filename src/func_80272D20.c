#include "basetypes.h"

extern f32 D_800C99C0[2];

void func_80272D20(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *o = (u8 *)arg0;
    f32 val = D_800C99C0[1];
    f32 zero = 0.0f;

    *(s32 *)(o + 0x0) = arg1;
    *(s32 *)(o + 0x14) = arg2;
    *(s32 *)(o + 0x28) = arg3;
    *(f32 *)(o + 0x3C) = val;
    *(f32 *)(o + 0x38) = zero;
    *(f32 *)(o + 0x34) = zero;
    *(f32 *)(o + 0x30) = zero;
    *(f32 *)(o + 0x2C) = zero;
    *(f32 *)(o + 0x24) = zero;
    *(f32 *)(o + 0x20) = zero;
    *(f32 *)(o + 0x1C) = zero;
    *(f32 *)(o + 0x18) = zero;
    *(f32 *)(o + 0x10) = zero;
    *(f32 *)(o + 0xC) = zero;
    *(f32 *)(o + 0x8) = zero;
    *(f32 *)(o + 0x4) = zero;
}
