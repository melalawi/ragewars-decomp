#include "basetypes.h"

/* Points offset 0x14 of a record at D_800D7794 when D_8015375C is set, and returns zero. */
struct Record {
    char pad[0x14];
    void *handler;
};

extern s32 D_8015375C;
extern char D_800D7794[];

s32 func_8040A484(struct Record *record) {
    if (D_8015375C != 0) {
        record->handler = D_800D7794;
    }
    return 0;
}
