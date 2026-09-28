#include "basetypes.h"

/* Reports the address of the field at offset 0xA of entry j in record i of the table D_800E2854
   points to, returning zero, or returns -2 when record i's state in D_801534F0 is not 3. */
struct Entry {
    char data[32];
};

struct Record {
    s32 header;
    struct Entry entries[16];
};

extern s32 D_801534F0[];
extern struct Record *D_800E2854;

s32 func_8040538C(s32 index, s32 entry, char **out) {
    if (D_801534F0[index] != 3) {
        return -2;
    }
    *out = D_800E2854[index].entries[entry].data + 0xA;
    return 0;
}
