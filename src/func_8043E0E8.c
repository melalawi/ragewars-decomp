/* Finds the first of the four slots in D_8010F328 that func_8026439C accepts, writing its index to out and returning it, or writing -1 and returning NULL when none does. */
#include "basetypes.h"

typedef struct Slot {
    char pad0[0x224];
} Slot;

extern Slot D_8010F328[4];
extern s32 func_8026439C(Slot *slot);

Slot *func_8043E0E8(s32 *out) {
    s32 i;
    Slot *s;

    i = 0;
    s = D_8010F328;
    while (i < 4) {
        if (func_8026439C(s) != 0) {
            *out = i;
            return s;
        }
        i++;
        s++;
    }
    *out = -1;
    return 0;
}
