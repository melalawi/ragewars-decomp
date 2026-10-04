#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Returns the word at offset 0x14 of a record. */
s32 func_804136C0_de(s32 *record) {
    return record[0x14 / 4];
}
