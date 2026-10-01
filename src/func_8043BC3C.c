#include "basetypes.h"

/* Moves the cursor of player p's 0x4D0-byte entry of D_800E59E0 to column c: unless c is 5 it
   hides the item whose id D_800E5A06[p * 19 + c] names in the screen window, shows the item
   D_800E5A1A[p * 19 + c] names with alpha 0x96, stores c as the entry's selection and redraws that
   column through func_8043B67C with the entry's value for it. */

struct Item {
    char pad[0x10];
    unsigned char alpha;
};

struct Entry {
    void *window;
    char pad4[0x4B4 - 0x4];
    s32 selection;
    s32 values[6];
    char pad4D0[0x4D0 - 0x4D0];
};

struct Cell {
    u16 id;
    u16 pad;
};

struct Screen {
    struct Entry entries[4];
};

extern struct Screen *D_800E59E0;
extern struct Cell D_800E5A06[];
extern struct Cell D_800E5A1A[][19];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_8040E9A8(struct Item *, s32);
extern void func_8043B67C(s32, s32, s32);

void func_8043BC3C(s32 player, s32 column) {
    struct Item *item;

    if (column != 5) {
        item = func_8040ECB0(D_800E59E0->entries[0].window, D_800E5A06[player * 19 + column].id);
        func_8040E958(item, 1);
    }
    item = func_8040ECB0(D_800E59E0->entries[0].window, D_800E5A1A[player][column].id);
    func_8040E9A8(item, 1);
    item->alpha = 0x96;
    D_800E59E0->entries[player].selection = column;
    func_8043B67C(player, column, D_800E59E0->entries[player].values[column]);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0666_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5A06_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F2026_14[] = {0x01, 0x22, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED206_14[] = {0x01, 0x26, 0x00, 0x00, 0x01, 0x25, 0x00, 0x00, 0x01, 0x24, 0x00, 0x00, 0x01, 0x23, 0x00, 0x00, 0x01, 0x22, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E19B6_14[] = {0x01, 0x20, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x1E, 0x00, 0x00, 0x01, 0x1D, 0x00, 0x00, 0x01, 0x1C, 0x00, 0x00};
#endif
