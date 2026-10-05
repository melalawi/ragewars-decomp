#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_8043962C.h"
#include "types.h"

/* Stores a three-word vector passed by value into offset 0x1C of an object. */




void func_80439BE0_de(struct func_802062E0_S2 *object, struct Triple vector) {
    object->unk1C = vector;
}
