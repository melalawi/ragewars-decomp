#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Actor Actor;

typedef struct Controller {
    u8 pad0[0x788];
    s32 state;
    u8 pad78C[8];
    Actor *owner;
} Controller;

struct Actor {
    u8 type;
    u8 pad1[7];
    Vec3 pos;
    s32 room;
    s32 *kind;
    u8 pad1C[0x54];
    f32 height;
    u8 pad74[0x70];
    u16 id;
    u8 padE6[0x1A];
    s32 flags100;
    u8 pad104[0xD4];
    Controller *controller;
    u8 pad1DC[0x104];
    s32 flags2E0;
};

typedef struct Location {
    Vec3 pos;
    s32 room;
} Location;

typedef struct Tracker {
    s32 flags;
    s32 active;
    u8 pad8[0x60];
    Actor *self;
    Vec3 offset;
    s32 unk78;
    u8 pad7C[4];
    Actor *anchor;
    u8 pad84[4];
    Actor *target;
    f32 angle;
    f32 height;
    s8 slot;
    u8 pad95[0x1B];
    Vec3 homePos;
    s32 homeRoom;
    u8 padC0[0xE];
    s8 team;
} Tracker;

typedef struct TrackResult {
    s32 kind;
    Actor *target;
    f32 range;
    Vec3 pos;
    Vec3 delta;
    f32 dist;
    Vec3 flatPos;
    Vec3 flatDelta;
    f32 flatDist;
} TrackResult;

#define MIN(a, b) ((a) < (b) ? (a) : (b))

extern s32 D_80120DE0;
extern s32 D_8013B290;
extern f32 D_800C725C;
extern f32 D_800C7260;
extern f32 D_800C7264;
extern f32 D_800C7268;

