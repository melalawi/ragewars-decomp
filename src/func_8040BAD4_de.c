#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8040B45C.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153778: one of 3 strings through the jump table
   jtbl_800E1080 for states 0 to 4, and D_800D7A08 for any other state. Returns zero. */


extern u32 D_8014D4E8;
extern void *jtbl_800DD050[];
extern char D_800D39D4[];
extern char D_800D39DC[];

s32 func_8040BAD4_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1, &&case_2, &&case_3
    };
    u32 state = D_8014D4E8;

    if (state >= 5) {
        goto state_other;
    }
    goto *jtbl_800DD050[state];
state_other:
    field->text = D_800D39DC;
    goto done;
case_1:
    field->text = D_800D39DC;
    goto done;
case_2:
    field->text = D_800D39DC;
    goto done;
case_3:
    field->text = D_800D39D4;
done:
    return 0;
}
