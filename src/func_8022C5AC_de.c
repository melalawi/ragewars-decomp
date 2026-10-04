#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"








void func_8022C5AC_de(char *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    while (record != 0) {
        char *nested = ((func_80229A54_S2 *)(record))->unk5D8;
        if (((func_8022C54C_S3 *)(nested))->unk90 == 1) {
            ((func_8022C54C_S3 *)(nested))->unk90 = 0;
        }
        record = ((func_80229A54_S2 *)(record))->unk16E0;
    }
}