extern s32 func_80214624(Actor *arg0, Tracker *arg1, Actor *target);
extern Actor *func_802149C0(Actor *arg0, Tracker *arg1, s32 arg2, s32 arg3);
extern f32 func_80215868(Actor *arg0, Vec3 pos, Actor *target, f32 arg3);
extern f32 func_80216F44(Actor *arg0, Vec3 pos);
extern Location *func_80219408(s8 *slot);
extern f32 func_8024D274(Actor *arg0);
extern f32 func_8024D388(Actor *arg0);
extern f32 func_8024E454(Actor *arg0);
extern void func_8024E78C(Actor *arg0, Vec3 pos, Vec3 *outPos, s32 *outRoom, s32 arg4, s32 arg5);
extern f32 func_8024E7FC(Actor *arg0);
extern f32 func_80271B18(Vec3 *arg0);
extern void func_80271FA4(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_80271FD8(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_8027200C(Vec3 *result, Vec3 *vec, f32 scale);
extern void func_802720EC(Vec3 *arg0);
extern f32 func_802BB630(f32 angle);
extern f32 func_802BC200(f32 angle);
extern f32 func_802BC380(f32 value);

/* Places the goal beside kind-7 targets: pushed away from the anchor by both extents. */
static inline void func_80214DD4_place_beside(Actor *arg0, Actor *target, Actor *anchor, Vec3 *outPos, s32 *outRoom) {
    Vec3 dir;
    Vec3 goal;

    if (anchor != 0) {
        func_80271FD8(&dir, &target->pos, &anchor->pos);
        dir.y = 0.0f;
        func_802720EC(&dir);
    } else {
        dir.x = 0.0f;
        dir.y = 0.0f;
        dir.z = 0.0f;
    }
    func_8027200C(&dir, &dir, func_8024D388(target) + func_8024D388(arg0) + D_800C725C);
    func_80271FA4(&goal, &target->pos, &dir);
    func_8024E78C(target, goal, outPos, outRoom, 0, 0);
}

/** Picks what the tracker aims at (its target, itself, a slot or home point, or the actor) and
    fills out with the kind, target, reach, goal position and its offset from the actor, both in 3D
    and flattened to the ground plane. The third parameter is reused as the boost flag. */
void func_80214DD4(Actor *arg0, Tracker *arg1, s32 boost, TrackResult *out) {
    Vec3 pos;
    Vec3 probe;
    Vec3 away;
    Vec3 delta;
    s32 room;
    Actor *target;
    s32 kind;
    s32 mode;
    f32 range;
    f32 gap;
    f32 angle;
    f32 reach;
    Location *loc;

    boost = 0;  /* FAKEMATCH: reuses the third parameter as the boost flag; a separate local gives the right code but not the target register numbering. Owner-accepted 2026-09-28; clean draft 395/399. */
    if (*arg0->kind != 1) {
        mode = -1;
    }
    if (arg1->team == D_80120DE0) {
        if ((arg1->flags & 0x40000) && arg1->unk78 == 0) {
            if (func_80214624(arg0, arg1, arg1->target) == 0) {
                arg1->flags &= ~0x40000;
            }
        } else {
            arg1->target = func_802149C0(arg0, arg1, 0, 1);
        }
    }
    target = arg1->target;
    kind = 6;
    if (arg1->active != 0) {
        if (target == 0) {
            kind = 3;
            if (arg1->slot != 0) {
                kind = 4;
            }
        } else if (target == arg1->self) {
            kind = 2;
        } else if (*target->kind == 5) {
            kind = 5;
        } else if (target->id == 0x64F) {
            kind = 7;
        } else if (D_8013B290 != 0) {
            kind = 0;
        } else if (((target->flags100 & 0x300000) && target->controller->owner == arg0 &&
                    target->controller->state == 2) ||
                   ((arg0->flags2E0 & 2) && arg0->id != 0xCA)) {
            kind = 1;
        } else {
            kind = 0;
        }
    }
    if (target != 0) {
        if (kind == 7) {
            func_80214DD4_place_beside(arg0, target, arg1->anchor, &pos, &room);
        } else {
            pos = target->pos;
            room = target->room;
            if (mode == 1) {
                pos.y += target->height + func_8024D274(target) * D_800C7260;
            }
        }
        gap = func_8024D388(target) + func_8024D388(arg0);
        switch (kind) {
            case 2:
                gap += D_800C7264;
            default:
                boost = 1;
                break;
            case 5:
            case 7:
                boost = 1;
                gap = 0.0f;
                break;
        }
    } else {
        gap = func_8024D388(arg0);
        switch (kind) {
            case 4:
                loc = func_80219408(&arg1->slot);
                pos = loc->pos;
                gap = 0.0f;
                room = loc->room;
                if (arg1->slot == 2 || arg1->slot == kind) {
                    boost = 1;
                }
                break;
            case 3:
                pos = arg1->homePos;
                room = arg1->homeRoom;
                boost = 1;
                break;
            case 6:
                pos = arg0->pos;
                room = arg0->room;
                if (mode == 2) {
                    pos.y = func_8024E7FC(arg0);
                }
                break;
        }
    }
    func_80271FA4(&pos, &pos, &arg1->offset);
    if (gap > 0.0f) {
        func_80271FD8(&away, &arg0->pos, &pos);
        angle = func_80271B18(&away);
        pos.x -= gap * func_802BC200(angle);
        pos.z -= gap * func_802BB630(angle);
    }
    if (mode == 2) {
        pos.y = MIN(pos.y, func_8024E7FC(arg0));
    }
    if (boost) {
        reach = func_8024E454(arg0);
        probe.x = arg0->pos.x + reach * func_802BC200(arg1->angle);
        probe.y = arg1->height;
        probe.z = arg0->pos.z + reach * func_802BB630(arg1->angle);
        range = func_80215868(arg0, probe, target, D_800C7268);
        pos.y = arg1->height;
    } else {
        range = func_80216F44(arg0, pos);
    }
    func_80271FD8(&delta, &pos, &arg0->pos);
    out->kind = kind;
    out->target = target;
    out->range = range;
    out->pos = pos;
    out->delta = delta;
    out->dist = func_802BC380(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
    delta.y = 0.0f;
    pos.y = 0.0f;
    out->flatPos = pos;
    out->flatDelta = delta;
    out->flatDist = func_802BC380(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
}
