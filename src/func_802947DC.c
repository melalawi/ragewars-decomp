#include "basetypes.h"

extern s32 D_8011FE88;

extern s32 func_8044DE70(s8 *, s32, s32, void *, s32);

void func_802947DC(void *arg0, s32 arg1) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = arg1;
    if (func_8044DE70(&D_8011FE88, -1, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    *(s8 *)((char *)arg0 + 0x26DC1) = 2;
    *(s32 *)((char *)arg0 + 0x26DD8) = var_s0;
    *(s32 *)((char *)arg0 + 0x26DBC) = 0xE;
}
