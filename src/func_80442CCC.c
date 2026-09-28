#include "basetypes.h"

/* Advances the counter at offset 0x1C8 of an object by the step at 0x1CC and clears both once
   the counter reaches 0x30. */
struct Object {
    char pad[0x1C8];
    s32 count;
    s32 step;
};

void func_80442CCC(struct Object *object) {
    object->count += object->step;
    if (object->count >= 0x30) {
        object->count = 0;
        object->step = 0;
    }
}
