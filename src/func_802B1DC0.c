#include "basetypes.h"

extern u8 D_8014D3E3;
extern s16 D_B200000C;
extern u32 func_802BDEA0(void);

void func_802B1DC0(s32 arg0) {
    u8 temp_v0;

    temp_v0 = (D_8014D3E3 & 0xF7) | (arg0 << 3);
    D_8014D3E3 = temp_v0;
    do {
    } while (func_802BDEA0() & 3);
    D_B200000C = temp_v0 & 0xFF;
}
