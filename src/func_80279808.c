#include "basetypes.h"

extern s32 func_80274544(void);

s16 func_80279808(s16 *arg0) {
    s16 *entry;
    s16 *start;
    s32 random;
    s32 total;
    s32 value;

    entry = arg0;
    total = 0;
    start = entry;
    if (*entry != -1) {
        do {
            total += entry[1];
            entry += 2;
        } while (*entry != -1);
    }

    random = func_80274544();
    entry = start;
    value = random % total;
    total = 0;
    while (*entry != -1) {
        total += entry[1];
        if (total >= value) {
            break;
        }
        entry += 2;
    }
    return *entry;
}
