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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4768_4 = 1.0f;
const float unbake_rodata_800C476C_4 = (-1.0f);
const float unbake_rodata_800C4770_4 = 1.57079637f;
const float unbake_rodata_800C4774_4 = 1.0f;
const float unbake_rodata_800C4778_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9928_4 = 1.0f;
const float unbake_rodata_800C992C_4 = (-1.0f);
const float unbake_rodata_800C9930_4 = 1.57079637f;
const float unbake_rodata_800C9934_4 = 1.0f;
const float unbake_rodata_800C9938_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C45A0_4 = 0.25f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4520_8 = 4294967296.0;
const double unbake_rodata_800C4528_8 = 4294967296.0;
const double unbake_rodata_800C4530_8 = 4294967296.0;
const double unbake_rodata_800C4538_8 = 4294967296.0;
const double unbake_rodata_800C4540_8 = 4294967296.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46A0_4 = 80.0f;
const float unbake_rodata_800C46A4_4 = 160.0f;
#endif
