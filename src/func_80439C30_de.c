#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "types.h"

/* Stores a three-word vector passed by value into offset 0x28 of an object. */




void func_80439C30_de(struct Object_func_80439C30_de *object, struct Triple vector) {
    object->vector = vector;
}
