#include "basetypes.h"

/* Returns the object in the world's object list nearest to the current player actor, comparing whole-unit distances and starting from a bound of 9999999. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Object {
    char pad0[8];
    Vec3f position;
} Object;

typedef struct World {
    char pad0[0x1B664];
    Object *objects[16];
    s32 count;
} World;

extern char D_80145040;
extern Object *func_8022A404(void *list);
#ifdef VERSION_EU
extern Object *func_8022A404(void *list);
#endif
extern void func_80271FD8(Vec3f *out, Vec3f *a, Vec3f *b);
extern f32 func_802BC380(f32 value);

Object *func_8028C810(World *world) {
    Vec3f delta;
    Object *player;
    Object *object;
    Object *nearest;
    s32 best;
    s32 distance;
    s32 i;

#ifdef VERSION_EU
    player = func_8022A404(&D_80145040);
#else
    player = func_8022A404(&D_80145040);
#endif
    best = 9999999;
    nearest = 0;
    for (i = 0; i < world->count; i++) {
        object = world->objects[i];
        func_80271FD8(&delta, &object->position, &player->position);
        distance = func_802BC380(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
        if (distance <= best) {
            nearest = object;
            best = distance;
        }
    }
    return nearest;
}
