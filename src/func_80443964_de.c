#include "span_16E000/code_804434BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D7BE8 when the option D_801468F4 is set and at D_800D7BE4 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_80142834;
extern char D_800D3BBC[];
extern char D_800D3BB8[];

s32 func_80443964_de(struct Field_func_8040A4A0_de *field) {
    if (D_80142834 != 0) {
        field->text = D_800D3BBC;
    } else {
        field->text = D_800D3BB8;
    }
    return 0;
}
