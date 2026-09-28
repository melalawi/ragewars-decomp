#include "basetypes.h"

/* Removes every item from a list until its head is null, running each item's optional callback, clearing three words of its state, unlinking it through func_80255E78 and releasing its resource through func_802537D8. Adapted from func_804434BC with its body wrapped as an inline helper called in a loop over the list head changed. */
struct Handlers {
    char pad[0xC];
    void (*callback)(void *, void *);
};

struct State {
    char pad0[0xB0];
    s32 a;
    s32 b;
    s32 padB8;
    s32 c;
};

struct Item {
    char pad0[8];
    s32 resource;
    char padC[0x14 - 0xC];
    struct Handlers *handlers;
    char pad18[0x20 - 0x18];
    struct State *state;
};

struct List {
    struct Item *head;
};

extern void func_80255E78(struct List *, struct Item *);
extern void func_802537D8(s32, s32);

static inline void remove_item(struct List *list, struct Item *item) {
    struct State *state;

    if (item->handlers->callback != 0) {
        item->handlers->callback(item, list);
    }
    state = item->state;
    state->a = 0;
    state->b = 0;
    state->c = 0;
    func_80255E78(list, item);
    func_802537D8(0, item->resource);
}

void func_80442BD0(struct List *list) {
    struct Item *item;

loop:
    item = list->head;
    if (item != 0) {
        remove_item(list, item);
        goto loop;
    }
}
