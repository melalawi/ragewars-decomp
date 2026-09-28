#include "basetypes.h"

typedef struct { s32 w[20]; } InstanceHdr;
typedef struct { f32 x, y, z; } Vec3;
typedef struct { s32 w[8]; } CollisionInfo;
typedef struct { u16 value; u16 flags; } StateFlags;

extern f32 D_800C72BC;
extern CollisionInfo D_80103FD0;
extern StateFlags *D_8010428C;
extern StateFlags *D_801042A4;
extern f32 func_8024D274(InstanceHdr *);
extern s32 func_80244494(InstanceHdr *arg0, Vec3 current, Vec3 desired, CollisionInfo *arg3);

s32 func_80216A6C(InstanceHdr *arg0, void *unused, InstanceHdr *target) {
    InstanceHdr saved;
    Vec3 desired;
    f32 scale;

    saved = *arg0;
    scale = D_800C72BC;
    *(f32 *)((char *)arg0 + 0xC) += func_8024D274(arg0) * scale;
    *(f32 *)((char *)arg0 + 0xC) += *(f32 *)((char *)arg0 + 0x70);

    desired = *(Vec3 *)((char *)target + 8);
    desired.y += func_8024D274(target) * scale;
    desired.y += *(f32 *)((char *)target + 0x70);

    func_80244494(arg0, *(Vec3 *)((char *)arg0 + 8), desired, &D_80103FD0);
    *arg0 = saved;

    if (D_8010428C != 0 && (D_8010428C->flags & 2)) {
        return 1;
    }
    if (D_801042A4 != 0 && (D_801042A4->flags & 2)) {
        return 1;
    }
    return 0;
}
