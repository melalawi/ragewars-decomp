#include "common/types.h"
#include "span_1000/code_802B8D4C.h"
#include "types.h"

extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void *arg1);




void func_802B3C7C_de(void *arg0) {
    void *node;

    node = ((func_80254D70_S1 *)(arg0))->unk14;
    if (node != 0) {
        do {
            func_802B2450_de(node);
            func_802B2480_de(node, (char *)arg0 + 4);
            node = ((func_80254D70_S1 *)(arg0))->unk14;
        } while (node != 0);
    }
}
