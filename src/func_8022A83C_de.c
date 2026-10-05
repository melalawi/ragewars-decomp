#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"







/** Find the first linked record whose nested flags include either type marker. */
void *func_8022A83C_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022A82C_S3 *)(nested))->unk8F == 1 ||
            ((func_8022A82C_S3 *)(nested))->unk90 == 1) {
            return record;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
    return record;
}
