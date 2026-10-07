#include "span_16E000/code_80443868.h"
#include "types.h"
#include "stddef.h"
/* Updates display flags and activates the selected resource. */
s32 func_8022A5A0_de(s32 *, s32); /* extern */
void func_80264770_de(s32); /* extern */
void func_80404E28_de(s32); /* extern */
extern s32 D_80140F80;
extern s32 D_80142834[];
extern s32 D_8014D4CC[];
extern s32 D_800DE870[]; /* const */
void func_80443CD4_de(Arg_func_80443CD4_de *arg0) {
    s32 temp_a1;
    s32 var_s0;
    Actor_func_80443C14_de *temp_a0;
    Actor_func_80443C14_de *temp_v0;
    Actor_func_80443C14_de *temp_v1;
    Actor_func_80443C14_de *temp_v1_2;
    Actor_func_80443C14_de *temp_v1_3;
    Actor_func_80443C14_de *temp_v1_4;
    Actor_func_80443C14_de *temp_v1_5;
    temp_v1 = arg0->unkC;
    temp_v1->flags238 = (s32) (temp_v1->flags238 | 0x01800000);
    temp_v1_2 = arg0->unkC;
    temp_v1_2->flags260 = (s32) (temp_v1_2->flags260 | 0x01800000);
    temp_v1_3 = arg0->unkC;
    temp_v1_3->flags1c0 = (s32) (temp_v1_3->flags1c0 & 0xFE7FFFFF);
    temp_v1_4 = arg0->unkC;
    temp_v1_4->flags58 = (s32) (temp_v1_4->flags58 & 0xFE7FFFFF);
    temp_v1_5 = arg0->unkC;
    temp_v1_5->flags210 = (s32) (temp_v1_5->flags210 & 0xFE7FFFFF);
    D_8014D4CC[0] = 0;
    D_800DE870[0] = 0;
    var_s0 = 0;
    if (D_80142834[0] != 0) {
        temp_v0 = arg0->unkC;
        temp_v0->flags120 = (s32) (temp_v0->flags120 | 0x01000000);
    } else {
        temp_a0 = arg0->unkC;
        temp_a0->flags120 = (s32) (temp_a0->flags120 & 0xFEFFFFFF);
    }
    temp_a1 = arg0->unk1C;
    if (temp_a1 != 0) {
        var_s0 = func_8022A5A0_de(&D_80140F80, temp_a1);
    }
    func_80264770_de(var_s0);
    func_80404E28_de(var_s0);
}
