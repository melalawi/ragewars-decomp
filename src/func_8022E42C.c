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

extern f32 D_800C7F00[];
extern CollisionInfo D_80104030;
extern f32 func_8024D274(InstanceHdr *);
extern s32 func_80243A80(InstanceHdr *, Vec3, CollisionInfo *);

s32 func_8022E42C(InstanceHdr *arg0, Vec3 *arg1) {
    InstanceHdr saved;
    s32 moved;

    saved = *arg0;
    *(f32 *)((char *)arg0 + 0xC) += func_8024D274(arg0) * D_800C7F00[1];
    *(f32 *)((char *)arg0 + 0xC) += *(f32 *)((char *)arg0 + 0x70);
    func_80243A80(arg0, *arg1, &D_80104030);

    moved = (arg1->x != *(f32 *)((char *)arg0 + 8)) ||
            (arg1->y != *(f32 *)((char *)arg0 + 0xC)) ||
            (arg1->z != *(f32 *)((char *)arg0 + 0x10));
    *arg1 = *(Vec3 *)((char *)arg0 + 8);
    *arg0 = saved;

    return moved;
}
