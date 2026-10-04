#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Sets bit 23 of the flag word at offset 8 of a record unless func_80265350_de reports 0x400000 for
   it, in which case the bit is cleared; then stores what func_8040C3BC_de returns at offset 0x14.
   Returns zero. */


extern s32 func_80265350_de(struct Record_func_80444C68_de *);
extern s32 func_8040C3BC_de();

s32 func_80445590_de(struct Record_func_80444C68_de *record) {
    if (func_80265350_de(record) != 0x400000) {
        record->flags |= 0x800000;
    } else {
        record->flags &= ~0x800000;
    }
    record->value = func_8040C3BC_de();
    return 0;
}
