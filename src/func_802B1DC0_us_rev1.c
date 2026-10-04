#include "span_1000/code_802B033C.h"
#include "span_1000/code_802BDDB8.h"
#include "types.h"

extern u8 D_8014D3E3;
extern s16 D_B200000C;


void func_802B1DC0_us_rev1(s32 arg0) {
    u8 temp_v0;

    temp_v0 = (D_8014D3E3 & 0xF7) | (arg0 << 3);
    D_8014D3E3 = temp_v0;
    do {
    } while (func_802BDEA0_us_rev1() & 3);
    D_B200000C = temp_v0 & 0xFF;
}
