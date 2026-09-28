#include "basetypes.h"

/* Returns the word at offset 0x58 of a record. */
s32 func_8041A4F0(s32 *record) {
    return record[0x58 / 4];
}
