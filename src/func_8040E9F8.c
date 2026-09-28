#include "basetypes.h"

/* Stores two halfwords at offsets 0x14 and 0x16 of a record, a pair set together. */
struct Pair14 {
    char pad[0x14];
    s16 first;
    s16 second;
};

void func_8040E9F8(struct Pair14 *record, s16 first, s16 second) {
    record->first = first;
    record->second = second;
}
