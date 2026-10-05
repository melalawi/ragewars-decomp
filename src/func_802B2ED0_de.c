#include "span_1000/code_802B2614.h"





/** Store the low byte of the third argument in an indexed 0x30-byte record. */
void func_802B2ED0_de(void *object, short index, unsigned char value) {
    ((Slot_func_802B2ED0_de *)((func_802B7FA0_S1 *)object)->unk40)[index].value = value;
}
