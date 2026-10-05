#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80279208.h"



/** Set flag 0x10000 in the word at offset 0x100. */
void func_802791F0_de(void *object) {
    ((func_80207F90_S1 *)(object))->unk100 |= 0x10000;
}
