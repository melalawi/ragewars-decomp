#include "basetypes.h"

/* Sets or clears bit 1 of the flag halfword at offset 0x12 of a record according to the second
   argument. */
struct Record {
    char pad[0x12];
    u16 flags;
};

void func_8040E980(struct Record *record, int enable) {
    if (enable) {
        record->flags |= 1;
    } else {
        record->flags &= ~1;
    }
}
