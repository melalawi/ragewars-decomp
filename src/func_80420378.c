#include "basetypes.h"

/* Activates player p's panel on the screen D_800E42D0: passes p and the frame item id from p's
   36-byte layout row D_800E42D4 to func_8041B768, takes the row's cursor item into the word at 0x8
   of p's 0x4C8-byte entry, places it two units up and left of the frame item, shows it, sets the
   entry's state at 0x14 to one, redraws through func_804204A8 and hides the row's prompt item. */

struct Item {
    char pad[0x14];
    u16 x;
    u16 y;
};

struct Entry {
    void *window;
    char pad4[0x8 - 0x4];
    struct Item *cursor;
    char padC[0x14 - 0xC];
    s32 state;
    char pad18[0x4C8 - 0x18];
};

struct Row {
    s16 pad0;
    s16 frame;
    s16 pad4;
    u16 cursor;
    s16 pad8;
    u16 prompt;
    char padC[36 - 0xC];
};

struct Screen {
    struct Entry entries[4];
};

extern struct Screen *D_800E42D0;
extern struct Row D_800E42D4[];
extern void func_8041B768(void *, s32, s32);
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_804204A8(s32);

void func_80420378(s32 player) {
    struct Item *frame;

    func_8041B768(D_800E42D0->entries[0].window, player, D_800E42D4[player].frame);
    D_800E42D0->entries[player].cursor = func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].cursor);
    frame = func_8040ECB0(D_800E42D0->entries[0].window, (u16)D_800E42D4[player].frame);
    D_800E42D0->entries[player].cursor->x = frame->x - 2;
    D_800E42D0->entries[player].cursor->y = frame->y - 2;
    func_8040E958(D_800E42D0->entries[player].cursor, 1);
    D_800E42D0->entries[player].state = 1;
    func_804204A8(player);
    func_8040E958(func_8040ECB0(D_800E42D0->entries[0].window, D_800E42D4[player].prompt), 0);
}
