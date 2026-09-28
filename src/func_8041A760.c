#include "basetypes.h"

/* Returns the word at offset 0x50 of a record. */
s32 func_8041A760(s32 *record) {
    return record[0x50 / 4];
}
