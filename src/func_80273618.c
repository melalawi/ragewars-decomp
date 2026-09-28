#include "basetypes.h"

/** Scale the xyz columns of a 4-row matrix by sx, sy, sz. */
void func_80273618(void *arg0, f32 sx, f32 sy, f32 sz) {
    u8 *o = (u8 *)arg0;

    *(f32 *)(o + 0x0) = *(f32 *)(o + 0x0) * sx;
    *(f32 *)(o + 0x10) = *(f32 *)(o + 0x10) * sx;
    *(f32 *)(o + 0x20) = *(f32 *)(o + 0x20) * sx;
    *(f32 *)(o + 0x30) = *(f32 *)(o + 0x30) * sx;
    *(f32 *)(o + 0x4) = *(f32 *)(o + 0x4) * sy;
    *(f32 *)(o + 0x14) = *(f32 *)(o + 0x14) * sy;
    *(f32 *)(o + 0x24) = *(f32 *)(o + 0x24) * sy;
    *(f32 *)(o + 0x34) = *(f32 *)(o + 0x34) * sy;
    *(f32 *)(o + 0x8) = *(f32 *)(o + 0x8) * sz;
    *(f32 *)(o + 0x18) = *(f32 *)(o + 0x18) * sz;
    *(f32 *)(o + 0x28) = *(f32 *)(o + 0x28) * sz;
    *(f32 *)(o + 0x38) = *(f32 *)(o + 0x38) * sz;
}
