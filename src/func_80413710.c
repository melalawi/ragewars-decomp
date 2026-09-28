#include "basetypes.h"

/* Returns the halfword at offset 0xA of a record. It is one of a run of accessors from
   func_804136E0 to func_80413710 that return the halfwords at offsets 2 to 0xA in turn. */
s16 func_80413710(s16 *record) {
    return record[0xA / 2];
}
