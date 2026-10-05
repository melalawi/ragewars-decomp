#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022AE90.h"
#include "types.h"



extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);






void *func_8022B304_de(void *arg0, void *arg1) {
    Vec3 sp10;
    void *node;
    void *bestNode;
    f32 bestDist;
    f32 distSq;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    bestDist = 0.0f;
    bestNode = 0;
    if (node != 0) {
        do {
            if (((func_8022B2F4_S2 *)(node))->unk5D0 != 0 &&
                ((func_8022B2F4_S2 *)(node))->unk11FC != 0.0f) {
                func_80271F68_de(&sp10, arg1, (char *)node + 0x1200);
                distSq = sp10.x * sp10.x + sp10.y * sp10.y + sp10.z * sp10.z;
                if (bestNode == 0 || distSq < bestDist) {
                    bestNode = node;
                    bestDist = distSq;
                }
            }
            node = ((func_8022B2F4_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
    return bestNode;
}
