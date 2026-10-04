#include "span_16E000/code_8040A4BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D7810 when the option D_80153780 is set and at D_800D7814 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_8014D4F0;
extern char D_800D37E4[];
extern char D_800D37E8[];

s32 func_8040A6A8_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4F0 != 0) {
        field->text = D_800D37E4;
    } else {
        field->text = D_800D37E8;
    }
    return 0;
}
