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

typedef struct {
    char pad0[0x24];
    s32 field24;
    char pad28[0x100];
    Vec3 position128;
} Arg1;

extern CollisionInfo D_80104030;
extern InstanceHdr *func_802392DC(Arg1 *arg0);
extern s32 func_80243A80(InstanceHdr *, Vec3, CollisionInfo *);

s32 func_80284C1C(InstanceHdr *arg0, Arg1 *arg1) {
    InstanceHdr saved;
    InstanceHdr *instance;
    s32 collisions;

    instance = func_802392DC(arg1);
    if (instance != 0 && arg1->field24 == 0) {
        saved = *instance;
        *(Vec3 *)&instance->w[2] = arg1->position128;
        collisions = func_80243A80(instance, *(Vec3 *)&arg0->w[2], &D_80104030);
        *instance = saved;
    } else {
        saved = *arg0;
        *(Vec3 *)&saved.w[2] = arg1->position128;
        collisions = func_80243A80(&saved, *(Vec3 *)&arg0->w[2], &D_80104030);
    }
    return collisions == 0;
}
