#include "basetypes.h"

/* Returns the column of the first of the seventeen eight-byte entries in row r of D_800E381C whose
   identifier matches, or zero when none does. */
struct Entry {
    s32 id;
    s32 value;
};

extern struct Entry D_800E381C[][17];

s32 func_8041ECB4(s32 row, s32 id) {
    s32 i;

    for (i = 0; i < 0x11; i++) {
        if (D_800E381C[row][i].id == id) {
            return i;
        }
    }
    return 0;
}
