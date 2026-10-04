#include "span_16E000/code_80405454.h"
#include "types.h"

/* Clears a record: the words at offsets 0, 4, 8, 0x18 and 0x1C, and the three-word array at 0xC
   from its last entry down. */


void func_80405CA8_de(struct Record_func_80405CA8_de *record) {
    s32 i;

    record->a = 0;
    record->b = 0;
    record->c = 0;
    record->d = 0;
    record->e = 0;
    for (i = 2; i >= 0; i--) {
        record->values[i] = 0;
    }
}
