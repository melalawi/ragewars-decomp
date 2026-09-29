#include "basetypes.h"

typedef struct {
    char pad0[8];
    u32 flags;
    char padC[8];
    void *table;
} MenuItem;

extern u32 D_801462D0;
extern s32 D_80146878;
extern u8 D_800D75D4[];
extern u8 D_800D75D8[];
extern u8 D_800D75DC[];

/* Sets bit 24 of the item's flags when D_80146878 is 8 (clears it otherwise) and points the item at the text table for the configuration D_801462D0 (8, 0x10 or 0x20); returns 0. */
s32 func_80444484(MenuItem *item) {
    if (D_80146878 == 8) {
        item->flags |= 0x01000000;
    } else {
        item->flags &= ~0x01000000;
    }
    switch (D_801462D0) {
    case 8:
        item->table = D_800D75D4;
        break;
    case 0x10:
        item->table = D_800D75D8;
        break;
    case 0x20:
        item->table = D_800D75DC;
        break;
    }
    return 0;
}
