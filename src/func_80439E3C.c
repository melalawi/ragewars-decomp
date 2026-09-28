#include "basetypes.h"

/* Returns by value the three-word vector at offset 0x28 of an object. */
struct Vec3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Object {
    char pad[0x28];
    struct Vec3 vector;
};

struct Vec3 func_80439E3C(struct Object *object) {
    return object->vector;
}
