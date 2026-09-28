#include "basetypes.h"

/* Returns the word at offset 0x110 of a record. */
s32 func_8041AD84(s32 *record) {
    return record[0x110 / 4];
}
