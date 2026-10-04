#include "span_1000/code_8029FF18.h"
#include "span_1000/types.h"



/** Copy the three floating components at offset 0x30. */
void func_8029EFE4_de(char *object, float *output) {
    output[0] = ((func_80247F08_S1 *)(object))->unk30;
    output[1] = ((func_80247F08_S1 *)(object))->unk34;
    output[2] = ((func_80247F08_S1 *)(object))->unk38;
}
