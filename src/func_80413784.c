#include "basetypes.h"

/* Returns bit 1 of the flag byte at offset 1 of a record; func_80413794 returns bit 0. */
u8 func_80413784(u8 *record) {
    return (record[1] >> 1) & 1;
}
