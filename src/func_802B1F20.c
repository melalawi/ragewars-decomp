#include "basetypes.h"
extern u8 D_8014D3E1;
extern s16 D_B2000004;
void func_802B1F20(s32 arg0) {
    u8 temp_a0;
    temp_a0 = arg0 | (D_8014D3E1 & 0xFE);
    D_8014D3E1 = temp_a0;
    do {
    } while (func_802BDEA0() & 3);
    D_B2000004 = temp_a0 & 0xFF;
}
