#include "common/types.h"
#include "span_1000/code_8023940C.h"
#include "span_C76B0/data.h"
#include "types.h"



extern s32 func_8027254C_de(f32 *arg0, f32 arg1);
extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);







void *func_802395A4_de(void *arg0, Vec3 *arg1) {
    Vec3 position;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    func_8027254C_de(&arg1->x, 20000.0f);
    if (((func_80239594_S1 *)(arg0))->unk1200 != 0) {
        return &((func_80239594_S1 *)(arg0))->unk40;
    }
    node = ((func_80239594_S1 *)(arg0))->unk20;
    bestDist = D_800C3548_de;
    bestNode = 0;
    if (node != 0) {
        do {
            func_80271F68_de(&position, arg1, &((func_80239594_S2 *)(node))->unk128);
            distSq = (position.x * position.x) +
                     (position.y * position.y) +
                     (position.z * position.z);
            if (distSq < bestDist) {
                bestNode = node;
                bestDist = distSq;
            }
            node = ((func_80239594_S2 *)(node))->unk4;
        } while (node != 0);
    }
    if (bestNode == 0) {
        return &((func_80239594_S1 *)(arg0))->unk40;
    }
    return bestNode;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3478_4 = 3.40282347e+38f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8638_4 = 3.40282347e+38f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C37F8_4 = 3.40282347e+38f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3838_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3548_4 = 3.40282347e+38f;
#endif
