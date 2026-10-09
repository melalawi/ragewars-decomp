#include "span_1000/code_80233920.h"
extern void *D_80145060;




void *func_802392EC_de(int arg0) {
    void *node = D_80145060;
    if (node != 0) {
        do {
            if (((func_802392DC_S1 *)(node))->unk5DC == arg0) {
                return node;
            }
            node = ((func_802392DC_S1 *)(node))->unk16E0;
        } while (node != 0);
    }
    return 0;
}
