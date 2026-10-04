#include "span_16E000/code_8040A4BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800D77EC when D_80153730 is set, at D_800D77F4 when D_80153774 is set instead, and at
   D_800D77F0 otherwise. Returns zero. */


extern s32 D_8014D4A0;
extern s32 D_8014D4E4;
extern char D_800D37C0[];
extern char D_800D37C8[];
extern char D_800D37C4[];

s32 func_8040A7BC_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4A0 != 0) {
        field->text = D_800D37C0;
    } else if (D_8014D4E4 != 0) {
        field->text = D_800D37C8;
    } else {
        field->text = D_800D37C4;
    }
    return 0;
}
