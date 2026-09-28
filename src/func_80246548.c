#include "basetypes.h"

typedef struct {
    s32 w[20];
} InstanceHdr;

typedef struct {
    s32 w[3];
} Vec3;

typedef struct {
    s32 flags;
    u8 ground_behavior;
    u8 instance_behavior;
    u8 pad[2];
    s32 w[5];
} CollisionInfo;

typedef struct {
    s32 active0;
    u8 pad[0x98];
    s32 active9c;
} CollisionState;

extern CollisionState D_801041F0;
extern s32 func_80243A80(InstanceHdr *, Vec3, CollisionInfo *);

s32 func_80246548(InstanceHdr *arg0, Vec3 arg1, CollisionInfo *arg2) {
    InstanceHdr saved;
    CollisionInfo collision_info;
    s32 collisions;

    saved = *arg0;
    collision_info = *arg2;
    collision_info.ground_behavior = 0;
    collision_info.instance_behavior = 1;
    func_80243A80(arg0, arg1, &collision_info);
    *arg0 = saved;

    collisions = D_801041F0.active0 || D_801041F0.active9c;
    return !collisions;
}
