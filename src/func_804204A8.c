#include "basetypes.h"

/* Resets player p's choice on the screen D_800E42D0: calls func_8040E958(1) on the three items in
   option cells from 0x18 of p's 36-byte layout row D_800E42D4, dims the item of the current choice at 0x18 of
   p's 0x4C8-byte entry to alpha 0x50 through func_8040E9A8(0) and resets the choice to 0; unless
   the entry's kind at 0x10 is -1 it then calls func_8040E958(0) on as many of those cells as the
   count byte (at least one) at 0x57 plus the index func_8041F248 gives for the kind in p's
   400-byte record of D_80102B00, and highlights the item of the choice with alpha 0x96. Adapted
   from func_80420214. */

struct Item {
    char pad[0x10];
    u8 alpha;
};

struct Entry {
    void *window;
    char pad4[0x10 - 0x4];
    s32 kind;
    char pad14[0x18 - 0x14];
    s32 choice;
    char pad1C[0x4C8 - 0x1C];
};

struct Screen {
    struct Entry entries[4];
};

struct Cell {
    u16 pad;
    u16 id;
};

struct Row {
    char pad0[0xC];
    struct Cell cells[3];
    struct Cell options[3];
};

extern struct Screen *D_800E42D0;
extern struct Row D_800E42D4[];
extern u8 D_80102B57[];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E9A8(struct Item *, s32);
extern void func_8040E958(struct Item *, s32);
extern s32 func_8041F248(s32);

void func_804204A8(s32 player) {
    struct Item *item;
    s32 count;
    s32 i;

    for (i = 0; i < 3; i++) {
        func_8040E958(func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].options[i].id), 1);
    }
    item = func_8040ECB0(D_800E42D0->entries[0].window,
                         D_800E42D4[player].cells[D_800E42D0->entries[player].choice].id);
    func_8040E9A8(item, 0);
    item->alpha = 0x50;
    D_800E42D0->entries[player].choice = 0;
    if (D_800E42D0->entries[player].kind == -1) {
        return;
    }
    count = D_80102B57[func_8041F248(D_800E42D0->entries[player].kind) + player * 400];
    if (count <= 0) {
        count = 1;
    }
    for (i = 0; i < count; i++) {
        func_8040E958(func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].options[i].id), 0);
    }
    item = func_8040ECB0(D_800E42D0->entries[0].window,
                         D_800E42D4[player].cells[D_800E42D0->entries[player].choice].id);
    func_8040E9A8(item, 1);
    item->alpha = 0x96;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DEF42_C[] = {0x00, 0xAD, 0x00, 0x00, 0x00, 0xAF, 0x00, 0x00, 0x00, 0xB1, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E42E2_C[] = {0x00, 0xAD, 0x00, 0x00, 0x00, 0xAF, 0x00, 0x00, 0x00, 0xB1, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0902_C[] = {0x00, 0xAD, 0x00, 0x00, 0x00, 0xAF, 0x00, 0x00, 0x00, 0xB1, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EBAC2_C[] = {0x00, 0xB1, 0x00, 0x00, 0x00, 0xB3, 0x00, 0x00, 0x00, 0xB5, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0292_C[] = {0x00, 0xAB, 0x00, 0x00, 0x00, 0xAD, 0x00, 0x00, 0x00, 0xAF, 0x00, 0x00};
#endif
