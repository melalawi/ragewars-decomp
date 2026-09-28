#include "basetypes.h"

/* Resets the number pad of the screen D_800E4400: shows the item at 0x20, hides item 0x3AB of the
   window at 0x8, sets the words at 0x2C, 0x28, 0x30 and 0x34 to 1, 8, 0 and 0, then for keys 0 to
   9 takes item 0x3B8 plus the key, sets its alpha to 0x96 and clears its word at 0x38, and
   finishes through func_804215D8. */

struct Item {
    char pad[0x10];
    u8 alpha;
    char pad11[0x38 - 0x11];
    s32 word38;
};

struct Screen {
    char pad0[0x8];
    void *window;
    char padC[0x20 - 0xC];
    struct Item *pad;
    char pad24[0x28 - 0x24];
    s32 length;
    s32 mode;
    s32 value;
    s32 cursor;
};

extern struct Screen *D_800E4400;
extern void *jtbl_800E15C0[];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(void *, s32);
extern void func_804215D8();

void func_8042144C(void) {
    struct Item *item;
    s32 key;

    func_8040E958(D_800E4400->pad, 1);
    func_8040E958(func_8040ECB0(D_800E4400->window, 0x3AB), 0);
    D_800E4400->mode = 1;
    D_800E4400->length = 8;
    D_800E4400->value = 0;
    D_800E4400->cursor = 0;
    for (key = 0; key < 10; key++) {
        switch (key) {
        case 1:
            item = func_8040ECB0(D_800E4400->window, 0x3B9);
            break;
        case 2:
            item = func_8040ECB0(D_800E4400->window, 0x3BA);
            break;
        case 3:
            item = func_8040ECB0(D_800E4400->window, 0x3BB);
            break;
        case 4:
            item = func_8040ECB0(D_800E4400->window, 0x3BC);
            break;
        case 5:
            item = func_8040ECB0(D_800E4400->window, 0x3BD);
            break;
        case 6:
            item = func_8040ECB0(D_800E4400->window, 0x3BE);
            break;
        case 7:
            item = func_8040ECB0(D_800E4400->window, 0x3BF);
            break;
        case 8:
            item = func_8040ECB0(D_800E4400->window, 0x3C0);
            break;
        case 9:
            item = func_8040ECB0(D_800E4400->window, 0x3C1);
            break;
        case 0:
        default:
            item = func_8040ECB0(D_800E4400->window, 0x3B8);
            break;
        }
        item->alpha = 0x96;
        item->word38 = 0;
    }
    func_804215D8();
}
