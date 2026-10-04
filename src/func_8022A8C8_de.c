#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"






void func_8022A8C8_de(char *object, f32 arg1) {
    char *record = ((func_802285C4_S1 *)(object))->unk20;
    if (record != 0) {
        do {
            ((func_8022A8B8_S2 *)(record))->unk670 = arg1;
            record = ((func_8022A8B8_S2 *)(record))->unk16E0;
        } while (record != 0);
    }
}
