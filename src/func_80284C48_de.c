#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;









extern CollisionInfo D_80100030;
extern Instance8020CD74 *func_802392EC_de(Arg1 *arg0);
extern s32 func_80243A90_de(Instance8020CD74 *, Vec3, CollisionInfo *);

s32 func_80284C48_de(Instance8020CD74 *arg0, Arg1 *arg1) {
    Instance8020CD74 saved;
    Instance8020CD74 *instance;
    s32 collisions;

    instance = func_802392EC_de(arg1);
    if (instance != 0 && arg1->field24 == 0) {
        saved = *instance;
        *(Vec3 *)&instance->w[2] = arg1->position128;
        collisions = func_80243A90_de(instance, *(Vec3 *)&arg0->w[2], &D_80100030);
        *instance = saved;
    } else {
        saved = *arg0;
        *(Vec3 *)&saved.w[2] = arg1->position128;
        collisions = func_80243A90_de(&saved, *(Vec3 *)&arg0->w[2], &D_80100030);
    }
    return collisions == 0;
}
