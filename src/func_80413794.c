#include "basetypes.h"

/* Returns bit 0 of the flag byte at offset 1 of a record; func_80413784 returns bit 1. */
u8 func_80413794(u8 *record) {
    return record[1] & 1;
}
