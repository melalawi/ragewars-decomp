#include "basetypes.h"

/* Returns the word at offset 0x0 of a record. */
s32 func_80439EA8(s32 *record) {
    return record[0x0 / 4];
}
