#include "basetypes.h"

/* Copies the byte at offset 0x83 of an object into offset 0x10 of the object at 0x78, and clears
   the pending word at 0x84 that func_80419F98 sets and func_80419FB8 tests. */
struct Target {
    char pad[0x10];
    u8 value;
};

struct Source {
    char pad[0x78];
    struct Target *target;
    char pad7C[0x83 - 0x7C];
    u8 value;
    s32 pending;
};

void func_80419FA4(struct Source *source) {
    struct Target *target = source->target;
    u8 value = source->value;

    source->pending = 0;
    target->value = value;
}
