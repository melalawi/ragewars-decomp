#include "span_1000/code_8020AF9C.h"
#include "types.h"






void *func_8020CFE0_de(char *object, s32 arg1) {
    char *record = ((func_8020CFE0_S1 *)(object))->unk24;
    if (record != 0) {
        do {
            if (((func_8020CFE0_S2 *)(record))->unk0 == arg1) {
                return record;
            }
            record = ((func_8020CFE0_S2 *)(record))->unk10;
        } while (record != 0);
    }
    return 0;
}
