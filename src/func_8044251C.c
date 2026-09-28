#include "basetypes.h"

/* Returns the word at offset 0x1C of the object that offset 0x14 of a record points to. */
struct Inner {
    char pad[0x1C];
    s32 value;
};

struct Outer {
    char pad[0x14];
    struct Inner *inner;
};

s32 func_8044251C(struct Outer *outer) {
    return outer->inner->value;
}
