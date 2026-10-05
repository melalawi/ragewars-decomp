#include "span_1000/code_802636D0.h"
#include "types.h"




/** Shift the trailing state-history slots down and clear the newest slot. */
void func_802644A8_de(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 t_c4;
    u8 t_c5;
    s32 t_b0;
    s32 t_18;
    s32 t_1c;
    s32 t_20;
    s32 t_24;
    s32 t_28;

    t_c4 = ((func_802644C8_S1 *)(o))->unkC4;
    t_c5 = ((func_802644C8_S1 *)(o))->unkC5;
    t_b0 = ((func_802644C8_S1 *)(o))->unkB0;
    t_18 = ((func_802644C8_S1 *)(o))->unk18;
    t_1c = ((func_802644C8_S1 *)(o))->unk1C;
    t_20 = ((func_802644C8_S1 *)(o))->unk20;
    t_24 = ((func_802644C8_S1 *)(o))->unk24;
    t_28 = ((func_802644C8_S1 *)(o))->unk28;
    ((func_802644C8_S1 *)(o))->unk1C = 0;
    ((func_802644C8_S1 *)(o))->unk20 = 0;
    ((func_802644C8_S1 *)(o))->unk24 = 0;
    ((func_802644C8_S1 *)(o))->unk28 = 0;
    ((func_802644C8_S1 *)(o))->unkC6 = t_c4;
    ((func_802644C8_S1 *)(o))->unkC7 = t_c5;
    ((func_802644C8_S1 *)(o))->unkAC = t_b0;
    ((func_802644C8_S1 *)(o))->unkB0 = t_18;
    ((func_802644C8_S1 *)(o))->unkB4 = t_1c;
    ((func_802644C8_S1 *)(o))->unkB8 = t_20;
    ((func_802644C8_S1 *)(o))->unkBC = t_24;
    ((func_802644C8_S1 *)(o))->unkC0 = t_28;
}
