#include "span_1000/code_802406DC.h"
#include "span_1000/types.h"





/** Set flag 8 in the first object and flag 0x10 in the second. */
void func_802428D0_de(void *first, void *second) {
    ((func_802428C0_S1 *)(first))->unk3C |= 8;
    ((func_802428C0_S2 *)(second))->unk38 |= 0x10;
}
