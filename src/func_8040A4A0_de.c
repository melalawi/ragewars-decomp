#include "span_16E000/code_8040A4BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D77CC when the option D_80153780 is set and at D_800D77D0 otherwise, and returns
   zero: the label an option menu shows for that option. */


extern s32 D_8014D4F0;
extern char D_800D37A0[];
extern char D_800D37A4[];

s32 func_8040A4A0_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4F0 != 0) {
        field->text = D_800D37A0;
    } else {
        field->text = D_800D37A4;
    }
    return 0;
}
