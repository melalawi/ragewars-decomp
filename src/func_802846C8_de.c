#include "common/types.h"
#include "span_1000/code_80283D24.h"
#include "types.h"










void *func_802846C8_de(void *arg0, s32 arg1, void *arg2) {
    void *record;

    record = *(void **)(&((func_8028469C_S1 *)(arg0))->unkFC28 +
                        (((func_8028469C_S3 *)(((func_8028469C_S2 *)(arg2))->unk38))->unk8 * 20));
    if (arg2 != 0) {
        if (record != 0) {
            do {
                if (((func_8028469C_S4 *)(record))->unk124 == arg1) {
                    if (((func_8028469C_S4 *)(record))->unk118 == arg2) {
                        return record;
                    }
                }
                record = ((func_8028469C_S4 *)(record))->unk1EC;
            } while (record != 0);
        }
    } else if (record != 0) {
        do {
            if (((func_8028469C_S4 *)(record))->unk124 == arg1) {
                return record;
            }
            record = ((func_8028469C_S4 *)(record))->unk1EC;
        } while (record != 0);
    }
    return 0;
}
