#include "span_16E000/code_8041A0AC.h"
#include "span_16E000/types.h"
#include "types.h"

/* sets the menu's state word at 0x54 to 2 and Walks the item list at offset 8 of a menu and sets the byte at offset 0x10 of every item
   whose kind at 0xE is not 8 to 200. Returns zero. */




s32 func_8041A978_de(struct Menu_func_8041A940_de *menu) {
    struct Item_func_8041A940_de *item;

    menu->state = 2;
    for (item = menu->items; item != 0; item = item->next) {
        if (item->kind != 8) {
            item->alpha = 200;
        }
    }
    return 0;
}
