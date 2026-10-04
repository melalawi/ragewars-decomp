#include "span_16E000/code_8044239C.h"
#include "types.h"

/* Returns the word at offset 0x1C of the object that offset 0x14 of a record points to. */




s32 func_804423AC_de(struct Outer *outer) {
    return outer->inner->locked;
}
