#include "basetypes.h"

/* Stores a value into entry i of the word array at offset 0x5C of an object; func_8041B87C reads
   the parallel array at offset 0x4C. */
struct Slots {
    char pad[0x5C];
    s32 values[1];
};

void func_8041B834(struct Slots *object, s32 index, s32 value) {
    object->values[index] = value;
}
