#include "basetypes.h"

/* Returns whether any of the words at offsets 0x28, 0x1C and 0x20 of D_801468A0 is set. */
struct State {
    char pad0[0x1C];
    s32 a;
    s32 b;
    char pad24[0x28 - 0x24];
    s32 c;
};

extern struct State D_801468A0;

s32 func_80446B44(void) {
    struct State *state = &D_801468A0;

    return state->c != 0 || state->a != 0 || state->b != 0;
}
