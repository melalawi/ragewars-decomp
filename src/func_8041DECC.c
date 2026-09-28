#include "basetypes.h"

/* Calls func_8029A73C, sets the words at offsets 0xD8 and 0xDC of the object D_800E3590 points to
   to 5 and 4, and returns zero. */
struct State {
    char pad[0xD8];
    s32 first;
    s32 second;
};

extern struct State *D_800E3590;
extern void func_8029A73C();

s32 func_8041DECC(void) {
    func_8029A73C();
    D_800E3590->first = 5;
    D_800E3590->second = 4;
    return 0;
}
