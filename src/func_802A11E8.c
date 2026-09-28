#include "basetypes.h"

extern s32 D_800D2B70;

s32 func_802A11E8(void) {
    s32 temp_v0;

    temp_v0 = (D_800D2B70 * 0x343FD) + 0x269EC3;
    D_800D2B70 = temp_v0;
    return (temp_v0 >> 0x10) & 0x7FFF;
}
