#include "basetypes.h"

extern u8 D_801462C8[];

extern void func_80253B5C(s32 arg0, void *arg1);
extern void func_8024B8B4(void *arg0);
extern void func_8022BC84(void *arg0, s32 arg1);
extern s32 func_8024B7D4(void *arg0, s32 arg1);

void func_8022A144(void *arg0) {
    void *node;

    if (*(void **)arg0 != 0) {
        func_80253B5C(0, *(void **)arg0);
    }

    node = *(void **)((char *)arg0 + 0x20);
    if (node != 0) {
        u8 *base = D_801462C8;

        do {
            func_8024B8B4(node);
            func_8024B8B4((char *)node + 0x2E8);
            func_8022BC84(node, 0);
            if (base[0x1D] != 0) {
                func_8024B7D4(node, 1);
            }
            node = *(void **)((char *)node + 0x16E0);
        } while (node != 0);
    }
}
