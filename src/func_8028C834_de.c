#include "common/types.h"
#include "span_1000/code_8028B64C.h"
#include "types.h"

/* Returns the object in the world's object list nearest to the current player actor, comparing whole-unit distances and starting from a bound of 9999999. */







extern char D_80140F80;
extern Player *func_8022A414_de(void *list);
#ifdef VERSION_EU
extern Player *func_8022A414_de(void *list);
#endif
extern void func_80271F68_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_802B72B0_de(f32 value);

Player *func_8028C834_de(World_func_8028C834_de *world) {
    Vec3 delta;
    Player *player;
    Player *object;
    Player *nearest;
    s32 best;
    s32 distance;
    s32 i;

#ifdef VERSION_EU
    player = func_8022A414_de(&D_80140F80);
#else
    player = func_8022A414_de(&D_80140F80);
#endif
    best = 9999999;
    nearest = 0;
    for (i = 0; i < world->count; i++) {
        object = world->objects[i];
        func_80271F68_de(&delta, &object->pos, &player->pos);
        distance = func_802B72B0_de(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
        if (distance <= best) {
            nearest = object;
            best = distance;
        }
    }
    return nearest;
}
