#include "shared/world.h"
#include "span_1000/code_802944E8.h"
#include "types.h"



extern s32 func_8044D220_de(s8 *, s32, s32, void *, s32);




void func_802947C8_de(void *arg0, s32 arg1) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = arg1;
    if (func_8044D220_de(&D_8011FE88, -1, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    ((func_802947DC_S1 *)(arg0))->unk26DC1 = 2;
    ((func_802947DC_S1 *)(arg0))->unk26DD8 = var_s0;
    ((func_802947DC_S1 *)(arg0))->unk26DBC = 0xE;
}
