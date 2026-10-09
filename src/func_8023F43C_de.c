#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8023EEF0.h"
#include "types.h"

typedef struct Query Query;
/* Queries the registered entities an object may collide with: when the object's shape is enabled and is
 * not the null shape, a query holds the object's radius, its vertical span and that span offset by the
 * shape heights at 0x48 and 0x54, its horizontal bounds widened by the radius and the shape's 0x400 flag;
 * then func_8023EF00_de is run for every entity other than the object itself, except type 1 entities without
 * a body at 0x174 when the shape is flagged 1 and type 3 entities when the shape is not flagged 0x20. */







extern Shape D_80100170;
extern EntityTable D_8011FE88;
extern void func_8023EF00_de(void *, Query *, u8 *);






void func_8023F43C_de(char *obj) {
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
    if (shape->enabled == 0 || shape == &D_80100170) {
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
        func_8023EF00_de(obj, &query, entity);
    }
}

void func_8023F644_de(void *arg0, f32 *arg1)
{
  char *new_var;
  f32 temp;
  f32 value;
  s32 *new_var2;
  f32 bound;
  new_var2 = ((func_8023F634_S1 *)(arg0))->unk40;
  arg1[0] = ((func_8023F634_S1 *)(arg0))->unkC;
  ((func_80205314_S2 *)(arg1))->unk2C = (*new_var2) & 0x400;
  temp = ((func_8023F634_S1 *)(arg0))->unk14;
  arg1[1] = temp;
  new_var = &((func_8023F634_S1 *)(arg0))->unk10;
  arg1[2] = temp + (*((f32 *) new_var));
  arg1[4] = (((func_8023F634_S1 *)(arg0))->unk48) + arg1[1];
  arg1[3] = (((func_8023F634_S1 *)(arg0))->unk48) + arg1[2];
  arg1[6] = (((func_8023F634_S1 *)(arg0))->unk54) + arg1[1];
  arg1[5] = (((func_8023F634_S1 *)(arg0))->unk54) + arg1[2];
  value = ((func_8023F634_S1 *)(arg0))->unk50;
  bound = ((func_8023F634_S1 *)(arg0))->unk44;
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[7] = value - arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk50;
  bound = ((func_8023F634_S1 *)(arg0))->unk44;
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[9] = value + arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk58;
  bound = ((func_8023F634_S1 *)(arg0))->unk4C;
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[8] = value - arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk58;
  bound = ((func_8023F634_S1 *)(arg0))->unk4C;
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[10] = value + arg1[0];
}
