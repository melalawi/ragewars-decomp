#include "basetypes.h"

/* When the fourth argument is one, calls func_8029A73C and, while the counter at offset 0xE8 of
   the object D_800E53C0 points to is positive, decrements it and calls func_8042C1F8. Returns zero. */
struct State {
    char pad[0xE8];
    s32 count;
};

extern struct State *D_800E53C0;
extern void func_8029A73C();
extern void func_8042C1F8();

s32 func_8042DAA4(void *first, void *second, void *third, s32 fourth) {
    struct State *state;

    if (fourth == 1) {
        func_8029A73C();
        state = D_800E53C0;
        if (state->count > 0) {
            state->count--;
            func_8042C1F8();
            return 0;
        }
    }
    return 0;
}
