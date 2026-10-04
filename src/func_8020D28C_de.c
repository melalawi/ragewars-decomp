#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"









void *func_8020D28C_de(void *arg0) {
    char *node;
    char *best;
    f32 best_value;

    node = ((func_8020CFE0_S1 *)(arg0))->unk24;
    best_value = (-1.0f);
    best = 0;
    if (node != 0) {
        do {
            if (((func_8020D28C_S2 *)(node))->unk28 == 1) {
                f32 value = ((func_8020D28C_S2 *)(node))->unk24;
                if (value < best_value || best_value == (-1.0f)) {
                    best = node;
                    best_value = value;
                }
            }
            node = ((func_8020D28C_S2 *)(node))->unk10;
        } while (node != 0);
    }
    if (best != 0) {
        ((func_8020D280_S1 *)(best))->unk28 = 0;
    }
    return best;
}
