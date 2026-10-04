#include "common/types.h"
#include "span_1000/code_8022A8E0.h"
#include "types.h"






s32 func_8022A8F0_de(void *arg0) {
    char *record = ((func_802285C4_S1 *)(arg0))->unk20;
    s32 count = 0;
    if (record != 0) {
        do {
            if (((func_8022A8E0_S2 *)(record))->unk5FE != 0 && ((func_8022A8E0_S2 *)(record))->unk1450 == 0) {
                count += 1;
            }
            record = ((func_8022A8E0_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
    return count;
}
