#include "basetypes.h"

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void *arg1);

void func_802B8D4C(void *arg0) {
    void *node;

    node = *(void **)((char *)arg0 + 0x14);
    if (node != 0) {
        do {
            func_802B7520(node);
            func_802B7550(node, (char *)arg0 + 4);
            node = *(void **)((char *)arg0 + 0x14);
        } while (node != 0);
    }
}
