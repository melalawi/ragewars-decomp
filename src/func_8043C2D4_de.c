#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Returns the word at offset 0x14 of a record. */
s32 func_8043C2D4_de(s32 *record) {
    return record[0x14 / 4];
}
