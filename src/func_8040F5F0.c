#include "basetypes.h"

/* Orders two records by the unsigned halfword at offset 0x14, returning the difference in the
   shape a sort comparator uses. */
struct Keyed {
    char pad[0x14];
    u16 key;
};

int func_8040F5F0(struct Keyed *a, struct Keyed *b) {
    return a->key - b->key;
}
