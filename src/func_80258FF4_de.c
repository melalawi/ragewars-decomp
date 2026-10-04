#include "span_1000/code_80259014.h"
/* Returns the index of the first of seventeen 0xCC-byte slots at offset 0x1DBC whose id at 0xC
   equals the given id, or -1 when the id is -1 or absent. */




int func_80258FF4_de(char *arg0, int id) {
    Slot_func_80258FF4_de *slot;
    int i;
    slot = &((func_80259014_S1 *)(arg0))->unk1DBC;
    if (id == -1) {
        return -1;
    }
    for (i = 0; i < 17; i++, slot++) {
        if (slot->id == id) {
            return i;
        }
    }
    return -1;
}
