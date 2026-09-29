#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    char pad0[0x92];
    u8 team;
} Slot;

typedef struct Obj {
    char pad0[8];
    Vec3 pos;
    char pad14[0x100 - 0x14];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    struct Obj *owner;
    char pad1DC[0x5D8 - 0x1DC];
    Slot *slot;
    char pad5DC[0x5E4 - 0x5DC];
    s32 active;
    char pad5E8[0x122C - 0x5E8];
    s32 status;
} Obj;

typedef struct {
    Obj *self;
    char pad4[0x3C - 4];
    Obj *route[10];
    Obj *target;
    char pad68[0x94 - 0x68];
    s32 routeDist[10];
    char padBC[0x21C - 0xBC];
    s32 mode;
    char pad220[0x258 - 0x220];
    Vec3 aim;
    char pad264[0x28C - 0x264];
    Obj *flagged;
} Brain;

extern s32 D_801468C4;
extern f32 D_800C7000;

extern void *func_8020993C(Brain *brain);
extern f32 func_80272768(void *from, Vec3 *to);
extern s32 func_80209A94(Brain *brain);
extern s32 func_8020F93C(Brain *brain);
extern s32 func_8020F8F0(Brain *brain);
extern s32 func_8020F984(Brain *brain);

/* Chooses an AI rider's target: drops the current one when inactive, shielded (status 0x20) or on its own team, measures it and any flagged object, then keeps it or switches to the flagged object or a route target, and aims at the chosen target; returns 1. */
s32 func_8020F6C0(Brain *brain) {
    void *from;
    Obj *current;
    Obj *flag;
    f32 currentDist;
    f32 flagDist;
    s32 route;

    from = func_8020993C(brain);
    if (brain->target != 0) {
        current = brain->target->owner;
        if (current->active == 0) {
            brain->target = 0;
        }
        if (current->status & 0x20) {
            brain->target = 0;
        }
        if (D_801468C4 != 0 && brain->self->slot->team == current->slot->team) {
            brain->target = 0;
        }
    }
    if (brain->target != 0) {
        current = brain->target->owner;
        currentDist = func_80272768(from, &current->pos);
    } else {
        current = 0;
        currentDist = 0.0f;
    }
    if (brain->flagged != 0 && (brain->flagged->flags & 0x300000)) {
        flag = brain->flagged->owner;
        flagDist = func_80272768(from, &flag->pos);
    } else {
        flag = 0;
        flagDist = 0.0f;
    }
    if (func_80209A94(brain) == 0 || current == 0) {
        if (func_8020F93C(brain) == 0) {
            brain->target = 0;
            return 1;
        }
        if (flag != 0 && func_8020F8F0(brain) != 0) {
            brain->target = flag;
            brain->aim.x = brain->target->pos.x;
            brain->aim.y = brain->target->pos.y;
            brain->aim.z = brain->target->pos.z;
            return 1;
        }
        brain->target = brain->route[func_8020F984(brain)];
        brain->aim.x = brain->target->pos.x;
        brain->aim.y = brain->target->pos.y;
        brain->aim.z = brain->target->pos.z;
        return 1;
    }
    if (flag != 0 && flagDist <= currentDist) {
        brain->target = flag;
        brain->aim.x = brain->target->pos.x;
        brain->aim.y = brain->target->pos.y;
        brain->aim.z = brain->target->pos.z;
        return 1;
    }
    route = func_8020F984(brain);
    if (route != -1 && brain->routeDist[route] < currentDist) {
        brain->target = brain->route[route];
        brain->aim.x = brain->target->pos.x;
        brain->aim.y = brain->target->pos.y;
        brain->aim.z = brain->target->pos.z;
        return 1;
    }
    if (brain->mode == 1 && D_800C7000 < currentDist) {
        brain->target = 0;
        return 1;
    }
    brain->aim.x = brain->target->pos.x;
    brain->aim.y = brain->target->pos.y;
    brain->aim.z = brain->target->pos.z;
    return 1;
}
