#include "basetypes.h"
extern s8 D_8014D3E0;
extern s16 D_B2000000;
void func_802B1FCC(s8 arg0) {
    D_8014D3E0 = arg0;
    do {
    } while (func_802BDEA0() & 3);
    D_B2000000 = arg0 & 0xFF;
}
