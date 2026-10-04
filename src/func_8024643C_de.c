#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;








extern char D_800FFFD0;
extern f32 func_8024D284_de(Instance8020CD74 *);
extern s32 func_80243A90_de(Instance8020CD74 *, Vec3, CollisionInfo *);






s32 func_8024643C_de(Instance8020CD74 *arg0, Instance8020CD74 *arg1) {
    Instance8020CD74 saved;
    Vec3 desired;
    f32 scale;
    s32 collisions;

    saved = *arg0;
    scale = D_800C3828_de;
    ((func_80216BF4_S1 *)(arg0))->unkC += func_8024D284_de(arg0) * scale;
    desired = ((Player *)(arg1))->pos;
    desired.y += func_8024D284_de(arg1) * scale;
    collisions = func_80243A90_de(arg0, desired, &D_800FFFD0);
    *arg0 = saved;

    return collisions == 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3758_4 = 0.800000012f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8918_4 = 0.800000012f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3AD8_4 = 0.800000012f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3B18_4 = 0.800000012f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3828_4 = 0.800000012f;
#endif
