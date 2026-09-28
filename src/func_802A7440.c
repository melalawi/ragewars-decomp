#include "basetypes.h"

void *func_802A7440(void *arg0, s32 arg1, s32 arg2) {
    void *node;

    node = *(void **)((char *)arg0 + 0x7528);
    if (node != 0) {
        do {
            if (*(s32 *)((char *)node + 0x1C) == arg1) {
                if (*(s32 *)((char *)node + 0x20) == arg2) {
                    return node;
                }
            }
            node = *(void **)((char *)node + 4);
        } while (node != 0);
    }
    return 0;
}
