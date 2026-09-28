#include "basetypes.h"

/* Resets three words of the object D_800E5830 points to: the words at 0x9C and 0xB0 to -1 and
   the word at 0x188 to zero. */
struct State {
    char pad0[0x9C];
    s32 first;
    char padA0[0xB0 - 0xA0];
    s32 second;
    char padB4[0x188 - 0xB4];
    s32 third;
};

extern struct State *D_800E5830;

void func_80438C68(void) {
    struct State *state = D_800E5830;

    state->first = -1;
    state->second = -1;
    state->third = 0;
}
