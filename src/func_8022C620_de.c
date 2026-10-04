#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"








s32 func_8022C620_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    s32 count = 0;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022C54C_S3 *)(nested))->unk90 == 0) {
            count += 1;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
    return count;
}
