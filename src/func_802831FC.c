#include "basetypes.h"

s32 func_802831FC(void *arg0, s32 arg1) {
    s8 *record;
    s32 count;
    u16 v;

    record = *(s8 **)((s8 *)arg0 + 0xFC3C);
    count = 0;
    if (record != 0) {
        do {
            v = *(u16 *)(record + 4);
            if (((v == 0x3EF) || (v == 0x41E)) && (*(s32 *)(record + 0x12C) == arg1)) {
                count += 1;
            }
            record = *(s8 **)(record + 0x1EC);
        } while (record != 0);
    }
    return count;
}
