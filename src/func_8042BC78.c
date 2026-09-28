#include "basetypes.h"

/* Calls func_8042ACB0 when the word at offset 0x3DC of the object D_800E4F60 points to is 3, and
   returns zero. */
struct State {
    char pad[0x3DC];
    s32 mode;
};

extern struct State *D_800E4F60;
extern void func_8042ACB0();

s32 func_8042BC78(void) {
    if (D_800E4F60->mode == 3) {
        func_8042ACB0();
        return 0;
    }
    return 0;
}
