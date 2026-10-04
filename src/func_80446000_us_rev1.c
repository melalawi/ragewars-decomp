#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at D_800E6090 when the owner at offset 0x1C of the second argument has its
   word at 0x5D0 equal to one, and at D_800E60AC otherwise; returns zero, doing nothing without an
   owner. */






extern char D_800E6090[];
extern char D_800E60AC[];

s32 func_80446000_us_rev1(struct Field_func_8040A4A0_de *field, struct Holder *holder) {
    if (holder->owner == 0) {
        return 0;
    }
    if (holder->owner->value == 1) {
        field->text = D_800E6090;
    } else {
        field->text = D_800E60AC;
    }
    return 0;
}
