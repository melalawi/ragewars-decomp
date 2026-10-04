#include "span_16E000/code_80439930.h"
#include "types.h"

/* Stores a value into the word at offset 0xB8 of an object. */


void func_80439CD4_de(struct ObjectB8 *object, s32 value) {
    object->value = value;
}
