#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800E6058 when the option D_800D2AE0 is set and at D_800E6074 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_800D2AE0;
extern char D_800E6058[];
extern char D_800E6074[];

s32 func_80446230_us_rev1(struct Field_func_8040A4A0_de *field) {
    if (D_800D2AE0 != 0) {
        field->text = D_800E6058;
    } else {
        field->text = D_800E6074;
    }
    return 0;
}
