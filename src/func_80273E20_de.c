#include "span_1000/code_8027302C.h"



/** Swap the two floats within each of the object's four 0x10-byte records. */
void func_80273E20_de(void *object) {
    float t;
    t = ((func_80273930_S1 *)(object))->unk4;
    ((func_80273930_S1 *)(object))->unk4 = ((func_80273930_S1 *)(object))->unk8;
    ((func_80273930_S1 *)(object))->unk8 = t;

    t = ((func_80273930_S1 *)(object))->unk14;
    ((func_80273930_S1 *)(object))->unk14 = ((func_80273930_S1 *)(object))->unk18;
    ((func_80273930_S1 *)(object))->unk18 = t;

    t = ((func_80273930_S1 *)(object))->unk24;
    ((func_80273930_S1 *)(object))->unk24 = ((func_80273930_S1 *)(object))->unk28;
    ((func_80273930_S1 *)(object))->unk28 = t;

    t = ((func_80273930_S1 *)(object))->unk34;
    ((func_80273930_S1 *)(object))->unk34 = ((func_80273930_S1 *)(object))->unk38;
    ((func_80273930_S1 *)(object))->unk38 = t;
}
