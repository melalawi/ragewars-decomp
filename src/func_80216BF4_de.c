#include "common/types.h"
#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;





extern CollisionInfo D_80100030;
extern Instance8020CD74 *D_801001F0;
extern f32 func_8024D284_de(Instance8020CD74 *arg0);
extern s32 func_802444A4_de(Instance8020CD74 *arg0, Vec3 current, Vec3 desired, CollisionInfo *arg3);








s32 func_80216BF4_de(Instance8020CD74 *arg0, void *unused, Instance8020CD74 *target) {
    Instance8020CD74 saved;
    Vec3 desired;
    s32 collisions;

    saved = *arg0;
    ((func_80216BF4_S1 *)(arg0))->unkC += func_8024D284_de(arg0);
    ((func_80216BF4_S1 *)(arg0))->unkC += ((Actor_func_80214310_de *)(target))->eye;

    desired = ((Actor_func_80214310_de *)(target))->position;
    desired.y += func_8024D284_de(target);
    desired.y += ((Actor_func_80214310_de *)(target))->eye;

    collisions = func_802444A4_de(arg0, ((Player *)(arg0))->pos, desired, &D_80100030);
    if (D_801001F0 == target)
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
