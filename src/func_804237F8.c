#include "basetypes.h"

/* Sets the word at offset 0xC of the object D_800E4514 points to and calls func_802A3358, once:
   nothing happens when the word is already set. Returns zero. */
struct State {
    char pad[0xC];
    s32 started;
};

extern struct State *D_800E4514;
extern void func_802A3358();

s32 func_804237F8(void) {
    struct State *state = D_800E4514;

    if (state->started == 0) {
        state->started = 1;
        func_802A3358();
    }
    return 0;
}
