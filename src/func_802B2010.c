#include "basetypes.h"
extern u8 D_B2000015;
s32 func_802B2010(void) {
    do {
    } while (func_802BDEA0() & 3);
    return ((u8) D_B2000015 >> 1) & 1;
}
