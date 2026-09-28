#include "basetypes.h"

/* Refreshes an attached actor's placement and returns its position and heading through optional pointers: an actor flagged 0x10000 of one of the bone-mounted types takes its position and heading from its parent's bone matrix (or just the parent's position when the parent has no skeleton) and clears its field 0x14, and an actor flagged 0x400000 places its local offset through its owner's transform (the owner's model matrix for owners flagged 0x300000, built through func_80226DAC when missing). */

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Model {
    char pad0[0x5DC];
    void *matrices;
} Model;

typedef struct Parent {
    char pad0[8];
    Vec3 position;
    char pad14[0x60];
    f32 transform[16];
    void *skeleton;
    char padB8[0x48];
    s32 flags;
    char pad104[0xD4];
    Model *model;
} Parent;

typedef struct Actor {
    char pad0[4];
    u16 type;
    char pad6[2];
    Vec3 position;
    s32 unk14;
    char pad18[4];
    Vec3 heading;
    char pad28[0x28];
    Vec3 offset;
    s32 flags;
    char pad60[0xCC];
    Parent *owner;
    char pad130[4];
    Parent *parent;
    char pad138[0x3C];
    Vec3 facing;
    char pad180[0x51];
    s8 bone;
} Actor;

extern void func_80270980(f32 *out, void *in);
extern void func_80272908(void *matrix, Vec3 *in, Vec3 *out);
extern void func_80272BA8(void *matrix, Vec3 *in, Vec3 *out);
extern void func_80226DAC(Model *model, f32 *out);

void func_8027DAA4(Actor *actor, Vec3 *outPosition, Vec3 *outHeading) {
    f32 matrix[16];
    Vec3 position;
    Vec3 heading;
    f32 built[16];
    Parent *parent;
    Parent *owner;
    void *transform;
    void *skeleton;

    position = actor->position;
    heading = actor->heading;
    if (actor->flags & 0x10000) {
        parent = actor->parent;
        switch (actor->type) {
            case 2:
            case 0xB:
            case 0xF:
            case 0x2D:
            case 0x4F:
            case 0x56:
            case 0x126:
            case 0x12A:
            case 0x132:
            case 0x41E:
                skeleton = parent->skeleton;
                if (skeleton != 0) {
                    func_80270980(matrix, (char *)skeleton + actor->bone * 64);
                    func_80272908(matrix, &actor->offset, &position);
                    func_80272BA8(matrix, &actor->heading, &heading);
                    actor->position = position;
                    actor->facing = heading;
                } else {
                    position = parent->position;
                    actor->position = position;
                }
                break;
        }
        actor->unk14 = 0;
    }
    if (actor->flags & 0x400000) {
        owner = actor->owner;
        if (owner->flags & 0x300000) {
            if (owner->model->matrices != 0) {
                transform = (char *)owner->model->matrices + 0x160;
            } else {
                func_80226DAC(owner->model, built);
                transform = built;
            }
        } else {
            transform = owner->transform;
        }
        func_80272908(transform, &actor->offset, &position);
        actor->position = position;
    }
    if (outPosition != 0) {
        *outPosition = position;
    }
    if (outHeading != 0) {
        *outHeading = heading;
    }
}
