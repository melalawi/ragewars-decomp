#include "basetypes.h"

/* Spawns an effect for an actor through func_80280094: the rotation comes from the fixed direction D_801042C8 or the actor's own facing, and the spawn point is the actor's position, or when the actor carries a horizontal offset the negated offset turned by the actor's angle, carried through its parent transform when it has one, and added to the position; the flags passed are the given flags with the actor's bits 0x200006. Adapted from func_8027C324 with the offset reads as static inline getters and a stack state briefly made current in D_80103FCC. */

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Quat {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct ActorDef {
    s32 flags;
    char pad4[0x10];
    s32 fixed;
} ActorDef;

typedef struct Actor {
    char pad0[8];
    Vec3 position;
    char pad14[8];
    Vec3 facing;
    char pad28[0x34];
    s32 flags;
    char pad60[0xB8];
    ActorDef *def;
    char pad11C[0x10];
    void *owner;
    s32 unk130;
    s32 unk134;
    char pad138[0x48];
    f32 offsetX;
    f32 offsetY;
    s32 angle;
} Actor;

extern Vec3 D_801042C8;
extern char D_80121990;
extern void *D_80103FCC;
extern char D_801041F0;
extern void func_80271888(Quat *, Vec3 *);
extern void func_802737D0(f32 *matrix, s32 angle);
extern void func_80272908(void *matrix, Vec3 *in, Vec3 *out);
extern void *func_8027D950(Actor *actor, s32 index);
extern void func_80271FA4(Vec3 *out, Vec3 *a, Vec3 *b);
extern s32 func_80280094(void *, Actor *, void *, s32, s32, s32, Vec3, Quat, Vec3, s32, s32, s32);

static inline f32 offset_x(Actor *actor) {
    if (actor->def->fixed != 0) {
        return 0.0f;
    }
    return actor->offsetX;
}

static inline f32 offset_y(Actor *actor) {
    if (actor->def->fixed != 0) {
        return 0.0f;
    }
    return actor->offsetY;
}

void func_80279BB0(Actor *actor, s32 model, s32 arg2, s32 flags) {
    Quat rotation;
    Vec3 direction;
    Vec3 offset;
    Vec3 turned;
    Vec3 carried;
    Vec3 point;
    Vec3 moved;
    f32 matrix[16];
    char scratch[0x108];
    void *parent;

    if (actor->def->flags & 0x10) {
        direction = D_801042C8;
    } else {
        direction = actor->facing;
    }
    func_80271888(&rotation, &direction);
    if (offset_x(actor) == 0.0f && offset_y(actor) == 0.0f) {
        point = actor->position;
    } else {
        offset.x = -offset_x(actor);
        offset.y = -offset_y(actor);
        offset.z = 0.0f;
        func_802737D0(matrix, actor->angle);
        func_80272908(matrix, &offset, &turned);
        parent = func_8027D950(actor, 0);
        if (parent != 0) {
            func_80272908(parent, &turned, &carried);
        } else {
            carried = turned;
        }
        func_80271FA4(&moved, &carried, &actor->position);
        D_80103FCC = scratch;
        point = moved;
        D_80103FCC = &D_801041F0;
    }
    func_80280094(&D_80121990, actor, actor->owner, actor->unk130, actor->unk134, model,
                  direction, rotation, point, 0, arg2, flags | (actor->flags & 0x200006));
}
