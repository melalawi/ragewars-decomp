#include "span_1000/code_802B1EC8.h"
#include "span_1000/code_802BDDB8.h"
#include "types.h"
extern s8 D_8014D3E0;
extern s16 D_B2000000;
void func_802B1FCC_us_rev1(s8 arg0) {
    D_8014D3E0 = arg0;
    do {
    } while (func_802BDEA0_us_rev1() & 3);
    D_B2000000 = arg0 & 0xFF;
}
