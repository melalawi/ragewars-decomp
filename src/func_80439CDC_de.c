#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "types.h"

/* Returns by value the three-word vector at offset 0x10 of an object. */




struct Triple func_80439CDC_de(struct Object_func_80439CDC_de *object) {
    return object->vector;
}
