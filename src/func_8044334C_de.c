#include "span_16E000/code_804434BC.h"
#include "span_16E000/types.h"
#include "types.h"

/* Removes an item from a list: runs the item's optional callback at offset 0xC of its handler table
   with the item and the list, clears three words of its state at 0x20, unlinks it through
   func_80255ED8_de and releases its resource at offset 8 through func_80253838_de. */






extern void func_80255ED8_de(void *, struct Item_func_80442A60_de *);
extern void func_80253838_de(s32, s32);

void func_8044334C_de(void *list, struct Item_func_80442A60_de *item) {
    struct State_func_80442A60_de *state;

    if (item->handlers->callback != 0) {
        item->handlers->callback(item, list);
    }
    state = item->state;
    state->a = 0;
    state->b = 0;
    state->c = 0;
    func_80255ED8_de(list, item);
    func_80253838_de(0, item->resource);
}
