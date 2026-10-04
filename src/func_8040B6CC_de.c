#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D7990 when the option D_80153760 is set and at D_800D7994 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_8014D4D0;
extern char D_800D3964[];
extern char D_800D3968[];

s32 func_8040B6CC_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4D0 != 0) {
        field->text = D_800D3964;
    } else {
        field->text = D_800D3968;
    }
    return 0;
}
