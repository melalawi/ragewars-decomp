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

typedef struct func_8023F42C_S1 func_8023F42C_S1;
typedef struct func_8023F42C_S2 func_8023F42C_S2;
struct func_8023F42C_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x40 - 0x14 - sizeof(f32)];
    Shape* unk40;
    char pad40[0x44 - 0x40 - sizeof(Shape*)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
};
struct func_8023F42C_S2 {
    char pad0[0x174];
    s32 unk174;
};

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

    shape = ((func_8023F42C_S1 *)(obj))->unk40;
    if (shape->enabled == 0 || shape == &D_80104170) {
        return;
    }
    table = &D_8011FE88;
    q = &query;
    radius = ((func_8023F42C_S1 *)(obj))->unkC;
    self = *(void **)obj;
    q->radius = radius;
    count = table->count;
    q->flag = shape->flags & 0x400;
    q->bottom = ((func_8023F42C_S1 *)(obj))->unk14;
    q->top = q->bottom + ((func_8023F42C_S1 *)(obj))->unk10;
    q->bottom1 = ((func_8023F42C_S1 *)(obj))->unk48 + q->bottom;
    q->top1 = ((func_8023F42C_S1 *)(obj))->unk48 + q->top;
    q->bottom2 = ((func_8023F42C_S1 *)(obj))->unk54 + q->bottom;
    q->top2 = ((func_8023F42C_S1 *)(obj))->unk54 + q->top;
    bound = ((func_8023F42C_S1 *)(obj))->unk50;
    if (!(bound <= ((func_8023F42C_S1 *)(obj))->unk44)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk44;
    }
    q->minX = bound - radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk50;
    if (!(((func_8023F42C_S1 *)(obj))->unk44 <= bound)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk44;
    }
    q->maxX = bound + radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk58;
    if (!(bound <= ((func_8023F42C_S1 *)(obj))->unk4C)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk4C;
    }
    q->minZ = bound - radius;
    bound = ((func_8023F42C_S1 *)(obj))->unk58;
    if (!(((func_8023F42C_S1 *)(obj))->unk4C <= bound)) {
        bound = ((func_8023F42C_S1 *)(obj))->unk4C;
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
            if ((shape->flags & 1) && ((func_8023F42C_S2 *)(entity))->unk174 == 0) {
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
