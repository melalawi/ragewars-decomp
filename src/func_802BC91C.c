#include "basetypes.h"

extern char D_8014D470;

void func_802BC91C(void) {
    s32 var_v0;
    u8 *var_v1;
    s32 val;

    var_v1 = &D_8014D470;
    *(s32 *)(var_v1 + 0x3C) = 1;
    val = 0xFD;
    var_v0 = 3;
    do {
        *var_v1 = val;
        var_v0 -= 1;
        var_v1 += 1;
    } while (var_v0 >= 0);
    *var_v1 = 0xFE;
}
