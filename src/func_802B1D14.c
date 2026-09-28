#include "basetypes.h"

extern u8 D_8014D3E2;
extern s16 D_B2000008;
extern u32 func_802BDEA0(void);

void func_802B1D14(s32 arg0) {
    u8 temp_v0;

    temp_v0 = (D_8014D3E2 & 0xBF) | (arg0 << 6);
    D_8014D3E2 = temp_v0;
    do {
    } while (func_802BDEA0() & 3);
    D_B2000008 = temp_v0 & 0xFF;
}
