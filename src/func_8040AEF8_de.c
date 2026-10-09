#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8040A83C.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: one of 15 strings through the jump table
   jtbl_800E0F08 for states 0 to 15, and D_800D7834 for any other state. Returns zero. */


extern u32 D_80153788;
extern void *jtbl_800DCED8[];
extern char D_800D7834[];
extern char D_800D381C[];
extern char D_800D3830[];
extern char D_800D3844[];
extern char D_800D3858[];
extern char D_800D386C[];
extern char D_800D3880[];
extern char D_800D3894[];
extern char D_800D38A8[];
extern char D_800D38BC[];
extern char D_800D38D0[];
extern char D_800D38E4[];
extern char D_800D38F8[];
extern char D_800D390C[];
extern char D_800D3920[];
extern char D_800D3934[];

s32 func_8040AEF8_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4, &&case_5, &&case_6, &&case_7, &&case_8, &&case_9, &&case_10, &&case_11, &&case_12, &&case_13, &&case_14, &&case_15
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCED8[state];
state_other:
    field->text = D_800D7834;
    goto done;
case_1:
    field->text = D_800D381C;
    goto done;
case_2:
    field->text = D_800D3830;
    goto done;
case_3:
    field->text = D_800D3858;
    goto done;
case_4:
    field->text = D_800D3844;
    goto done;
case_5:
    field->text = D_800D386C;
    goto done;
case_6:
    field->text = D_800D3880;
    goto done;
case_7:
    field->text = D_800D3894;
    goto done;
case_8:
    field->text = D_800D38A8;
    goto done;
case_9:
    field->text = D_800D38BC;
    goto done;
case_10:
    field->text = D_800D38D0;
    goto done;
case_11:
    field->text = D_800D38E4;
    goto done;
case_12:
    field->text = D_800D38F8;
    goto done;
case_13:
    field->text = D_800D390C;
    goto done;
case_14:
    field->text = D_800D3920;
    goto done;
case_15:
    field->text = D_800D3934;
done:
    return 0;
}
