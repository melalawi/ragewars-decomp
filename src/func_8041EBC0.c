#include "basetypes.h"

/* Counts how many of the three 28-byte entries of D_80153F80 hold a non-negative first word. */
struct Entry {
    s32 value;
    char pad[28 - 4];
};

extern struct Entry D_80153F80[];

s32 func_8041EBC0(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 3; i++) {
        if (D_80153F80[i].value >= 0) {
            count++;
        }
    }
    return count;
}
