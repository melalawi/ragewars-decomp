#include "basetypes.h"

typedef struct {
    u8 pad0[0x8];
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0x4];
    s32 *kind;
    u8 pad1C[0xC8];
    u16 team;
    u8 padE6[0x8E];
    s32 active;
    u8 pad178[0x170];
} Object;

typedef struct {
    u8 pad0[0x138];
    Object *objects;
    u8 pad13C[0x4];
    s32 count;
} World;

/* Returns the nearest other object matching the optional team, kind and active filters, by squared distance. */
Object *func_8028CABC(World *world, Object *self, s32 team, s32 kind, s32 activeOnly) {
    s32 i;
    Object *obj;
    Object *best;
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
