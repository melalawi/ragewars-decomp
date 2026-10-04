#include "span_16E000/code_8041ADB4.h"
#include "span_16E000/types.h"
#include "types.h"

/* Returns entry i of the word array at offset 0x4C of an object; func_8041B7B4_de writes the
   parallel array at offset 0x5C. */


s32 func_8041B7FC_de(struct Slots_func_8041B7FC_de *object, s32 index) {
    return object->values[index];
}
