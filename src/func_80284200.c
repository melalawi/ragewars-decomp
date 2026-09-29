/* Spawns a sequence of effects along an object's motion segment. */
#include "basetypes.h"
typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
typedef struct TrailNode TrailNode;
typedef struct TrailState TrailState;
typedef struct TrailActor TrailActor;
struct TrailState { char pad0[0xC]; s8 count; };
struct TrailNode { char pad0[0x38]; TrailState *state; };
struct TrailActor {
    char pad0[4];
    u16 model;
    char pad6[2];
    Triple origin;
    char pad14[8];
    Triple position;
    char pad28[0x118 - 0x28];
    TrailNode *node;
    char pad11C[0x12C - 0x11C];
    void *owner;
    s32 property;
    s32 type;
    char pad138[0x168 - 0x138];
    Triple end;
};
extern char D_80121990;
extern f32 D_800C9F78;
extern void func_80271888(Quad *, Triple *);
extern void func_80271FD8(Triple *, Triple *, Triple *);
extern void func_8027200C(Triple *, Triple *, f32);
extern void func_80271FA4(Triple *, Triple *, Triple *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32,
                         Triple, Quad, Triple, s32, s32, s32);
void func_80284200(TrailActor *actor) {
        Quad rotation;
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
                func_80271888(&rotation, &position);
                func_80271FD8(&delta, &actor->origin, &actor->end);
                system = &D_80121990;
                i = 1;
                temp = i <= count;
                if (temp) {
                        divisor = (f32) count + (&D_800C9F78)[1];
                        do {
    do { func_8027200C(&step, &delta, (f32) i / divisor); func_80271FA4(&step, &step, &actor->end); actor_2 = actor->model; func_80280094(system, actor, actor->owner, actor->property, actor->type, actor_2, position, rotation, step, 0, -1, 0x20E001); i++; } while (0);
                        } while (count >= i);
                }
        }
}
