#include "basetypes.h"

/* Returns the halfword at offset 0xC of the object held in entry i of the pointer array at
   offset 0x4C of an object. */
struct Entry {
    char pad[0xC];
    s16 value;
};

struct Slots {
    char pad[0x4C];
    struct Entry *entries[1];
};

s16 func_8041B890(struct Slots *object, s32 index) {
    return object->entries[index]->value;
}
