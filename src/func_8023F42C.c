/* Queries the registered entities an object may collide with: when the object's shape is enabled and is
 * not the null shape, a query holds the object's radius, its vertical span and that span offset by the
 * shape heights at 0x48 and 0x54, its horizontal bounds widened by the radius and the shape's 0x400 flag;
 * then func_8023EEF0 is run for every entity other than the object itself, except type 1 entities without
 * a body at 0x174 when the shape is flagged 1 and type 3 entities when the shape is not flagged 0x20. */
#include "basetypes.h"

typedef struct {
    f32 radius;
    f32 bottom;
    f32 top;
    f32 top1;
    f32 bottom1;
    f32 top2;
    f32 bottom2;
    f32 minX;
    f32 minZ;
    f32 maxX;
    f32 maxZ;
    s32 flag;
} Query;

typedef struct {
    s32 flags;
    s8 enabled;
} Shape;

typedef struct {
    char pad0[0x144];
    u8 *entities[0x200];
    s32 count;
} EntityTable;

extern Shape D_80104170;
extern EntityTable D_8011FE88;
extern void func_8023EEF0(void *, Query *, u8 *);

void func_8023F42C(char *obj) {
    Query query;
    Query *q;
    Shape *shape;
    void *self;
    s32 count;
    s32 i;
    u8 *entity;
    EntityTable *table;
    f32 radius;
    f32 bound;

    shape = *(Shape **)(obj + 0x40);
    if (shape->enabled == 0 || shape == &D_80104170) {
        return;
    }
    table = &D_8011FE88;
    q = &query;
    radius = *(f32 *)(obj + 0xC);
    self = *(void **)obj;
    q->radius = radius;
    count = table->count;
    q->flag = shape->flags & 0x400;
    q->bottom = *(f32 *)(obj + 0x14);
    q->top = q->bottom + *(f32 *)(obj + 0x10);
    q->bottom1 = *(f32 *)(obj + 0x48) + q->bottom;
    q->top1 = *(f32 *)(obj + 0x48) + q->top;
    q->bottom2 = *(f32 *)(obj + 0x54) + q->bottom;
    q->top2 = *(f32 *)(obj + 0x54) + q->top;
    bound = *(f32 *)(obj + 0x50);
    if (!(bound <= *(f32 *)(obj + 0x44))) {
        bound = *(f32 *)(obj + 0x44);
    }
    q->minX = bound - radius;
    bound = *(f32 *)(obj + 0x50);
    if (!(*(f32 *)(obj + 0x44) <= bound)) {
        bound = *(f32 *)(obj + 0x44);
    }
    q->maxX = bound + radius;
    bound = *(f32 *)(obj + 0x58);
    if (!(bound <= *(f32 *)(obj + 0x4C))) {
        bound = *(f32 *)(obj + 0x4C);
    }
    q->minZ = bound - radius;
    bound = *(f32 *)(obj + 0x58);
    if (!(*(f32 *)(obj + 0x4C) <= bound)) {
        bound = *(f32 *)(obj + 0x4C);
    }
    q->maxZ = bound + radius;
    for (i = 0; i < count; i++) {
        entity = table->entities[i];
        if (entity == self) {
            continue;
        }
        switch (*entity) {
        case 2:
            break;
        case 1:
            if ((shape->flags & 1) && *(s32 *)(entity + 0x174) == 0) {
                continue;
            }
            break;
        case 3:
            if (!(shape->flags & 0x20)) {
                continue;
            }
            break;
        }
        func_8023EEF0(obj, &query, entity);
    }
}
