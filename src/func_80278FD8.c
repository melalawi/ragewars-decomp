#include "basetypes.h"

/* Clears bits 0x2000 and 0x100 of the flag word at offset 0x100 of an object. */
struct Flags100 {
    char pad[0x100];
    s32 flags;
};

void func_80278FD8(struct Flags100 *object) {
    object->flags &= ~0x2000;
    object->flags &= ~0x100;
}
