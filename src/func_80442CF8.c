#include "basetypes.h"

/* Folds the counter at offset 0x1C8 of an object into a triangle wave: values below 0x18 are
   returned as they are and the rest as 0x2F less the value. */
struct Object {
    char pad[0x1C8];
    s32 count;
};

s32 func_80442CF8(struct Object *object) {
    s32 count = object->count;

    if (count < 0x18) {
        return count;
    }
    return 0x2F - count;
}
