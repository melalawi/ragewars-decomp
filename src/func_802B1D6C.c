#include "basetypes.h"
extern u8 D_8014D3E3;
extern s16 D_B200000C;
void func_802B1D6C(s32 arg0) {
    u8 temp_a0;
    temp_a0 = arg0 | (D_8014D3E3 & 0xF8);
    D_8014D3E3 = temp_a0;
    do {
    } while (func_802BDEA0() & 3);
    D_B200000C = temp_a0 & 0xFF;
}
