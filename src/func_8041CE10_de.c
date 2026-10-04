#include "span_16E000/code_8041BC50.h"
#include "types.h"

/* Stores a value into the word at offset 0x49C of an object; func_80420618_de and func_8043AB40_de call
   it with zero, func_8041CAD8_de writes the same word directly and func_8041C7F4_de reads it. */


void func_8041CE10_de(struct Object49C *object, s32 value) {
    object->value = value;
}
