#include "common/types.h"
#include "span_1000/code_8022E120.h"
#include "span_1000/types.h"
#include "types.h"
typedef struct CollisionInfo CollisionInfo;







extern f32 D_800C2E10_de[];
extern CollisionInfo D_80100030;
extern f32 func_8024D284_de(Instance8020CD74 *);
extern s32 func_80243A90_de(Instance8020CD74 *, Vec3, CollisionInfo *);





s32 func_8022E43C_de(Instance8020CD74 *arg0, Vec3 *arg1) {
    Instance8020CD74 saved;
    s32 moved;

    saved = *arg0;
    ((func_8022E42C_S1 *)(arg0))->unk8.v1.y += func_8024D284_de(arg0) * D_800C2E10_de[1];
    ((func_8022E42C_S1 *)(arg0))->unk8.v1.y += ((func_8022E42C_S1 *)(arg0))->unk70;
    func_80243A90_de(arg0, *arg1, &D_80100030);

    moved = (arg1->x != ((func_8022E42C_S1 *)(arg0))->unk8.v0) ||
            (arg1->y != ((func_8022E42C_S1 *)(arg0))->unk8.v1.y) ||
            (arg1->z != ((func_8022E42C_S1 *)(arg0))->unk8.v1.z);
    *arg1 = ((func_8022E42C_S1 *)(arg0))->unk8.v1;
    *arg0 = saved;

    return moved;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D44_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F04_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C30B8_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30F8_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E14_4 = 0.5f;
#endif
