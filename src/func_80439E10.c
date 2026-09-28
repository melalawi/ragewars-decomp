#include "basetypes.h"

/* Stores a three-word vector passed by value into offset 0x28 of an object. */
struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Object {
    char pad[0x28];
    struct Vec3 vector;
};

void func_80439E10(struct Object *object, struct Vec3 vector) {
    object->vector = vector;
}
