#include "basetypes.h"

typedef struct func_802B65EC_S1 func_802B65EC_S1;
typedef struct func_802B65EC_S2 func_802B65EC_S2;
struct func_802B65EC_S1 {
    char pad0[0x64];
    void* unk64;
    char pad64[0x68 - 0x64 - sizeof(void*)];
    void* unk68;
    char pad68[0x6C - 0x68 - sizeof(void*)];
    void* unk6C;
};
struct func_802B65EC_S2 {
    char pad0[0x14];
    void* unk14;
    char pad14[0x31 - 0x14 - sizeof(void*)];
    s8 unk31;
    char pad31[0x32 - 0x31 - sizeof(s8)];
    s8 unk32;
    char pad32[0x33 - 0x32 - sizeof(s8)];
    s8 unk33;
};

void *func_802B65EC(void *arg0, s8 arg1, s8 arg2, s8 arg3) {
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
