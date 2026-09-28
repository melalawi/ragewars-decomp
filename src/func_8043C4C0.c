#include "basetypes.h"

/* Returns whether the word at offset 0x18 of a record equals 2; func_8043C4E8 returns that word. */
s32 func_8043C4C0(s32 *record) {
    return record[0x18 / 4] == 2;
}
