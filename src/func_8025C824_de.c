#include "span_1000/code_8025C544.h"

void func_802B25D0_de(void *a, short b);




int func_8025C824_de(int arg0, short arg1) {
    void *base;
    void *arrayBase;
    short *slot;
    unsigned char *cursor;
    int entry;

    entry = arg1 * 0xCC;
    entry = entry + arg0;
    entry = entry + 4;
    base = ((struct func_8025C67C_S1 *) entry)->unkB0;
    arrayBase = &((func_8025C67C_S2 *)(base))->unk7C;
    cursor = (((struct func_8025C67C_S1 *) entry)->unk0 * 2) + (unsigned char *)arrayBase;
    cursor += 0x60;
    slot = (short *)cursor;
    func_802B25D0_de(&((func_8025C67C_S2 *)(base))->unk84, *slot);
    arrayBase = ((short *)arrayBase) + *(int *)entry;
    slot = &((SlotArray *)arrayBase)->slot[0];
    *slot = -1;
    ((struct func_8025C67C_S1 *) entry)->unk38 = 0;
    ((struct func_8025C67C_S1 *) entry)->unkC = -1;
    ((struct func_8025C67C_S1 *) entry)->unk8 = -1;
    ((struct func_8025C67C_S1 *) entry)->unkA8 = -1;
    ((struct func_8025C67C_S1 *) entry)->unk3A = -1;
    ((struct func_8025C67C_S1 *) entry)->unkB4 = -1;
    return 0;
}
