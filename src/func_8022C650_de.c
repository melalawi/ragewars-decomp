#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "types.h"






s32 func_8022C650_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        if (((func_8022C640_S2 *)(record))->unk5D0 != 0) {
            count += 1;
        }
        record = ((func_8022C640_S2 *)(record))->unk16E0;
    }
    return count;
}
