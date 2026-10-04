#include "span_16E000/code_80444F9C.h"
#include "span_16E000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Points a field's text at D_800E62DC when the option D_800E63AC is set and at D_800E62F0 otherwise, and returns
   zero: the label an option menu shows for that option. */



extern char D_800E62DC[];
extern char D_800E62F0[];

s32 func_804453E0_us_rev1(struct Field_func_8040A4A0_de *field) {
    if (D_800E63AC != 0) {
        field->text = D_800E62DC;
    } else {
        field->text = D_800E62F0;
    }
    return 0;
}
