#include "basetypes.h"

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void *arg1);

typedef struct func_802B8D4C_S1 func_802B8D4C_S1;
struct func_802B8D4C_S1 {
    char pad0[0x14];
    void* unk14;
};

void func_802B8D4C(void *arg0) {
    void *node;

    node = ((func_802B8D4C_S1 *)(arg0))->unk14;
    if (node != 0) {
        do {
            func_802B7520(node);
            func_802B7550(node, (char *)arg0 + 4);
            node = ((func_802B8D4C_S1 *)(arg0))->unk14;
        } while (node != 0);
    }
}
