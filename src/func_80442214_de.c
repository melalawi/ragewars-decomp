#include "common/types.h"
#include "span_16E000/code_8043EEC0.h"
/* Returns the address 0x190 bytes into the block at offset 0x20 of an object, or null when the
   object has no block. */


char *func_80442214_de(struct func_802285C4_S1 *object) {
    char *result = 0;

    if (object->unk20 != 0) {
        result = object->unk20 + 0x190;
    }
    return result;
}
