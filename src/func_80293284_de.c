#include "common/types.h"
#include "span_1000/code_8029193C.h"
#include "types.h"

extern s32 D_8011BDC8;
extern s32 func_8044D220_de(s8 *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4);
extern s32 D_801427E0;






void func_80293284_de(void *arg0, s32 arg1) {
    s32 sp18[6];
    s32 var_s0;

    var_s0 = arg1;
    if (func_8044D220_de((s8 *)&D_8011BDC8, -1, var_s0, sp18, 1) == 0) {
        var_s0 = 0;
    }
    ((func_80293268_S1 *)(&D_801427E0))->unk0 = 0;
    ((func_80293268_S1 *)(&D_801427E0))->unk4 = 0;
    ((func_80293268_S1 *)(&D_801427E0))->unk8 = 0;
    ((func_80293268_S1 *)(&D_801427E0))->unkC = 0;
    ((func_80293268_S1 *)(&D_801427E0))->unk88 = 0;
    ((func_80293268_S2 *)(arg0))->unk26DC1 = 2;
    ((func_80293268_S2 *)(arg0))->unk26DD8 = var_s0;
    ((func_80293268_S2 *)(arg0))->unk26DDC = 1;
    ((func_80293268_S2 *)(arg0))->unk26DBC = 0xD;
}
