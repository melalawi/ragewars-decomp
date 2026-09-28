#include "basetypes.h"

extern s32 D_80115DE4;

s32 func_80274544(void) {
    u32 temp_v1;

    temp_v1 = (D_80115DE4 * 0xA84A5B53) + 0x58348C2D;
    D_80115DE4 = temp_v1;
    return ((temp_v1 << 0x10) | (temp_v1 >> 0x10)) & 0x7FFFFFFF;
}
