#include "span_16E000/code_8041A0AC.h"
#include "types.h"

/* Returns the word at offset 0x58 of a record. */
s32 func_8041A470_de(s32 *record) {
    return record[0x58 / 4];
}
