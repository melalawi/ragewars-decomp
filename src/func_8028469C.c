#include "basetypes.h"

void *func_8028469C(void *arg0, s32 arg1, void *arg2) {
    void *record;

    record = *(void **)((char *)arg0 + 0xFC28 +
                        (*(s8 *)((char *)*(void **)((char *)arg2 + 0x38) + 8) * 20));
    if (arg2 != 0) {
        if (record != 0) {
            do {
                if (*(s32 *)((char *)record + 0x124) == arg1) {
                    if (*(void **)((char *)record + 0x118) == arg2) {
                        return record;
                    }
                }
                record = *(void **)((char *)record + 0x1EC);
            } while (record != 0);
        }
    } else if (record != 0) {
        do {
            if (*(s32 *)((char *)record + 0x124) == arg1) {
                return record;
            }
            record = *(void **)((char *)record + 0x1EC);
        } while (record != 0);
    }
    return 0;
}
