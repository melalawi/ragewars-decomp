#include "basetypes.h"

/* Moves the selection of the screen D_800E4F60 back on event 1: calls func_8029A73C and steps the
   selection at 0x438 back while it is above 0; in category 0 the second page (11 and up) instead
   steps forward while below the count func_8042B334 gives for list 0. When it moved it plays sound
   0xE7D, calls func_8042B4C4, clears the words at 0x45C and 0x464, dims the item at 0x43C to alpha
   0x41 and refreshes through func_8042AB70, and when the selection is then 0 it shows the items at
   0x440 and 0x448, moves the marker at 0x448 to x 0x7C plus 34 per category, hides the item at
   0x444 and shows model 0xEA6 plus the category in the view at 0x308. Returns zero. Adapted from
   func_8042B824 with the step direction, page handling and final item updates changed. */

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
extern void func_80439E60(void *, s32);

s32 func_8042B6B4(void *arg0, void *arg1, void *arg2, s32 event) {
    struct Screen *screen;
    s32 changed;
    s32 next;

    func_8029A73C();
    if (event != 1) {
        return 0;
    }
    screen = D_800E4F60;
    changed = 0;
    if (screen->category != 0) {
        if (screen->selection > 0) {
            changed = 1;
            screen->selection = screen->selection - 1;
        }
    } else if (screen->selection >= 11) {
        next = func_8042B334(func_8042B474(0));
        screen = D_800E4F60;
        if (screen->selection + 1 < next) {
            changed = 1;
            screen->selection = screen->selection + 1;
        }
    } else if (screen->selection > 0) {
        screen->selection = screen->selection - 1;
        changed = 1;
    }
    if (changed != 1) {
        return 0;
    }
    func_8025DF54(0xE7D);
    func_8042B4C4();
    D_800E4F60->word45C = 0;
    D_800E4F60->word464 = 0;
    D_800E4F60->item->alpha = 0x41;
    func_8042AB70();
    if (D_800E4F60->selection != 0) {
        return 0;
    }
    func_8040E958(D_800E4F60->left, 1);
    func_8040E958(D_800E4F60->marker, 1);
    D_800E4F60->marker->x = D_800E4F60->category * 34 + 0x7C;
    func_8040E958(D_800E4F60->right, 0);
    func_80439E60(D_800E4F60->view, D_800E4F60->category + 0xEA6);
    return 0;
}
