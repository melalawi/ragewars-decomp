#include "span_16E000/code_8040AC98.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D7974 when the option D_80153734 is set and at D_800D7980 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_8014D4A4;
extern char D_800D3948[];
extern char D_800D3954[];

s32 func_8040B410_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4A4 != 0) {
        field->text = D_800D3948;
    } else {
        field->text = D_800D3954;
    }
    return 0;
}
