#include "common/types.h"
#include "span_1000/code_80273744.h"
#include "types.h"



s32 func_802744D4_de(void) {
    u32 temp_v1;

    temp_v1 = (D_80111D24 * 0xA84A5B53) + 0x58348C2D;
    D_80111D24 = temp_v1;
    return ((temp_v1 << 0x10) | (temp_v1 >> 0x10)) & 0x7FFFFFFF;
}
