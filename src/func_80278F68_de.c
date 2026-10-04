#include "span_1000/code_80278C80.h"
#include "span_1000/types.h"
#include "types.h"

/* Clears bits 0x2000 and 0x100 of the flag word at offset 0x100 of an object. */


void func_80278F68_de(struct func_80203C40_S1 *object) {
    object->unk100 &= ~0x2000;
    object->unk100 &= ~0x100;
}
