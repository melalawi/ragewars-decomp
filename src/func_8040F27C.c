#include "basetypes.h"

/* Stores two bytes at offsets 0x2C and 0x2D of a record, a pair set together. */
struct Pair2C {
    char pad[0x2C];
    u8 first;
    u8 second;
};

void func_8040F27C(struct Pair2C *record, u8 first, u8 second) {
    record->first = first;
    record->second = second;
}
