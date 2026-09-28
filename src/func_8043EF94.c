#include "basetypes.h"

/* Counts the timer at offset 0x10 of D_801468A0 down by D_800D2988, stopping at zero, and returns
   zero. */
struct State {
    char pad[0x10];
    f32 timer;
};

extern struct State D_801468A0;
extern f32 D_800D2988;

s32 func_8043EF94(void) {
    struct State *state = &D_801468A0;
    f32 timer = state->timer - D_800D2988;

    state->timer = timer;
    if (timer < 0.0f) {
        state->timer = 0.0f;
    }
    return 0;
}
