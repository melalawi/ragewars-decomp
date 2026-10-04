#include "common/types.h"
#include "span_16E000/code_804194A8.h"
#include "types.h"

/* Sets the word at offset 0x84 of an object to one. */


void func_80419F18_de(struct StateBlock *object) {
    object->unk84 = 1;
}
