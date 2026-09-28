#include "basetypes.h"

extern f32 D_800C99C0;

void func_80272CD0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *o = (u8 *)arg0;
    f32 val = D_800C99C0;
    f32 zero = 0.0f;

    *(s32 *)(o + 0x30) = arg1;
    *(s32 *)(o + 0x34) = arg2;
    *(s32 *)(o + 0x38) = arg3;
    *(f32 *)(o + 0x3C) = val;
    *(f32 *)(o + 0x28) = val;
    *(f32 *)(o + 0x14) = val;
    *(f32 *)(o + 0x0) = val;
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
