#include "span_1000/code_8028B64C.h"
#include "types.h"





/* Returns the nearest other object matching the optional team, kind and active filters, by squared distance. */
Object_func_8028CAE0_de *func_8028CAE0_de(World_func_8028CAE0_de *world, Object_func_8028CAE0_de *self, s32 team, s32 kind, s32 activeOnly) {
    s32 i;
    Object_func_8028CAE0_de *obj;
    Object_func_8028CAE0_de *best;
    f32 min;
    f32 dx, dy, dz, distSq;

    s32 count;

    i = 0;
    min = 3.4028235e38f;
    count = world->count;
    best = 0;
    for (; i < count; i++) {
        obj = &world->objects[i];
        if (obj == self) {
            continue;
        }
        if (team != -1 && obj->team != team) {
            continue;
        }
        if (kind != -1 && *obj->kind != kind) {
            continue;
        }
        if (activeOnly && obj->active == 0) {
            continue;
        }
        dx = self->x - obj->x;
        dy = self->y - obj->y;
        dz = self->z - obj->z;
        distSq = dx * dx + dy * dy + dz * dz;
        if (distSq < min) {
            min = distSq;
            best = obj;
        }
    }
    return best;
}
