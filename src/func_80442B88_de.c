#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Folds the counter at offset 0x1C8 of an object into a triangle wave: values below 0x18 are
   returned as they are and the rest as 0x2F less the value. */


s32 func_80442B88_de(struct Object_func_80442B88_de *object) {
    s32 count = object->count;

    if (count < 0x18) {
        return count;
    }
    return 0x2F - count;
}
