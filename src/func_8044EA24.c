#include "basetypes.h"

/* Asks func_8044DE70 about D_8011FE88 with a minus-one selector, clears the words of D_801468A0 and puts the object at arg0 into state 0xC with byte 0x26DC1 set to two and the selector, or zero when the lookup failed, stored at 0x26DD8. Adapted from func_80293268 with the selector fixed at minus one, the word at 0x26DDC cleared before the last word of D_801468A0 instead of set after the selector, and the state 0xC instead of 0xD changed. */
extern s32 D_8011FE88;
extern s32 func_8044DE70(s8 *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4);
extern s32 D_801468A0;

typedef struct func_8044EA24_S1 func_8044EA24_S1;
typedef struct func_8044EA24_S2 func_8044EA24_S2;
struct func_8044EA24_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x88 - 0xC - sizeof(s32)];
    s32 unk88;
};
struct func_8044EA24_S2 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DD8 - 0x26DC1 - sizeof(s8)];
    s32 unk26DD8;
    char pad26DD8[0x26DDC - 0x26DD8 - sizeof(s32)];
    s32 unk26DDC;
};

void func_8044EA24(void *arg0) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = -1;
    if (func_8044DE70((s8 *)&D_8011FE88, var_s0, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    ((func_8044EA24_S1 *)(&D_801468A0))->unk0 = 0;
    ((func_8044EA24_S1 *)(&D_801468A0))->unk4 = 0;
    ((func_8044EA24_S1 *)(&D_801468A0))->unk8 = 0;
    ((func_8044EA24_S1 *)(&D_801468A0))->unkC = 0;
    ((func_8044EA24_S2 *)(arg0))->unk26DDC = 0;
    ((func_8044EA24_S1 *)(&D_801468A0))->unk88 = 0;
    ((func_8044EA24_S2 *)(arg0))->unk26DC1 = 2;
    ((func_8044EA24_S2 *)(arg0))->unk26DD8 = var_s0;
    ((func_8044EA24_S2 *)(arg0))->unk26DBC = 0xC;
}
