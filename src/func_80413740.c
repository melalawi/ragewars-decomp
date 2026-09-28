#include "basetypes.h"

/* Returns the word at offset 0x14 of a record. */
s32 func_80413740(s32 *record) {
    return record[0x14 / 4];
}
