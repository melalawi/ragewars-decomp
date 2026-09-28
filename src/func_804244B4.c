#include "basetypes.h"

/* On event 3 with value 0xA, calls func_8029A73C, sets the word at offset 0x18 of the object
   D_800E4600 points to to 0x1C and calls func_8041A4B0 on its first word with 2. Returns zero. */
struct State {
    void *first;
    char pad4[0x18 - 4];
    s32 value;
};

extern struct State *D_800E4600;
extern void func_8029A73C();
extern void func_8041A4B0(void *, s32);

s32 func_804244B4(void *first, void *second, u32 event, s32 value) {
    struct State *state;

    if ((event >> 16) == 3 && value == 0xA) {
        func_8029A73C();
        state = D_800E4600;
        state->value = 0x1C;
        func_8041A4B0(state->first, 2);
    }
    return 0;
}
