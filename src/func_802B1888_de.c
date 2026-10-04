#include "common/types.h"
#include "span_1000/code_802B6958.h"



/** Clamp (record - arg1) at a lower bound of 0x3E8 for negative results. */
int func_802B1888_de(void *arg0, int arg1) {
    int v = ((func_80207B5C_S2 *)(arg0))->unk24 - arg1;
    if (v >= 0) {
        return v;
    }
    return 0x3E8;
}
