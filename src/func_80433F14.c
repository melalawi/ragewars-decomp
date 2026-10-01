#include "../include/shared/label.h"
#include "../include/shared/item.h"
#include "../include/shared/player_func_80433F14.h"
#include "../include/shared/block.h"
/* Updates the four player control rows, their visibility, and the selected player label. */

#if defined(VERSION_EU_X)
#define FIRST_ROW_ITEM 0x29F
#elif defined(VERSION_DE)
#define FIRST_ROW_ITEM 0x296
#else
#define FIRST_ROW_ITEM 0x299
#endif









extern struct Shared_Block *D_800E54A4;
extern s32 func_80264634(s32);
extern struct Shared_Item *func_8040ECB0(void *, u16);
extern void func_8040E9D0(struct Shared_Item *, s32);
extern struct Shared_Item *func_8041B87C(void *, s32);

void func_80433F14(s32 player) {
    struct Shared_Item *item;
    struct Shared_Label *label;
    u16 id;
    s32 i;

    i = 0;
    do {
        if (i == 1) goto row_one;
        if (i < 2) {
            if (i == 0) goto row_zero;
            id = FIRST_ROW_ITEM + 6;
            goto row_done;
        }
        if (i == 2) goto row_two;
        id = FIRST_ROW_ITEM + 6;
        goto row_done;
    row_zero:
        id = FIRST_ROW_ITEM;
        goto row_done;
    row_one:
        id = FIRST_ROW_ITEM + 2;
        goto row_done;
    row_two:
        id = FIRST_ROW_ITEM + 4;
    row_done:
        item = func_8040ECB0(D_800E54A4->window, id);
        if (func_80264634(i) == 1) {
            func_8040E9D0(item, 0);
        } else {
            func_8040E9D0(item, 1);
        }
        label = item->label;
        if (player != -1 && item == func_8041B87C(D_800E54A4->list, player)) {
            label->text = D_800E54A4->players[player].slots[D_800E54A4->players[player].chosen];
        } else {
            label->text = 0;
        }
        i += 1;
    } while (i < 4);
}
