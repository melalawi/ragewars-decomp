#include "basetypes.h"

/** Scale the first three rows of a matrix's basis columns by sx, sy, sz. */
void func_802734EC(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    *(f32 *)(o + 0x0) = *(f32 *)(o + 0x0) * sx;
    *(f32 *)(o + 0x4) = *(f32 *)(o + 0x4) * sx;
    *(f32 *)(o + 0x8) = *(f32 *)(o + 0x8) * sx;
    *(f32 *)(o + 0x10) = *(f32 *)(o + 0x10) * sy;
    *(f32 *)(o + 0x14) = *(f32 *)(o + 0x14) * sy;
    *(f32 *)(o + 0x18) = *(f32 *)(o + 0x18) * sy;
    *(f32 *)(o + 0x20) = *(f32 *)(o + 0x20) * sz;
    *(f32 *)(o + 0x24) = *(f32 *)(o + 0x24) * sz;
    *(f32 *)(o + 0x28) = *(f32 *)(o + 0x28) * sz;
}
