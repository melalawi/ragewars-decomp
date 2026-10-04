#include "span_1000/code_802A6488.h"
#include "types.h"






void *func_802A6450_de(void *arg0, s32 arg1, s32 arg2) {
    void *node;

    node = ((func_802A67D0_S1 *)(arg0))->unk7528;
    if (node != 0) {
        do {
            if (((func_802A7440_S2 *)(node))->unk1C == arg1) {
                if (((func_802A7440_S2 *)(node))->unk20 == arg2) {
                    return node;
                }
            }
            node = ((func_802A7440_S2 *)(node))->unk4;
        } while (node != 0);
    }
    return 0;
}
