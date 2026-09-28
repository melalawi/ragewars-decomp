#include "basetypes.h"

/* Enters player p's loadout panel on the screen D_800E59E0: marks the entry open, hides the panel
   item D_800E59E6[p][0], then by the entry's mode at 0x4D4 either hides column item
   D_800E59EE[p][5] and fades label D_800E5A1A[p][5] to alpha 0x23 (mode 0), or for each of the
   3 (mode 1) or 6 (mode 2 and any other) columns hides D_800E59EE[p][c], fades D_800E5A1A[p][c]
   to 0x23 and redraws the column through func_8043B67C with the entry's value; mode 1 then also
   hides column 5's item, fades its label and hides the entry's item. Finally it hides the five
   D_800E5A06[p] items at alpha 0x37 and shows the selected column's label at alpha 0x96 through
   func_8040E9A8. */

struct Item {
    char pad0[0x10];
    u8 alpha;
};

struct Entry {
    char pad0[0x4A8];
    s32 open;
    s32 column;
    s32 values[6];
    struct Item *item;
    s32 mode;
};

struct Screen {
    s32 window;
    s32 unk4;
    struct Entry entries[4];
};

struct Cell {
    u16 id;
    u16 pad;
};

extern struct Screen *D_800E59E0;
extern struct Cell D_800E59E6[][19];
extern struct Cell D_800E59EE[][19];
extern struct Cell D_800E5A06[][19];
extern struct Cell D_800E5A1A[][19];
extern struct Item *func_8040ECB0(s32, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_8040E9A8(struct Item *, s32);
extern void func_8043B67C(s32, s32, s32);

void func_8043B2AC(s32 player) {
    struct Item *item;
    s32 i;

    D_800E59E0->entries[player].open = 1;
    func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E59E6[player][0].id), 0);
    switch (D_800E59E0->entries[player].mode) {
    case 0:
        func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E59EE[player][5].id), 0);
        item = func_8040ECB0(D_800E59E0->window, D_800E5A1A[player][5].id);
        func_8040E958(item, 1);
        item->alpha = 0x23;
        break;
    case 1:
        for (i = 0; i < 3; i++) {
            func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E59EE[player][i].id), 0);
            item = func_8040ECB0(D_800E59E0->window, D_800E5A1A[player][i].id);
            func_8040E958(item, 1);
            item->alpha = 0x23;
            func_8043B67C(player, i, D_800E59E0->entries[player].values[i]);
        }
        func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E59EE[player][5].id), 0);
        item = func_8040ECB0(D_800E59E0->window, D_800E5A1A[player][5].id);
        func_8040E958(item, 1);
        item->alpha = 0x23;
        func_8040E958(D_800E59E0->entries[player].item, 0);
        break;
    case 2:
    default:
        for (i = 0; i < 6; i++) {
            func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E59EE[player][i].id), 0);
            item = func_8040ECB0(D_800E59E0->window, D_800E5A1A[player][i].id);
            func_8040E958(item, 1);
            item->alpha = 0x23;
            func_8043B67C(player, i, D_800E59E0->entries[player].values[i]);
        }
        break;
    }
    for (i = 0; i < 5; i++) {
        item = func_8040ECB0(D_800E59E0->window, D_800E5A06[player][i].id);
        func_8040E958(item, 0);
        item->alpha = 0x37;
    }
    item = func_8040ECB0(D_800E59E0->window,
                         D_800E5A1A[player][D_800E59E0->entries[player].column].id);
    func_8040E9A8(item, 1);
    item->alpha = 0x96;
}
