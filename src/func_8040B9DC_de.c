#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8040B45C.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153778: one of 4 strings through the jump table
   jtbl_800E1050 for states 0 to 4, and D_800D79A4 for any other state. Returns zero. */


extern u32 D_80153778;
extern void *jtbl_800DD020[];
extern char D_800D79A4[];
extern char D_800D398C[];
extern char D_800D39A0[];
extern char D_800D39B4[];
extern char D_800D39C8[];

s32 func_8040B9DC_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3, &&case_4
    };
    u32 state = D_80153778;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800DD020[state];
state_other:
    field->text = D_800D79A4;
    goto done;
case_1:
    field->text = D_800D398C;
    goto done;
case_2:
    field->text = D_800D39A0;
    goto done;
case_3:
    field->text = D_800D39B4;
    goto done;
case_4:
    field->text = D_800D39C8;
done:
    return 0;
}
