#include "span_1000/code_8025AE3C.h"
#include "types.h"

/* Returns whether any of the sixteen occupied slots of a record, other than the one its header marks as local, holds the given value at slot offset 0xA8. */







s32 func_8025BA4C_de(Record_func_8025BA4C_de *record, s32 value) {
    s32 i;
    Slot_func_8025BA4C_de *slot = record->slots;

    for (i = 0; i < 16; i++, slot++) {
        if (slot->used != -1 && record->header->local != i && slot->value == value) {
            return 1;
        }
    }
    return 0;
}
