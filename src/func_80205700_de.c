#include "span_1000/code_80204A68.h"
#include "span_1000/types.h"



/** Return the object's 0x200 status bit. */
unsigned int func_80205700_de(void *object) {
    return ((func_80205700_S1 *)(object))->unkC & 0x200;
}
