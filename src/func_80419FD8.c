#include "basetypes.h"

/* Calls func_80419D04 on an object, marks it busy at offset 0x44 and copies the low byte of the
   current entry of the word array at 0x4C, selected by the index at 0x74, into offset 0x10 of the
   object at 0x78. */
struct Target {
    char pad[0x10];
    u8 value;
};

struct Object {
    char pad0[0x44];
    s32 busy;
    char pad48[0x4C - 0x48];
    s32 entries[(0x74 - 0x4C) / 4];
    s32 index;
    struct Target *target;
};

extern void func_80419D04(struct Object *);

void func_80419FD8(struct Object *object) {
    func_80419D04(object);
    object->busy = 1;
    object->target->value = object->entries[object->index];
}
