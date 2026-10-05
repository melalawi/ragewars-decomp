#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"






void *func_8022A5C0_de(char *object, s32 arg1) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            if (((func_8022A5B0_S2 *)(record))->unk698 == arg1) {
                return record;
            }
            record = ((func_8022A5B0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return 0;
}
