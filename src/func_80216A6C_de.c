#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;







extern CollisionInfo D_800FFFD0;
extern StateFlags *D_8010028C;
extern StateFlags *D_801002A4;
extern f32 func_8024D284_de(Instance8020CD74 *);
extern s32 func_802444A4_de(Instance8020CD74 *arg0, Vec3 current, Vec3 desired, CollisionInfo *arg3);








s32 func_80216A6C_de(Instance8020CD74 *arg0, void *unused, Instance8020CD74 *target) {
    Instance8020CD74 saved;
    Vec3 desired;
    f32 scale;

    saved = *arg0;
    scale = D_800C21CC_de;
    ((func_80216A6C_S1 *)(arg0))->unkC += func_8024D284_de(arg0) * scale;
    ((func_80216A6C_S1 *)(arg0))->unkC += ((func_80216A6C_S1 *)(arg0))->unk70;

    desired = ((Actor_func_80214310_de *)(target))->position;
    desired.y += func_8024D284_de(target) * scale;
    desired.y += ((Actor_func_80214310_de *)(target))->eye;

    func_802444A4_de(arg0, ((Player *)(arg0))->pos, desired, &D_800FFFD0);
    *arg0 = saved;

    if (D_8010028C != 0 && (D_8010028C->flags & 2)) {
        return 1;
    }
    if (D_801002A4 != 0 && (D_801002A4->flags & 2)) {
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
