#include "basetypes.h"

/* Removes an item from a list: runs the item's optional callback at offset 0xC of its handler table
   with the item and the list, clears three words of its state at 0x20, unlinks it through
   func_80255E78 and releases its resource at offset 8 through func_802537D8. */
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

extern void func_80255E78(void *, struct Item *);
extern void func_802537D8(s32, s32);

void func_804434BC(void *list, struct Item *item) {
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
