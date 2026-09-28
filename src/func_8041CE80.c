#include "basetypes.h"

/* Stores a value into the word at offset 0x49C of an object; func_80420688 and func_8043AD20 call
   it with zero, func_8041CB48 writes the same word directly and func_8041C864 reads it. */
struct Object49C {
    char pad[0x49C];
    s32 value;
};

void func_8041CE80(struct Object49C *object, s32 value) {
    object->value = value;
}
