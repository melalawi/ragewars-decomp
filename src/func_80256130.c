#include "basetypes.h"

extern s32 func_80274544(void);

void *func_80256130(void *arg0) {
    s32 index;
    s32 offset;
    void *node;

    node = *(void **)arg0;
    if (node == 0) {
        return 0;
    }
    index = func_80274544() % *(u32 *)((char *)arg0 + 0x10);
    index--;
    if (index != -1) {
        offset = *(s32 *)((char *)arg0 + 0xC);
        do {
            node = *(void **)((char *)node + offset);
            index--;
        } while (index != -1);
    }
    return node;
}
