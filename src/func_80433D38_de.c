#include "common/types.h"
#include "span_16E000/code_8042ED84.h"
#include "types.h"
























/* Updates the four player control rows, their visibility, and the selected player label. */

#if defined(VERSION_EU_X)
#define FIRST_ROW_ITEM 0x29F
#elif defined(VERSION_DE)
#define FIRST_ROW_ITEM 0x296
#else
#define FIRST_ROW_ITEM 0x299
#endif









extern struct Shared_Block *D_800E1454_de;
extern s32 func_80264614_de(s32);
extern struct Shared_Item *func_8040EC30_de(void *, u16);
extern void func_8040E950_de(struct Shared_Item *, s32);
extern struct Shared_Item *func_8041B7FC_de(void *, s32);

void func_80433D38_de(s32 player) {
    struct Shared_Item *item;
    struct func_8028469C_S2 *label;
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
        item = func_8040EC30_de(D_800E1454_de->window, id);
        if (func_80264614_de(i) == 1) {
            func_8040E950_de(item, 0);
        } else {
            func_8040E950_de(item, 1);
        }
        label = item->label;
        if (player != -1 && item == func_8041B7FC_de(D_800E1454_de->list, player)) {
            label->unk38 = D_800E1454_de->players[player].slots[D_800E1454_de->players[player].chosen];
        } else {
            label->unk38 = 0;
        }
        i += 1;
    } while (i < 4);
}
