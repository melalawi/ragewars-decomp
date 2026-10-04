#include "span_16E000/code_80445CE8.h"
#include "span_16E000/types.h"
#include "types.h"

/* Toggles the owner at offset 0x1C of the second argument between states 1 and 2 through its word
   at 0x5D0, leaving any other state alone; returns zero. */




s32 func_80445FC8_us_rev1(void *unused, struct Holder *holder) {
    struct Owner_func_8043DB04_de *owner = holder->owner;

    if (owner == 0) {
        return 0;
    }
    if (owner->value == 1) {
        owner->value = 2;
    } else if (owner->value == 2) {
        owner->value = 1;
    }
    return 0;
}
