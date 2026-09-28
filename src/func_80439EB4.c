#include "basetypes.h"

/* Stores a value into the word at offset 0xB8 of an object. */
struct ObjectB8 {
    char pad[0xB8];
    s32 value;
};

void func_80439EB4(struct ObjectB8 *object, s32 value) {
    object->value = value;
}
