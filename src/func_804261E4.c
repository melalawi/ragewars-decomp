/* Counts the enabled entries in a fifty-entry player table. */
#include "basetypes.h"
#define NULL ((void *)0)
extern unsigned char D_80102B4A[];
s32 func_80265670(void *, s32);                     /* extern */


s32 func_804261E4(s32 arg0) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    void *var_a0;

    var_s1 = 0;
    var_s0 = 0;
    temp_s2 = arg0 * 0x190;
    var_a0 = temp_s2 + D_80102B4A;
    do {
        if (func_80265670(temp_s2 + D_80102B4A, var_s0) == 1) {
            var_s1 += 1;
        }
        var_s0 += 1;
        var_a0 = temp_s2 + D_80102B4A;
    } while (var_s0 < 0x32);
    return var_s1;
}
