#include "basetypes.h"

extern u32 D_80115DE8;

s32 func_8027458C(void) {
    u32 temp_v1;

    temp_v1 = (D_80115DE8 * 0xA84A5B53) + 0x58348C2D;
    D_80115DE8 = temp_v1;
    return ((temp_v1 << 0x10) | (temp_v1 >> 0x10)) & 0x7FFFFFFF;
}
