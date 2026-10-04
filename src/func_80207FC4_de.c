#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"



/** Set the fixed flags on the supplied object and word. */
void func_80207FC4_de(char *object, unsigned int *flags) {
    *flags |= 0x20000;
    ((func_80207F90_S1 *)(object))->unk100 |= 0x2100;
}
