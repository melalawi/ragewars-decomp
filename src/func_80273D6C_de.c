#include "span_1000/code_80273744.h"



/** Swap the two float-groups at offsets 0x10 and 0x20 (three floats each). */
void func_80273D6C_de(void *object) {
    float t;
    t = ((func_80273860_S1 *)(object))->unk10;
    ((func_80273860_S1 *)(object))->unk10 = ((func_80273860_S1 *)(object))->unk20;
    ((func_80273860_S1 *)(object))->unk20 = t;

    t = ((func_80273860_S1 *)(object))->unk14;
    ((func_80273860_S1 *)(object))->unk14 = ((func_80273860_S1 *)(object))->unk24;
    ((func_80273860_S1 *)(object))->unk24 = t;

    t = ((func_80273860_S1 *)(object))->unk18;
    ((func_80273860_S1 *)(object))->unk18 = ((func_80273860_S1 *)(object))->unk28;
    ((func_80273860_S1 *)(object))->unk28 = t;
}
