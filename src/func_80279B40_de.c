#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "types.h"

/* Spawns an effect for an actor through func_802800C0_de: the rotation comes from the fixed direction D_801042C8 or the actor's own facing, and the spawn point is the actor's position, or when the actor carries a horizontal offset the negated offset turned by the actor's angle, carried through its parent transform when it has one, and added to the position; the flags passed are the given flags with the actor's bits 0x200006. Adapted from func_8027C274_de with the offset reads as static inline getters and a stack state briefly made current in D_80103FCC. */









extern Vec3 D_801002C8;
extern char D_8011D8D0;
extern void *D_800FFFCC;
extern char D_801001F0;
extern void func_80271818_de(Vector4f *, Vec3 *);
extern void func_80273760_de(f32 *matrix, s32 angle);
extern void func_80272898_de(void *matrix, Vec3 *in, Vec3 *out);
extern void *func_8027D97C_de(Actor_func_80279B40_de *actor, s32 index);
extern void func_80271F34_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern s32 func_802800C0_de(void *, Actor_func_80279B40_de *, void *, s32, s32, s32, Vec3, Vector4f, Vec3, s32, s32, s32);

static inline f32 offset_x(Actor_func_80279B40_de *actor) {
    if (actor->def->unk14 != 0) {
        return 0.0f;
    }
    return actor->offsetX;
}

static inline f32 offset_y(Actor_func_80279B40_de *actor) {
    if (actor->def->unk14 != 0) {
        return 0.0f;
    }
    return actor->offsetY;
}

void func_80279B40_de(Actor_func_80279B40_de *actor, s32 model, s32 arg2, s32 flags) {
    Vector4f rotation;
    Vec3 direction;
    Vec3 offset;
    Vec3 turned;
    Vec3 carried;
    Vec3 point;
    Vec3 moved;
    f32 matrix[16];
    char scratch[0x108];
    void *parent;

    if (actor->def->unk0 & 0x10) {
        direction = D_801002C8;
    } else {
        direction = actor->facing;
    }
    func_80271818_de(&rotation, &direction);
    if (offset_x(actor) == 0.0f && offset_y(actor) == 0.0f) {
        point = actor->position;
    } else {
        offset.x = -offset_x(actor);
        offset.y = -offset_y(actor);
        offset.z = 0.0f;
        func_80273760_de(matrix, actor->angle);
        func_80272898_de(matrix, &offset, &turned);
        parent = func_8027D97C_de(actor, 0);
        if (parent != 0) {
            func_80272898_de(parent, &turned, &carried);
        } else {
            carried = turned;
        }
        func_80271F34_de(&moved, &carried, &actor->position);
        D_800FFFCC = scratch;
        point = moved;
        D_800FFFCC = &D_801001F0;
    }
    func_802800C0_de(&D_8011D8D0, actor, actor->owner, actor->unk130, actor->unk134, model,
                  direction, rotation, point, 0, arg2, flags | (actor->flags & 0x200006));
}
