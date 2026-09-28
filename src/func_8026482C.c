#include "basetypes.h"

extern void func_80264268(void *arg0);
extern s32 D_8010F328;

void func_8026482C(void) {
    u8 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = (u8 *)&D_8010F328;
    do {
        func_80264268(var_s0);
        var_s1 += 1;
        var_s0 += 0x224;
    } while (var_s1 < 4);
}
