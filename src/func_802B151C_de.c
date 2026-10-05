#include "span_1000/code_802B0388.h"
#include "types.h"






void *func_802B151C_de(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
    void *node;
    void *next;
    void *tail;

    node = ((func_802B65EC_S1 *)(arg0))->unk6C;
    if (node != 0) {
        next = *(void **)node;
        ((func_802B65EC_S1 *)(arg0))->unk6C = next;
        *(void **)node = 0;
        if (((func_802B65EC_S1 *)(arg0))->unk64 == 0) {
            ((func_802B65EC_S1 *)(arg0))->unk64 = node;
        } else {
            tail = ((func_802B65EC_S1 *)(arg0))->unk68;
            *(void **)tail = node;
        }
        ((func_802B65EC_S1 *)(arg0))->unk68 = node;
        ((func_802B65EC_S2 *)(node))->unk31 = arg3;
        ((func_802B65EC_S2 *)(node))->unk32 = arg1;
        ((func_802B65EC_S2 *)(node))->unk33 = arg2;
        ((func_802B65EC_S2 *)(node))->unk14 = node;
    }
    return node;
}
