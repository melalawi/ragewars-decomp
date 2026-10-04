#include "span_1000/code_8027230C.h"
#include "span_1000/types.h"



/** Add three floating arguments to the vector at offset 0x30. */
void func_80273448_de(char *object, float x, float y, float z) {
    ((func_80247F08_S1 *)(object))->unk30 += x;
    ((func_80247F08_S1 *)(object))->unk34 += y;
    ((func_80247F08_S1 *)(object))->unk38 += z;
}
