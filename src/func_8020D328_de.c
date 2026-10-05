#include "span_1000/code_8020AF9C.h"
#include "types.h"






s32 func_8020D328_de(void *arg0) {
    char *record = ((func_8020CFE0_S1 *)(arg0))->unk24;
    if (record != 0) {
        do {
            if (((func_8020D328_S2 *)(record))->unk28 == 1) {
                return 1;
            }
            record = ((func_8020D328_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}
