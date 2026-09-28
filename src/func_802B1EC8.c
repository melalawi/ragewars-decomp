#include "basetypes.h"

extern u8 D_8014D3E1;
extern s16 D_B2000004;
extern u32 func_802BDEA0(void);

void func_802B1EC8(s32 arg0) {
    u8 temp_v0;

    temp_v0 = (D_8014D3E1 & 0xFD) | (arg0 << 1);
    D_8014D3E1 = temp_v0;
    do {
    } while (func_802BDEA0() & 3);
    D_B2000004 = temp_v0 & 0xFF;
}
