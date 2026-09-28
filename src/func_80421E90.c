#include "basetypes.h"

/* Returns the word at offset 0x4 of a record. */
s32 func_80421E90(s32 *record) {
    return record[0x4 / 4];
}
