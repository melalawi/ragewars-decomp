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

typedef struct func_80216A6C_S1 func_80216A6C_S1;
typedef struct func_80216A6C_S2 func_80216A6C_S2;
typedef struct func_80216A6C_S3 func_80216A6C_S3;
struct func_80216A6C_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x70 - 0xC - sizeof(f32)];
    f32 unk70;
};
struct func_80216A6C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x70 - 0x8 - sizeof(Vec3)];
    f32 unk70;
};
struct func_80216A6C_S3 {
    char pad0[0x8];
    Vec3 unk8;
};

s32 func_80216A6C(InstanceHdr *arg0, void *unused, InstanceHdr *target) {
    InstanceHdr saved;
    Vec3 desired;
    f32 scale;

    saved = *arg0;
    scale = D_800C72BC;
    ((func_80216A6C_S1 *)(arg0))->unkC += func_8024D274(arg0) * scale;
    ((func_80216A6C_S1 *)(arg0))->unkC += ((func_80216A6C_S1 *)(arg0))->unk70;

    desired = ((func_80216A6C_S2 *)(target))->unk8;
    desired.y += func_8024D274(target) * scale;
    desired.y += ((func_80216A6C_S2 *)(target))->unk70;

    func_80244494(arg0, ((func_80216A6C_S3 *)(arg0))->unk8, desired, &D_80103FD0);
    *arg0 = saved;

    if (D_8010428C != 0 && (D_8010428C->flags & 2)) {
        return 1;
    }
    if (D_801042A4 != 0 && (D_801042A4->flags & 2)) {
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20FC_4 = 0.800000012f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72BC_4 = 0.800000012f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C246C_4 = 0.800000012f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24AC_4 = 0.800000012f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21CC_4 = 0.800000012f;
#endif
