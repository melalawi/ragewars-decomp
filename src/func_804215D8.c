/* Scrolls the options screen D_800E4400 text: fills its ten lines 0x3B8 to 0x3C1 from the
   D_800D7E40 string table starting at its delay and position counters, advances the position when
   the delay has run out, shows item 0x3AB and hides the cursor once the table's end is reached,
   and counts the delay down. */
#include "basetypes.h"

struct Item {
    char pad0[0x38];
    char *text;
};

struct Screen {
    void *title;
    void *list;
    void *window;
    void *buttons[4];
    char pad1C[0x20 - 0x1C];
    struct Item *cursor;
    char pad24[0x28 - 0x24];
    s32 delay;
    s32 unk2C;
    s32 pos;
    s32 done;
    s32 full;
};

extern struct Screen *D_800E4400;
extern char **D_800D7E40;

extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);

void func_804215D8(void) {
    struct Item *item;
    char *text;
    s32 line;
    s32 index;

    line = D_800E4400->delay;
    index = D_800E4400->pos;
    do {
        text = D_800D7E40[index];
        if (text != 0) {
            index++;
        }
        item = func_8040ECB0(D_800E4400->window, 0x3B8);
        switch (line) {
        case 0:
            item = func_8040ECB0(D_800E4400->window, 0x3B8);
            break;
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
        }
        item->text = text;
        line++;
    } while (line < 10);
    if (D_800D7E40[D_800E4400->pos] != 0) {
        if (D_800E4400->delay == 0) {
            D_800E4400->pos++;
        }
    } else {
        func_8040E958(D_800E4400->cursor, 0);
        func_8040E958(func_8040ECB0(D_800E4400->window, 0x3AB), 1);
        D_800E4400->done = 1;
    }
    if (D_800E4400->delay > 0) {
        D_800E4400->delay--;
    }
}
