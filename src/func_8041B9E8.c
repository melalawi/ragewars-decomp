#include "basetypes.h"

/* Stores a value into the word at offset 0x6C of an object; func_8041CE88 uses it to set that word
   to one on the object held at offset 4 of the structure D_800E3590 points to. */
struct Object6C {
    char pad[0x6C];
    s32 value;
};

void func_8041B9E8(struct Object6C *object, s32 value) {
    object->value = value;
}
