#include "basetypes.h"

/* Calls func_8029A73C; when the mode word at offset 0x3DC of the object D_800E4F60 points to is 3,
   sets it to 5 and the word at 0x3E0 to 4. Returns zero. */
struct State {
    char pad[0x3DC];
    s32 mode;
    s32 next;
};

extern struct State *D_800E4F60;
extern void func_8029A73C();

s32 func_8042BC34(void) {
    struct State *state;

    func_8029A73C();
    state = D_800E4F60;
    if (state->mode == 3) {
        state->mode = 5;
        state->next = 4;
        return 0;
    }
    return 0;
}
