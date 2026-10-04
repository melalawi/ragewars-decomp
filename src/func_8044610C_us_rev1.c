#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800E6100 when the option D_800E63BC is set and at D_800E611C otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_800E63BC;
extern char D_800E6100[];
extern char D_800E611C[];

s32 func_8044610C_us_rev1(struct Field_func_8040A4A0_de *field) {
    if (D_800E63BC != 0) {
        field->text = D_800E6100;
    } else {
        field->text = D_800E611C;
    }
    return 0;
}
