#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"

extern char D_801468A0[];








void *func_8022A420_de(void *arg0) {
    char *base = D_801468A0;
    void *record;

    if (((IntegerState6C *)(base))->unk_54 != 0 && ((IntegerState6C *)(base))->unk_68 != 0) {
        return 0;
    }
    record = ((func_80228774_S1 *)(arg0))->unk20;
    if (record != 0) {
        do {
            if (((struct func_8020EA10_S3 *) ((ObjectLinks16E4_3 *) record)->unk_5D8)->unk8F == 1) {
                return record;
            }
            record = ((ObjectLinks16E4_3 *)(record))->unk_16E0;
        } while (record != 0);
    }
    return 0;
}
