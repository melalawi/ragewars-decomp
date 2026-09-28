#include "basetypes.h"

/* Returns the word at offset 0x18 of a record. */
s32 func_8043C4E8(s32 *record) {
    return record[0x18 / 4];
}
