#include "basetypes.h"

/* Calls func_8029A73C, then func_804217EC when the word at offset 0x34 of the object D_800E4400
   points to is clear, or func_8041A4B0 on its first word with 2 and func_80421158 otherwise.
   Returns zero. */
struct State {
    void *first;
    char pad4[0x34 - 4];
    s32 ready;
};

extern struct State *D_800E4400;
extern void func_8029A73C();
extern void func_804217EC();
extern void func_8041A4B0(void *, s32);
extern void func_80421158();

s32 func_80421A30(void) {
    struct State *state;

    func_8029A73C();
    state = D_800E4400;
    if (state->ready == 0) {
        func_804217EC();
    } else {
        func_8041A4B0(state->first, 2);
        func_80421158();
    }
    return 0;
}
