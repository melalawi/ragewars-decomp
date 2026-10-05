#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_8040A83C.h"
#include "types.h"

/* Points a field's text at D_800D7810 when D_80153730 is set, at D_800D7818 when D_80153774 is set instead, and at
   D_800D7814 otherwise. Returns zero. */


extern s32 D_8014D4A0;
extern s32 D_8014D4E4;
extern char D_800D37E4[];
extern char D_800D37EC[];
extern char D_800D37E8[];

s32 func_8040A9F8_de(struct Field_func_8040A4A0_de *field) {
    if (D_8014D4A0 != 0) {
        field->text = D_800D37E4;
    } else if (D_8014D4E4 != 0) {
        field->text = D_800D37EC;
    } else {
        field->text = D_800D37E8;
    }
    return 0;
}
