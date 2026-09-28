#include "basetypes.h"

/* Moves the selection of the screen D_800E4F60 on event 1: calls func_8029A73C and steps the
   selection at 0x438 forward while it stays below the count func_8042B334 gives for the category's
   list; in category 0 the first page (below 11) steps forward unless it would reach the count of
   list 0 or 11, and the second page steps back unless it would reach 10. When it moved it plays
   sound 0xE7D, calls func_8042B4C4, clears the words at 0x45C and 0x464, dims the item at 0x43C to
   alpha 0x41, refreshes through func_8042AB70, hides the items at 0x440 and 0x448 and shows the
   one at 0x444. Returns zero. */

struct Item {
    char pad[0x10];
    u8 alpha;
};

struct Screen {
    char pad0[0x434];
    s32 category;
    s32 selection;
    struct Item *item;
    struct Item *left;
    struct Item *right;
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
extern void func_8040E958(struct Item *, s32);

s32 func_8042B824(void *arg0, void *arg1, void *arg2, s32 event) {
    struct Screen *screen;
    s32 changed;
    s32 count;
    s32 next;
    s32 limit;

    func_8029A73C();
    if (event != 1) {
        return 0;
    }
    changed = 0;
    count = func_8042B334(func_8042B474(D_800E4F60->category));
    screen = D_800E4F60;
    if (screen->category != 0) {
        next = screen->selection + 1;
        if (next < count) {
            changed = 1;
            screen->selection = next;
        }
    } else {
        if (screen->selection >= 11) {
            next = screen->selection - 1;
            limit = 10;
        } else {
            limit = func_8042B334(func_8042B474(0));
            screen = D_800E4F60;
            next = screen->selection + 1;
            if (next == limit) {
                goto moved;
            }
            limit = 11;
        }
        if (next != limit) {
            changed = 1;
            screen->selection = next;
        }
    }
moved:
    if (changed != 1) {
        return 0;
    }
    func_8025DF54(0xE7D);
    func_8042B4C4();
    D_800E4F60->word45C = 0;
    D_800E4F60->word464 = 0;
    D_800E4F60->item->alpha = 0x41;
    func_8042AB70();
    func_8040E958(D_800E4F60->left, 0);
    func_8040E958(D_800E4F60->right, 1);
    func_8040E958(D_800E4F60->marker, 0);
    return 0;
}
