#include "basetypes.h"

/* Returns entry i of the word array at offset 0x4C of an object; func_8041B834 writes the
   parallel array at offset 0x5C. */
struct Slots {
    char pad[0x4C];
    s32 values[1];
};

s32 func_8041B87C(struct Slots *object, s32 index) {
    return object->values[index];
}
