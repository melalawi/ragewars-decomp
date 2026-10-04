#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Advances the counter at offset 0x1C8 of an object by the step at 0x1CC and clears both once
   the counter reaches 0x30. */


void func_80442B5C_de(struct Object1C8 *object) {
    object->first += object->second;
    if (object->first >= 0x30) {
        object->first = 0;
        object->second = 0;
    }
}
