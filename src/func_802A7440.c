#include "basetypes.h"

typedef struct func_802A7440_S1 func_802A7440_S1;
typedef struct func_802A7440_S2 func_802A7440_S2;
struct func_802A7440_S1 {
    char pad0[0x7528];
    void* unk7528;
};
struct func_802A7440_S2 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x1C - 0x4 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
};

void *func_802A7440(void *arg0, s32 arg1, s32 arg2) {
    void *node;

    node = ((func_802A7440_S1 *)(arg0))->unk7528;
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
