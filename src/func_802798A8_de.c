#include "span_1000/code_80279764.h"
#include "types.h"

extern s32 func_802744D4_de(void);



s16 func_802798A8_de(WeightedTable *arg0) {
    s16 *entry;
    s16 *start;
    s32 random;
    s32 total;
    s32 value;

    if (arg0->count == 0) {
        return -1;
    }
    arg0->entries[arg0->count][0] = -1;
    entry = &arg0->entries[0][0];
    total = 0;
    start = entry;
    if (*entry != -1) {
        do {
            total += entry[1];
            entry += 2;
        } while (*entry != -1);
    }

    random = func_802744D4_de();
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
