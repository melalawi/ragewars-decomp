#include "basetypes.h"

/* Returns the index of the entry among the 0x24 28-byte entries of D_800E4694 whose identifier
   matches, or zero when none does. */
struct Entry {
    s32 id;
    char pad[28 - 4];
};

extern struct Entry D_800E4694[];

s32 func_80428300(s32 id) {
    s32 i;

    for (i = 0; i < 0x24; i++) {
        if (D_800E4694[i].id == id) {
            return i;
        }
    }
    return 0;
}
