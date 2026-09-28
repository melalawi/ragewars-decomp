#include "basetypes.h"

extern f32 D_800C99B0;

/** Reset the matrix to identity-diagonal * D_800C99B0, zeroing the rest. */
void func_80272848(void *arg0) {
    u8 *o = (u8 *)arg0;
    f32 zero = 0.0f;

    *(f32 *)(o + 0x3C) = D_800C99B0;
    *(f32 *)(o + 0x28) = D_800C99B0;
    *(f32 *)(o + 0x14) = D_800C99B0;
    *(f32 *)(o + 0x0) = D_800C99B0;
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
