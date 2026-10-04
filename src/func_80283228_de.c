#include "span_1000/code_8027ED40.h"
#include "span_1000/types.h"
#include "types.h"






s32 func_80283228_de(void *arg0, s32 arg1) {
    s8 *record;
    s32 count;
    u16 v;

    record = ((func_802831FC_S1 *)(arg0))->unkFC3C;
    count = 0;
    if (record != 0) {
        do {
            v = ((func_802831FC_S2 *)(record))->unk4;
            if (((v == 0x3EF) || (v == 0x41E)) && (((func_802831FC_S2 *)(record))->unk12C == arg1)) {
                count += 1;
            }
            record = ((func_802831FC_S2 *)(record))->unk1EC;
        } while (record != 0);
    }
    return count;
}
