#include "basetypes.h"

typedef struct {
    s32 w[20];
} InstanceHdr;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[8];
} CollisionInfo;

extern f32 D_800C8918;
extern char D_80103FD0;
extern f32 func_8024D274(InstanceHdr *);
extern s32 func_80243A80(InstanceHdr *, Vec3, CollisionInfo *);

s32 func_8024642C(InstanceHdr *arg0, InstanceHdr *arg1) {
    InstanceHdr saved;
    Vec3 desired;
    f32 scale;
    s32 collisions;

    saved = *arg0;
    scale = D_800C8918;
    *(f32 *)((char *)arg0 + 0xC) += func_8024D274(arg0) * scale;
    desired = *(Vec3 *)((char *)arg1 + 8);
    desired.y += func_8024D274(arg1) * scale;
    collisions = func_80243A80(arg0, desired, &D_80103FD0);
    *arg0 = saved;

    return collisions == 0;
}
