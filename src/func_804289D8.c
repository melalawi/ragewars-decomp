#include "basetypes.h"

/* On event 3 with value 0, calls func_8029A73C, sets the word at offset 0x988 of the object
   D_800E4690 points to to 8 and the byte at 0x10 of its item at 0xA50 to 0x5A, and plays sound
   0xE7C through func_8025DF54. Returns zero. */
struct Item {
    char pad[0x10];
    u8 alpha;
};

struct State {
    char pad0[0x988];
    s32 mode;
    char pad98C[0xA50 - 0x98C];
    struct Item *item;
};

extern struct State *D_800E4690;
extern void func_8029A73C();
extern void func_8025DF54(s32);

s32 func_804289D8(void *first, void *second, u32 event, s32 value) {
    struct State *state;

    if ((event >> 16) == 3 && value == 0) {
        func_8029A73C();
        state = D_800E4690;
        state->mode = 8;
        state->item->alpha = 0x5A;
        func_8025DF54(0xE7C);
    }
    return 0;
}
