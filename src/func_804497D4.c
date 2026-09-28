/* Returns the 16-bit sum of the first count bytes of a block. */
#include "basetypes.h"

u16 func_804497D4(u8 *bytes, s32 count)
{
    s32 i;
    s32 sum;

    i = 0;
    sum = i;
    for (; i < count; i++) {
        sum += *bytes++;
        sum &= 0xFFFF;
    }
    return sum;
}
