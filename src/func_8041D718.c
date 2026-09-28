/* Fills the player record screen for the selected record D_80102B00[index]: shows the record's
   name in item 0x1F3 and its rank text from func_80424FC8 in item 0x1F2, and formats into the
   screen's text buffers the record's counters at 0x70, 0x6C and 0x74, the value func_804261E4
   reports and the byte at 0x17 for items 0x1FD, 0x1F4, 0x1F6, 0x1F9 and 0x1FA, making each item
   visible through func_8040E958. */
#include "basetypes.h"

struct Item {
    char pad0[0x38];
    char *text;
};

struct Record {
    char name[0x17];
    u8 count;
    char pad18[0x6C - 0x18];
    s32 wins;
    s32 kills;
    s32 deaths;
    char pad78[0x190 - 0x78];
};

struct Screen {
    void *handle;
    char pad4[0x10C - 4];
    s32 index;
    char kills[0x32];
    char wins[0x32];
    char deaths[0x32];
    char score[0x32];
    char count[0x32];
};

extern struct Screen *D_800E3590;
extern struct Record D_80102B00[];
extern char D_800E1538[];
extern char D_800E153C[];

extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_802A1C08(char *, char *, s32);
extern char *func_80424FC8(s32);
extern s32 func_804261E4(s32);

void func_8041D718(void) {
    struct Item *item;
    s32 score;

    item = func_8040ECB0(D_800E3590->handle, 0x1F3);
    func_8040E958(item, 1);
    item->text = D_80102B00[D_800E3590->index].name;
    item = func_8040ECB0(D_800E3590->handle, 0x1F2);
    func_8040E958(item, 1);
    item->text = func_80424FC8(D_800E3590->index);
    item = func_8040ECB0(D_800E3590->handle, 0x1FD);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->kills, D_800E1538, D_80102B00[D_800E3590->index].kills);
    item->text = D_800E3590->kills;
    item = func_8040ECB0(D_800E3590->handle, 0x1F4);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->wins, D_800E1538, D_80102B00[D_800E3590->index].wins);
    item->text = D_800E3590->wins;
    item = func_8040ECB0(D_800E3590->handle, 0x1F6);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->deaths, D_800E1538, D_80102B00[D_800E3590->index].deaths);
    item->text = D_800E3590->deaths;
    score = func_804261E4(D_800E3590->index);
    item = func_8040ECB0(D_800E3590->handle, 0x1F9);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->score, D_800E153C, score);
    item->text = D_800E3590->score;
    item = func_8040ECB0(D_800E3590->handle, 0x1FA);
    func_8040E958(item, 1);
    func_802A1C08(D_800E3590->count, D_800E153C, D_80102B00[D_800E3590->index].count);
    item->text = D_800E3590->count;
}
