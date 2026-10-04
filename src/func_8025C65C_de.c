#include "span_1000/code_8025C67C.h"

void func_802B25D0_de(void *a, short b);






void func_8025C65C_de(void *arg0) {
    void *base;
    void *arrayBase;
    short *slot;
    unsigned char *cursor;
    base = ((func_8025C67C_S1 *)(arg0))->unkB0;
    arrayBase = &((func_8025C67C_S2 *)(base))->unk7C;
    cursor = (((func_8025C67C_S1 *)(arg0))->unk0 * 2) + (unsigned char *)arrayBase;
    cursor += 0x60;
    slot = (short *)cursor;
    func_802B25D0_de(&((func_8025C67C_S2 *)(base))->unk84, *slot);
    arrayBase = ((short *)arrayBase) + ((func_8025C67C_S1 *)arg0)->unk0;
    slot = &((SlotArray *)arrayBase)->slot[0];
    *slot = -1;
    ((func_8025C67C_S1 *)(arg0))->unk38 = 0;
    ((func_8025C67C_S1 *)(arg0))->unkC = -1;
    ((func_8025C67C_S1 *)(arg0))->unk8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unkA8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unk3A = -1;
    ((func_8025C67C_S1 *)(arg0))->unkB4 = -1;
}
