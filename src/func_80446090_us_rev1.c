#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800E60E4 when the option D_800D0EBC is set and at D_800E60C8 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_800D0EBC;
extern char D_800E60E4[];
extern char D_800E60C8[];

s32 func_80446090_us_rev1(struct Field_func_8040A4A0_de *field) {
    if (D_800D0EBC != 0) {
        field->text = D_800E60E4;
    } else {
        field->text = D_800E60C8;
    }
    return 0;
}
