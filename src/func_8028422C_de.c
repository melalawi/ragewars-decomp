#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Spawns a sequence of effects along an object's motion segment. */








extern char D_8011D8D0;

extern void func_80271818_de(struct Shape_typemap_165 *, Triple *);
extern void func_80271F68_de(Triple *, Triple *, Triple *);
extern void func_80271F9C_de(Triple *, Triple *, f32);
extern void func_80271F34_de(Triple *, Triple *, Triple *);
extern s32 func_802800C0_de(void *, void *, void *, s32, s32, s32,
                         Triple, struct Shape_typemap_165, Triple, s32, s32, s32);
void func_8028422C_de(TrailActor *actor) {
        struct Shape_typemap_165 rotation;
        int temp;
        Triple delta;
        Triple step;
        unsigned int actor_2;
        Triple position;
        f32 divisor;
        s32 i;
        s8 count;
        void *system;
        count = actor->node->state->count;
        if (count > 0) {
                position = actor->position;
                func_80271818_de(&rotation, &position);
                func_80271F68_de(&delta, &actor->origin, &actor->end);
                system = &D_8011D8D0;
                i = 1;
                temp = i <= count;
                if (temp) {
                        divisor = (f32) count + (&D_800C4E88_de)[1];
                        do {
    do { func_80271F9C_de(&step, &delta, (f32) i / divisor); func_80271F34_de(&step, &step, &actor->end); actor_2 = actor->model; func_802800C0_de(system, actor, actor->owner, actor->property, actor->type, actor_2, position, rotation, step, 0, -1, 0x20E001); i++; } while (0);
                        } while (count >= i);
                }
        }
}
