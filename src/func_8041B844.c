#include "basetypes.h"

/* Counts the non-zero words among the first n of the array at offset 0x5C of an object, n being
   its count at 0x48. */
struct Slots {
    char pad0[0x48];
    s32 count;
    char pad4C[0x5C - 0x4C];
    s32 values[1];
};

s32 func_8041B844(struct Slots *object) {
    s32 used = 0;
    s32 i;

    for (i = 0; i < object->count; i++) {
        if (object->values[i] != 0) {
            used++;
        }
    }
    return used;
}
