#include "span_1000/code_8023A4CC.h"





/** Compare two records by the float at nested offset 0x210. */
int func_8023B978_de(void *first, void *second) {
    void *left = *(void **)first;
    void *right = *(void **)second;
    int result = 1;
    if (((func_8023B968_S1 *)(left))->unk210 <
        ((func_8023B968_S1 *)(right))->unk210) {
        result = -1;
    }
    return result;
}
