#include "span_1000/code_8029FF18.h"
#include "span_1000/types.h"



/** Copy a three-float vector into object offsets 0x30 through 0x38. */
void func_8029EFC8_de(void *arg0, float *arg1) {
    ((func_80247F08_S1 *)(arg0))->unk30 = arg1[0];
    ((func_80247F08_S1 *)(arg0))->unk34 = arg1[1];
    ((func_80247F08_S1 *)(arg0))->unk38 = arg1[2];
}
