#include "span_16E000/code_8043BD50.h"
#include "types.h"

/* Returns whether the word at offset 0x18 of a record equals 2; func_8043C308_de returns that word. */
s32 func_8043C2E0_de(s32 *record) {
    return record[0x18 / 4] == 2;
}
