#include "basetypes.h"

/* Reports through the third argument the size in 256-byte units, per func_804057EC, of entry j of
   record i in the table D_800E2854 points to, returning zero, or returns -2 when record i's state in
   D_801534F0 is not 3. */
struct Entry {
    s32 size;
    char data[28];
};

struct Record {
    s32 header;
    struct Entry entries[16];
};

extern s32 D_801534F0[];
extern struct Record *D_800E2854;
extern s32 func_804057EC(s32);

s32 func_804053E0(s32 index, s32 entry, s32 *out) {
    if (D_801534F0[index] != 3) {
        return -2;
    }
    *out = func_804057EC(D_800E2854[index].entries[entry].size);
    return 0;
}
