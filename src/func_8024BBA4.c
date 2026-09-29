#include "basetypes.h"

/* Moves an actor toward a point given relative to it: the offset is turned by the actor's facing and added to its position (or, for a mirrored actor with a parent, negated in x and z and transformed by the parent's matrix at 0x160), then passed to func_8024E78C with both final flags set. */

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

extern void func_80272908(void *matrix, Vec3 *in, Vec3 *out);
extern void func_8024BC84(Vec3 *out, void *actor, Vec3 offset);
extern void func_80271FA4(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8024E78C(void *actor, Vec3 target, void *arg4, s32 *arg5, s32 arg6, s32 arg7);

typedef struct func_8024BBA4_S1 func_8024BBA4_S1;
struct func_8024BBA4_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x100 - 0x8 - sizeof(Vec3)];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};

void func_8024BBA4(char *actor, Vec3 offset, void *arg4, s32 *arg5)
{
    Vec3 turned;
    Vec3 target;

    if (((func_8024BBA4_S1 *)(actor))->unk100 & 0x300000) {
        char *parent;

        offset.x = -offset.x;
        offset.z = -offset.z;
        parent = *(char **)(((func_8024BBA4_S1 *)(actor))->unk1D8 + 0x5DC);
        if (parent != 0) {
            func_80272908(parent + 0x160, &offset, &target);
        } else {
            func_8024BC84(&turned, actor, offset);
            func_80271FA4(&target, &((func_8024BBA4_S1 *)(actor))->unk8, &turned);
        }
    } else {
        func_8024BC84(&turned, actor, offset);
        func_80271FA4(&target, &((func_8024BBA4_S1 *)(actor))->unk8, &turned);
    }
    func_8024E78C(actor, target, arg4, arg5, 1, 1);
}
