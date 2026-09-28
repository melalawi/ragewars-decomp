#include "basetypes.h"

typedef struct { s32 w[20]; } InstanceHdr;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { s32 w[8]; } CollisionInfo;

extern CollisionInfo D_80104030;
extern InstanceHdr *D_801041F0;
extern f32 func_8024D274(InstanceHdr *arg0);
extern s32 func_80244494(InstanceHdr *arg0, Vec3 current, Vec3 desired, CollisionInfo *arg3);

s32 func_80216BF4(InstanceHdr *arg0, void *unused, InstanceHdr *target) {
    InstanceHdr saved;
    Vec3 desired;
    s32 collisions;

    saved = *arg0;
    *(f32 *)((char *)arg0 + 0xC) += func_8024D274(arg0);
    *(f32 *)((char *)arg0 + 0xC) += *(f32 *)((char *)target + 0x70);

    desired = *(Vec3 *)((char *)target + 8);
    desired.y += func_8024D274(target);
    desired.y += *(f32 *)((char *)target + 0x70);

    collisions = func_80244494(arg0, *(Vec3 *)((char *)arg0 + 8), desired, &D_80104030);
    if (D_801041F0 == target)
        collisions = 0;

    *arg0 = saved;
    return collisions;
}
