#include "basetypes.h"

/* Asks func_8044DE70 about D_8011FE88 with a minus-one selector, clears the words of D_801468A0 and puts the object at arg0 into state 0xC with byte 0x26DC1 set to two and the selector, or zero when the lookup failed, stored at 0x26DD8. Adapted from func_80293268 with the selector fixed at minus one, the word at 0x26DDC cleared before the last word of D_801468A0 instead of set after the selector, and the state 0xC instead of 0xD changed. */
extern s32 D_8011FE88;
extern s32 func_8044DE70(s8 *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4);
extern s32 D_801468A0;

void func_8044EA24(void *arg0) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = -1;
    if (func_8044DE70((s8 *)&D_8011FE88, var_s0, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    *(s32 *)((char *)&D_801468A0 + 0) = 0;
    *(s32 *)((char *)&D_801468A0 + 4) = 0;
    *(s32 *)((char *)&D_801468A0 + 8) = 0;
    *(s32 *)((char *)&D_801468A0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x26DDC) = 0;
    *(s32 *)((char *)&D_801468A0 + 0x88) = 0;
    *(s8 *)((char *)arg0 + 0x26DC1) = 2;
    *(s32 *)((char *)arg0 + 0x26DD8) = var_s0;
    *(s32 *)((char *)arg0 + 0x26DBC) = 0xC;
}
