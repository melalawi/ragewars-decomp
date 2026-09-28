#include "basetypes.h"

/* Stores a three-word vector passed by value into offset 0x1C of an object. */
struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Object {
    char pad[0x1C];
    struct Vec3 vector;
};

void func_80439DC0(struct Object *object, struct Vec3 vector) {
    object->vector = vector;
}
