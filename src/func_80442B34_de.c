#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Clears the two words at offsets 0x1C8 and 0x1CC of an object; func_80442B40_de, which follows it,
   tests the word at 0x1CC. */


void func_80442B34_de(struct Object1C8 *object) {
    object->second = 0;
    object->first = 0;
}
