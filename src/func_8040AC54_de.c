#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8040A83C.h"
#include "types.h"

/* Points a field's text at the label for the state word D_80153788: the second string through the jump table
   jtbl_800E0E48 for states 0 to 15, and D_800D781C for any other state. Returns zero. An earlier attempt misjudged this switch as a dispatch head whose
   cases lay outside the interval; its case bodies are inside it. */


extern u32 D_80153788;
extern void *jtbl_800DCE18[];
extern char D_800D781C[];
extern char D_800D37F4[];

s32 func_8040AC54_de(struct Field_func_8040A4A0_de *field) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&case_1
    };
    u32 state = D_80153788;

    if (state >= 16) {
        goto state_other;
    }
    goto *jtbl_800DCE18[state];
state_other:
    field->text = D_800D781C;
    goto done;
case_1:
    field->text = D_800D37F4;
done:
    return 0;
}
