#include "basetypes.h"

/** Return the selected bit from a packed byte array. */
u32 func_80403B0C(u8 *bits, s32 index)
{
    s32 byte = index >> 3;
    u32 mask;

    index &= 7;
    mask = 1;
    bits += byte;
    return *bits & (mask << index);
}
