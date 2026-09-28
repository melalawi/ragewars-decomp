#include "basetypes.h"

/** Report whether the tutorial-progress flags (at 0x1c, 0x20, 0x28) hold any nonzero bit. */
typedef struct {
    char pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    char pad24[4];
    s32 unk28;
} State;

extern State D_801468A0;

s32 func_8043E2E0(void) {
    s32 var_a0;
    State *state;

    state = &D_801468A0;
    var_a0 = 0;
    if ((state->unk28 != 0) || (state->unk1C != 0) || (state->unk20 != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}
