#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0E88 for states 0 to 15, and D_800D782C for any other state. Returns zero. */


extern u32 D_8014D4F8;
extern void *jtbl_800DCE58[];
extern char D_800D3800[];
extern char D_800D3814[];
extern char D_800D3828[];
extern char D_800D383C[];
extern char D_800D3850[];
extern char D_800D3864[];
extern char D_800D3878[];
extern char D_800D388C[];
extern char D_800D38A0[];
extern char D_800D38B4[];
extern char D_800D38C8[];
extern char D_800D38DC[];
extern char D_800D38F0[];
extern char D_800D3904[];
extern char D_800D3918[];
extern char D_800D392C[];

s32 func_8040ACA0_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_8014D4F8;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCE58[state];
state_other:
    field->text = D_800D3800;
    goto done;
case_1:
    field->text = D_800D3814;
    goto done;
case_2:
    field->text = D_800D3828;
    goto done;
case_3:
    field->text = D_800D3850;
    goto done;
case_4:
    field->text = D_800D383C;
    goto done;
case_5:
    field->text = D_800D3864;
    goto done;
case_6:
    field->text = D_800D3878;
    goto done;
case_7:
    field->text = D_800D388C;
    goto done;
case_8:
    field->text = D_800D38A0;
    goto done;
case_9:
    field->text = D_800D38B4;
    goto done;
case_10:
    field->text = D_800D38C8;
    goto done;
case_11:
    field->text = D_800D38DC;
    goto done;
case_12:
    field->text = D_800D38F0;
    goto done;
case_13:
    field->text = D_800D3904;
    goto done;
case_14:
    field->text = D_800D3918;
    goto done;
case_15:
    field->text = D_800D392C;
done:
    return 0;
}
