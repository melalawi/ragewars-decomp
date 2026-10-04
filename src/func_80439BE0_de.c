#include "common/types.h"
#include "span_16E000/code_80439930.h"
#include "types.h"

/* Stores a three-word vector passed by value into offset 0x1C of an object. */




void func_80439BE0_de(struct func_802062E0_S2 *object, struct Triple vector) {
    object->unk1C = vector;
}
