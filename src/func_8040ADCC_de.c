#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0EC8 for states 0 to 15, and D_800D7830 for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCE98_de[];
extern char D_800D3804[];
extern char D_800D3818[];
extern char D_800D382C[];
extern char D_800D3840[];
extern char D_800D3854[];
extern char D_800D3868[];
extern char D_800D387C[];
extern char D_800D3890[];
extern char D_800D38A4[];
extern char D_800D38B8[];
extern char D_800D38CC[];
extern char D_800D38E0[];
extern char D_800D38F4[];
extern char D_800D3908[];
extern char D_800D391C[];
extern char D_800D3930[];

s32 func_8040ADCC_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCE98_de[state];
state_other:
    field->text = D_800D3804;
    goto done;
case_1:
    field->text = D_800D3818;
    goto done;
case_2:
    field->text = D_800D382C;
    goto done;
case_3:
    field->text = D_800D3854;
    goto done;
case_4:
    field->text = D_800D3840;
    goto done;
case_5:
    field->text = D_800D3868;
    goto done;
case_6:
    field->text = D_800D387C;
    goto done;
case_7:
    field->text = D_800D3890;
    goto done;
case_8:
    field->text = D_800D38A4;
    goto done;
case_9:
    field->text = D_800D38B8;
    goto done;
case_10:
    field->text = D_800D38CC;
    goto done;
case_11:
    field->text = D_800D38E0;
    goto done;
case_12:
    field->text = D_800D38F4;
    goto done;
case_13:
    field->text = D_800D3908;
    goto done;
case_14:
    field->text = D_800D391C;
    goto done;
case_15:
    field->text = D_800D3930;
done:
    return 0;
}
