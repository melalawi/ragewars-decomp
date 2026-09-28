#include "basetypes.h"

typedef struct {
    s32 w[20];
} Instance8020CD74;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 w[7];
} CollisionInfo8020CD74;

extern f32 D_800C6E80[];
extern CollisionInfo8020CD74 D_80103FF0;
extern CollisionInfo8020CD74 D_80104050;
extern CollisionInfo8020CD74 D_80104070;
extern CollisionInfo8020CD74 D_801040D0;

extern s32 func_8024DED0(void *);
extern s32 func_8024DF4C(void *);
extern s32 func_8024DF90(void *);
extern s32 func_80243A80(Instance8020CD74 *, Vec3, CollisionInfo8020CD74 *);

s32 func_8020CD74(s32 **arg0, Instance8020CD74 *arg1, s32 arg2) {
    Vec3 position;
    CollisionInfo8020CD74 collision;
    Instance8020CD74 saved;
    s32 first_test;
    s32 result;
    s32 *table;
    void *entry;

    table = *arg0;
    entry = (u8 *)table + ((arg2 * table[0]) + 8);
    position = *(Vec3 *)entry;
    position.y += D_800C6E80[1];

    if ((*(u8 *)arg1 == 1) && (*(s32 *)((u8 *)arg1 + 0x100) & 0x300000)) {
        collision = D_801040D0;
    } else {
        first_test = func_8024DED0(arg1);
        if (func_8024DF4C(arg1) == 0) {
            if (first_test != 0) {
                collision = D_80104050;
            } else {
                collision = D_801040D0;
            }
        } else if (func_8024DF90(arg1) == 0) {
            collision = D_80104070;
        } else {
            collision = D_80103FF0;
        }
    }
    collision.w[0] = 0x4000;
    saved = *arg1;
    result = func_80243A80(arg1, position, &collision);
    *arg1 = saved;
    return result == 0;
}
