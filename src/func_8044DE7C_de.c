#ifdef NON_MATCHING
#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "span_16E000/code_8044ACCC.h"
#include "span_16E000/code_8044E2B8.h"

extern Track_func_8044D220_de D_8011BDC8;
extern struct Level_func_8044B7C0_de D_801427E0;
extern s32 func_8044D220_de(Track_func_8044D220_de *, s32, s32,
                           Object_func_8044D220_de *, s32);

void func_8044DE7C_de(void *arg0, s32 selection) {
    Object_func_8044D220_de object;
    func_80293268_S2 *state = arg0;
    u8 enabled;

    if (func_8044D220_de(&D_8011BDC8, -1, selection, &object, 1) == 0) {
        selection = 0;
    }
    D_801427E0.unk0 = 0;
    D_801427E0.unk4 = 0;
    D_801427E0.unk8 = 0;
    D_801427E0.unkC = 0;
    D_801427E0.unk88 = 0;
    enabled = ((struct Shape_func_80291208_de *)arg0)->field_26825;
    state->unk26DDC = 0;
    state->unk26DD8 = selection;
    if (enabled && D_801427E0.unkAC) {
        state->unk26DC1 = 2;
        state->unk26DBC = 0xD;
    } else {
        state->unk26DC1 = 2;
        state->unk26DBC = 0xC;
    }
}
#endif /* NON_MATCHING */
