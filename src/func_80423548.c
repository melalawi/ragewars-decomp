#include "basetypes.h"

/* Calls func_8029A73C, sets the word at offset 0x20 of the object D_800E4510 points to to -1,
   calls func_8041A4B0 on the object's first word with 2 and then func_80423280, returning zero. */
struct State {
    void *first;
    char pad4[0x20 - 4];
    s32 value;
};

extern struct State *D_800E4510;
extern void func_8029A73C();
extern void func_8041A4B0(void *, s32);
extern void func_80423280();

s32 func_80423548(void) {
    struct State *state;

    func_8029A73C();
    state = D_800E4510;
    state->value = -1;
    func_8041A4B0(state->first, 2);
    func_80423280();
    return 0;
}
