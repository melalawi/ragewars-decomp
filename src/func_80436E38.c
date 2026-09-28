#include "basetypes.h"

/* Calls func_8029A73C, then sets the word at offset 0x20 of the object D_800E5690 points to to -1 and
   calls func_8041A4B0 on the object's first word with 2, returning zero. */
struct State {
    void *first;
    char pad4[0x20 - 4];
    s32 value;
};

extern struct State *D_800E5690;
extern void func_8029A73C();
extern void func_8041A4B0(void *, s32);

s32 func_80436E38(void) {
    struct State *state;

    func_8029A73C();
    state = D_800E5690;
    state->value = -1;
    func_8041A4B0(state->first, 2);
    return 0;
}
