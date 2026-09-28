#include "basetypes.h"

/* When the fourth argument is one, calls func_8029A73C and, while the position at offset 0xE8 of
   the object D_800E53C0 points to is more than four below the limit at 0xEC, advances it and calls
   func_8042C1F8. Returns zero. */
struct State {
    char pad[0xE8];
    s32 position;
    s32 limit;
};

extern struct State *D_800E53C0;
extern void func_8029A73C();
extern void func_8042C1F8();

s32 func_8042DAE8(void *first, void *second, void *third, s32 fourth) {
    struct State *state;
    s32 position;

    if (fourth == 1) {
        func_8029A73C();
        state = D_800E53C0;
        position = state->position;
        if (position + 4 < state->limit) {
            state->position = position + 1;
            func_8042C1F8();
            return 0;
        }
    }
    return 0;
}
