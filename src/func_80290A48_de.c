#include "span_1000/code_802909D8.h"



/** Copy four scalar fields from the source into output pointers. */
void func_80290A48_de(void *source, int *word, float *third, float *fourth, float *second) {
    *word = ((func_80290A28_S1 *)(source))->unk20;
    *second = ((func_80290A28_S1 *)(source))->unk10;
    *third = ((func_80290A28_S1 *)(source))->unk8;
    *fourth = ((func_80290A28_S1 *)(source))->unkC;
}
