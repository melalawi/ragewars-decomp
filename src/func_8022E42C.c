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

typedef struct func_8022E42C_S1 func_8022E42C_S1;
typedef union func_8022E42C_S1_U8 { f32 v0; Vec3 v1; } func_8022E42C_S1_U8;
struct func_8022E42C_S1 {
    char pad0[0x8];
    func_8022E42C_S1_U8 unk8;
    char pad14[0x70 - 0x14];
    f32 unk70;
};

s32 func_8022E42C(InstanceHdr *arg0, Vec3 *arg1) {
    InstanceHdr saved;
    s32 moved;

    saved = *arg0;
    ((func_8022E42C_S1 *)(arg0))->unk8.v1.y += func_8024D274(arg0) * D_800C7F00[1];
    ((func_8022E42C_S1 *)(arg0))->unk8.v1.y += ((func_8022E42C_S1 *)(arg0))->unk70;
    func_80243A80(arg0, *arg1, &D_80104030);

    moved = (arg1->x != ((func_8022E42C_S1 *)(arg0))->unk8.v0) ||
            (arg1->y != ((func_8022E42C_S1 *)(arg0))->unk8.v1.y) ||
            (arg1->z != ((func_8022E42C_S1 *)(arg0))->unk8.v1.z);
    *arg1 = ((func_8022E42C_S1 *)(arg0))->unk8.v1;
    *arg0 = saved;

    return moved;
}
