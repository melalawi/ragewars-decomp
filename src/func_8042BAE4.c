#include "basetypes.h"

/* Moves the screen D_800E4F60 to its next category on event 1: calls func_8029A73C and, unless the
   category at 0x434 is already 3, advances it (from category 0 only while the selection at 0x438
   is below 11, otherwise mirroring the selection to 21 minus it), then plays sound 0xE7D, calls
   func_8042B4C4, clears the words at 0x45C and 0x464, dims the item at 0x43C to alpha 0x41, clamps
   the selection below the count func_8042B334 gives for the category's list, refreshes through
   func_8042AB70 and, when the selection is 0, shows model 0xEA6 plus the category in the view at
   0x308 and moves the marker item at 0x448 to x 0x7C plus 34 per category. Returns zero. */

struct Item {
    char pad[0x10];
    u8 alpha;
    char pad11[0x14 - 0x11];
    s16 x;
};

struct Screen {
    char pad0[0x308];
    char view[0x434 - 0x308];
    s32 category;
    s32 selection;
    struct Item *item;
    char pad440[0x448 - 0x440];
    struct Item *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};

extern struct Screen *D_800E4F60;
extern void func_8029A73C();
extern void func_8025DF54(s32);
extern void func_8042B4C4();
extern void *func_8042B474(s32);
extern s32 func_8042B334(void *);
extern void func_8042AB70();
extern void func_80439E60(void *, s32);
extern void func_8040E958(struct Item *, s32);

s32 func_8042BAE4(void *arg0, void *arg1, void *arg2, s32 event) {
    struct Screen *screen;
    s32 changed;
    s32 count;

    func_8029A73C();
    if (event != 1) {
        return 0;
    }
    screen = D_800E4F60;
    changed = 0;
    if (screen->category != 3) {
        changed = screen->category == 0;
        if (changed) {
            changed = 1;
            if (screen->selection >= 11) {
                screen->selection = 21 - screen->selection;
            } else {
                screen->category = changed;
            }
        } else {
            changed = 1;
            screen->category = screen->category + changed;
        }
    }
    if (changed != 1) {
        return 0;
    }
    func_8025DF54(0xE7D);
    func_8042B4C4();
    D_800E4F60->word45C = 0;
    D_800E4F60->word464 = 0;
    D_800E4F60->item->alpha = 0x41;
    count = func_8042B334(func_8042B474(D_800E4F60->category));
    if (D_800E4F60->selection >= count) {
        D_800E4F60->selection = count - 1;
    }
    func_8042AB70();
    if (D_800E4F60->selection == 0) {
        func_80439E60(D_800E4F60->view, D_800E4F60->category + 0xEA6);
        func_8040E958(D_800E4F60->marker, 1);
        D_800E4F60->marker->x = D_800E4F60->category * 34 + 0x7C;
    }
    return 0;
}
