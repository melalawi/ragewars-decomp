#include "basetypes.h"

/* Sets the word at offset 0x84 of an object to one. */
struct Object84 {
    char pad[0x84];
    s32 value;
};

void func_80419F98(struct Object84 *object) {
    object->value = 1;
}
