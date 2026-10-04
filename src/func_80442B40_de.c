#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Starts a one-shot state: when the word at offset 0x1CC is clear it sets it and clears the word
   at 0x1C8; func_80442B34_de clears both. */


void func_80442B40_de(struct Object1C8 *object) {
    if (object->second == 0) {
        object->second = 1;
        object->first = 0;
    }
}
