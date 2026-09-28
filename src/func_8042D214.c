#include "basetypes.h"

/* Clears the words at offsets 0x78 and 0x54 of D_801468A0 and calls func_80299368 with 0xF. */
struct State {
    char pad0[0x54];
    s32 first;
    char pad58[0x78 - 0x58];
    s32 second;
};

extern struct State D_801468A0;
extern void func_80299368(s32);

void func_8042D214(void) {
    struct State *state = &D_801468A0;

    state->second = 0;
    state->first = 0;
    func_80299368(0xF);
}
