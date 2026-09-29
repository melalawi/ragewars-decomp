#include "basetypes.h"

typedef struct { s32 w[20]; } InstanceHdr;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { s32 w[8]; } CollisionInfo;

extern CollisionInfo D_80104030;
extern InstanceHdr *D_801041F0;
extern f32 func_8024D274(InstanceHdr *arg0);
extern s32 func_80244494(InstanceHdr *arg0, Vec3 current, Vec3 desired, CollisionInfo *arg3);

typedef struct func_80216BF4_S1 func_80216BF4_S1;
typedef struct func_80216BF4_S2 func_80216BF4_S2;
typedef struct func_80216BF4_S3 func_80216BF4_S3;
struct func_80216BF4_S1 {
    char pad0[0xC];
    f32 unkC;
};
struct func_80216BF4_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x70 - 0x8 - sizeof(Vec3)];
    f32 unk70;
};
struct func_80216BF4_S3 {
    char pad0[0x8];
    Vec3 unk8;
};

s32 func_80216BF4(InstanceHdr *arg0, void *unused, InstanceHdr *target) {
    InstanceHdr saved;
    Vec3 desired;
    s32 collisions;

    saved = *arg0;
    ((func_80216BF4_S1 *)(arg0))->unkC += func_8024D274(arg0);
    ((func_80216BF4_S1 *)(arg0))->unkC += ((func_80216BF4_S2 *)(target))->unk70;

    desired = ((func_80216BF4_S2 *)(target))->unk8;
    desired.y += func_8024D274(target);
    desired.y += ((func_80216BF4_S2 *)(target))->unk70;

    collisions = func_80244494(arg0, ((func_80216BF4_S3 *)(arg0))->unk8, desired, &D_80104030);
    if (D_801041F0 == target)
        collisions = 0;

    *arg0 = saved;
    return collisions;
}
