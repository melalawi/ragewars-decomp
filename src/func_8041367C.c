#include "basetypes.h"

/* Returns the first byte of a record; func_80413688, which follows it, reads the same byte. */
u8 func_8041367C(u8 *record) {
    return record[0];
}
