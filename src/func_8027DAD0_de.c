#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"

/* Refreshes an attached actor's placement and returns its position and heading through optional pointers: an actor flagged 0x10000 of one of the bone-mounted types takes its position and heading from its parent's bone matrix (or just the parent's position when the parent has no skeleton) and clears its field 0x14, and an actor flagged 0x400000 places its local offset through its owner's transform (the owner's model matrix for owners flagged 0x300000, built through func_80226DD0_de when missing). */









extern void func_80270910_de(f32 *out, void *in);
extern void func_80272898_de(void *matrix, Vec3 *in, Vec3 *out);
extern void func_80272B38_de(void *matrix, Vec3 *in, Vec3 *out);
extern void func_80226DD0_de(func_80228774_S5 *model, f32 *out);




void func_8027DAD0_de(Actor_func_8027DAD0_de *actor, Vec3 *outPosition, Vec3 *outHeading) {
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
                    func_80270910_de(matrix, (char *)skeleton + actor->bone * 64);
                    func_80272898_de(matrix, &actor->offset, &position);
                    func_80272B38_de(matrix, &actor->heading, &heading);
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
            if (owner->model->unk5DC != 0) {
                transform = &((func_8027DAA4_S1 *)(owner->model->unk5DC))->unk160;
            } else {
                func_80226DD0_de(owner->model, built);
                transform = built;
            }
        } else {
            transform = owner->transform;
        }
        func_80272898_de(transform, &actor->offset, &position);
        actor->position = position;
    }
    if (outPosition != 0) {
        *outPosition = position;
    }
    if (outHeading != 0) {
        *outHeading = heading;
    }
}
