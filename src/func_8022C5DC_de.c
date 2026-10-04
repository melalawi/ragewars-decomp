#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80226708_de(void *arg0);






void func_8022C5DC_de(void *object) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((struct ObjectState90 *) ((func_80229A54_S2 *) record)->unk5D8)->unk_8F = 0;
            func_80226708_de(record);
            record = ((func_80229A54_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}
