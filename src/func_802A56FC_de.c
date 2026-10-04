#include "span_1000/code_802A6488.h"
#include "types.h"

extern u32 D_800CD72C;




/** Reset the object and compute its trailing-data end pointer. */
void func_802A56FC_de(void *object) {
    u32 index = D_800CD72C;
    ((func_802A66EC_S1 *)(object))->unk0 = 0;
    ((func_802A66EC_S1 *)(object))->unk2588 = 0x12C;
    ((func_802A66EC_S1 *)(object))->unk258C = (char *)object + (index * 4800 + 8);
}
