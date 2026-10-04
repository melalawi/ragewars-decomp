#include "span_1000/code_802B1EC8.h"
#include "span_1000/code_802BDDB8.h"
#include "types.h"
extern u8 D_B2000015;
s32 func_802B2010_us_rev1(void) {
    do {
    } while (func_802BDEA0_us_rev1() & 3);
    return ((u8) D_B2000015 >> 1) & 1;
}
