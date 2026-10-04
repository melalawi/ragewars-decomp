#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "types.h"

/* Returns by value the three-word vector at offset 0x28 of an object. */




struct Triple func_80439C5C_de(struct Object_func_80439C30_de *object) {
    return object->vector;
}
