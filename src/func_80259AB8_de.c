#include "span_1000/code_802591C0.h"





int func_80259AB8_de(void *arg0, int arg1) {
    void *node = ((func_80259AD8_S1 *)(arg0))->unk8;
    void *sentinel = &((func_80259AD8_S1 *)(arg0))->unk4;
    if (node != sentinel) {
        do {
            int value = ((func_80259AD8_S2 *)(node))->unkB0;
            node = ((func_80259AD8_S2 *)(node))->unk4;
            if (value == arg1) {
                return 1;
            }
        } while (node != sentinel);
    }
    return 0;
}
