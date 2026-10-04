#include "common/types.h"
#include "span_1000/code_8028CCB8.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_80271F68_de(Vec3 *out, void *arg1, void *arg2);









s32 func_8028D28C_de(void *arg0, s32 arg1, void *arg2) {
    Vec3 position;
    void *list;
    void *item;
    f32 distSq;
    f32 bestDist;
    f32 bestIndex;
    s32 count;
    s32 index;

    bestIndex = D_800C5300_de;
    bestDist = 0.0f;
    index = 0;
    list = func_8028FDB4_de(func_8028FDB4_de(((func_8028D220_S1 *)(arg0))->unk7C, arg1), 1);
    count = ((func_8024C5C4_S2 *)(list))->unk4;
    item = &((func_8024C5C4_S2 *)(list))->unk8;
    if (count > 0) {
        do {
            func_80271F68_de(&position, arg2, item);
            distSq = (position.x * position.x) +
                     (position.y * position.y) +
                     (position.z * position.z);
            if ((bestIndex < 0.0f) || (distSq < bestDist)) {
                bestIndex = (f32)index;
                bestDist = distSq;
            }
            index += 1;
            item = &((func_8028D268_S3 *)(item))->unk38;
        } while (index < count);
    }
    return (s32)bestIndex;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5230_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3F0_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C55B0_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55F0_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5300_4 = (-1.0f);
#endif
