#include "span_16E000/code_80439930.h"
#include "types.h"

/* Returns the word at offset 0x0 of a record. */
s32 func_80439CC8_de(s32 *record) {
    return record[0x0 / 4];
}
