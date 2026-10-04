#include "span_1000/code_802B033C.h"
#include "span_1000/code_802BDDB8.h"
#include "types.h"

extern u8 D_8014D3E2;
extern s16 D_B2000008;


void func_802B1D14_us_rev1(s32 arg0) {
    u8 temp_v0;

    temp_v0 = (D_8014D3E2 & 0xBF) | (arg0 << 6);
    D_8014D3E2 = temp_v0;
    do {
    } while (func_802BDEA0_us_rev1() & 3);
    D_B2000008 = temp_v0 & 0xFF;
}
