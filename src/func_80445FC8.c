#include "basetypes.h"

/* Toggles the owner at offset 0x1C of the second argument between states 1 and 2 through its word
   at 0x5D0, leaving any other state alone; returns zero. */
struct Owner {
    char pad[0x5D0];
    s32 state;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

s32 func_80445FC8(void *unused, struct Holder *holder) {
    struct Owner *owner = holder->owner;

    if (owner == 0) {
        return 0;
    }
    if (owner->state == 1) {
        owner->state = 2;
    } else if (owner->state == 2) {
        owner->state = 1;
    }
    return 0;
}
