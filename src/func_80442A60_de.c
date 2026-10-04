#include "span_16E000/code_8044239C.h"
#include "span_16E000/types.h"
#include "types.h"

/* Removes every item from a list until its head is null, running each item's optional callback, clearing three words of its state, unlinking it through func_80255ED8_de and releasing its resource through func_80253838_de. Adapted from func_8044334C_de with its body wrapped as an inline helper called in a loop over the list head changed. */








extern void func_80255ED8_de(struct List_func_80442A60_de *, struct Item_func_80442A60_de *);
extern void func_80253838_de(s32, s32);

static inline void remove_item(struct List_func_80442A60_de *list, struct Item_func_80442A60_de *item) {
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

void func_80442A60_de(struct List_func_80442A60_de *list) {
    struct Item_func_80442A60_de *item;

loop:
    item = list->head;
    if (item != 0) {
        remove_item(list, item);
        goto loop;
    }
}
