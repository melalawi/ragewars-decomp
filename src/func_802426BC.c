#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    s32 word0, word4, word8, wordC, word10;
    u8 pad14[0x40];
    void *input;
    s32 index;
    u8 pad5C[0x80];
} Query;
typedef struct {
    u8 pad00[0x3C];
    s32 flags;
    u8 pad40[0x70];
    Query saved_query;
} Actor;
typedef struct {
    u8 kind;
    u8 pad01[7];
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0xC];
    f32 floor;
    u8 pad24[0x10];
    void *owner;
    s32 flags38;
    u8 pad3C[0xC4];
    s32 flags100;
} Input;

extern f32 func_8024D388(void *);
extern f32 func_8024E454(Input *);
extern f32 func_8024D274(Input *);
extern f32 func_8024E410(void *);
extern f32 func_80241718(Query *, f32, f32);
extern s32 func_8024490C(Input *, Vec3, Vec3, void *, f32, f32, f32, f32);
extern void *D_80103FCC;
extern char D_801040F0;
extern f32 D_800C8850;

void func_802426BC(Actor *actor, void *owner, Input *input, Query *query) {
    u8 collision[0x108];
    Vec3 next;
    f32 hit_y;
    f32 extent0;
    f32 extent1;
    f32 extent2;
    f32 extent3;
    void *saved_collision;

    saved_collision = D_80103FCC;
    D_80103FCC = collision;
    hit_y = func_80241718(query, input->x, input->z);
    input->owner = owner;
    extent0 = func_8024E454(input);
    extent1 = func_8024D388(input);
    extent2 = func_8024D274(input);
    extent3 = func_8024E410(input);
    next.x = input->x;
    next.y = hit_y + D_800C8850;
    next.z = input->z;
    if (func_8024490C(input, *(Vec3 *)&input->x, next, &D_801040F0,
                      extent0, extent1, extent2, extent3)) {
        actor->saved_query = *query;
        actor->flags |= 8;
        input->flags38 |= 0x10;
    } else {
        input->y = next.y;
        if (input->floor < 0.0f) input->floor = 0.0f;
        {
            s32 flags = actor->flags;
            actor->flags = flags | 0x20;
            if (input->kind == 1 && (input->flags100 & 0x300000))
                actor->flags = flags | 0x60;
        }
        input->flags38 = (input->flags38 & ~3) | 2;
    }
    D_80103FCC = saved_collision;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3690_4 = 0.40959999f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8850_4 = 0.40959999f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A10_4 = 0.40959999f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A50_4 = 0.40959999f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3760_4 = 0.40959999f;
#endif
