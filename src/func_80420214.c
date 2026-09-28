#include "basetypes.h"

/* Cycles player p's choice on the screen D_800E42D0: dims the item for the current choice at 0x18
   of p's 0x4C8-byte entry (from p's 36-byte layout row D_800E42D4, cells from 0xC) to alpha 0x50
   through func_8040E9A8(0), advances the choice modulo the count byte (at least one) found at
   0x57 plus the index func_8041F248 gives for the entry's word at 0x10 in p's 400-byte record of
   D_80102B00, highlights the new choice's item with alpha 0x96 and stores it. Written from the
   assembly with the entries as an array member of the screen. */

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
    struct Cell cells[6];
};

extern struct Screen *D_800E42D0;
extern struct Row D_800E42D4[];
extern u8 D_80102B57[];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E9A8(struct Item *, s32);
extern s32 func_8041F248(s32);

void func_80420214(s32 player) {
    struct Item *item;
    s32 choice;
    s32 count;

    choice = D_800E42D0->entries[player].choice;
    item = func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].cells[choice].id);
    func_8040E9A8(item, 0);
    item->alpha = 0x50;
    count = D_80102B57[func_8041F248(D_800E42D0->entries[player].kind) + player * 400];
    if (count <= 0) {
        count = 1;
    }
    choice = (choice + 1) % count;
    item = func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].cells[choice].id);
    func_8040E9A8(item, 1);
    item->alpha = 0x96;
    D_800E42D0->entries[player].choice = choice;
}
