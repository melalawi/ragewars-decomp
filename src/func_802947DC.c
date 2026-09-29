#include "basetypes.h"

extern s32 D_8011FE88;

extern s32 func_8044DE70(s8 *, s32, s32, void *, s32);

typedef struct func_802947DC_S1 func_802947DC_S1;
struct func_802947DC_S1 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DD8 - 0x26DC1 - sizeof(s8)];
    s32 unk26DD8;
};

void func_802947DC(void *arg0, s32 arg1) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = arg1;
    if (func_8044DE70(&D_8011FE88, -1, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    ((func_802947DC_S1 *)(arg0))->unk26DC1 = 2;
    ((func_802947DC_S1 *)(arg0))->unk26DD8 = var_s0;
    ((func_802947DC_S1 *)(arg0))->unk26DBC = 0xE;
}
