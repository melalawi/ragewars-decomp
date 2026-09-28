#include "basetypes.h"

typedef struct {
    char pad0[4];
    u32 mask;
    char pad8[8];
    u32 amount;
    s32 active;
    char pad18[0xA0];
    u32 values[16];
} ValueSet;

s32 func_802B3A80(ValueSet *set, u32 *result) {
    u32 amount;
    u32 minimum;
    u32 i;

    amount = set->amount;
    minimum = -1;
    if (set->mask == 0) {
        return 0;
    }

    for (i = 0; i < 16; i++) {
        if ((set->mask >> i) & 1) {
            if (set->active != 0) {
                set->values[i] -= amount;
            }
            if (set->values[i] < minimum) {
                minimum = set->values[i];
            }
        }
    }

    set->active = 0;
    *result = minimum;
    return 1;
}
