#include "basetypes.h"

#ifdef VERSION_EU_MUL
#define VV_0060 0x64
#elif defined(VERSION_DE)
#define VV_0060 0x5E
#else
#define VV_0060 0x60
#endif

/* Calls func_8029A73C; when func_8029AA08 reports 0x60, passes the word at offset 0x28 of the object
   D_800E5690 points to to func_80436988, then sets its word at 0x20 to -1 and calls func_8041A4B0
   on its first word with 2. Returns zero. */
struct State {
    void *first;
    char pad4[0x20 - 4];
    s32 value;
    char pad24[0x28 - 0x24];
    s32 item;
};

extern struct State *D_800E5690;
extern void func_8029A73C();
extern s32 func_8029AA08();
extern void func_80436988(s32);
extern void func_8041A4B0(void *, s32);

s32 func_80436DD4(void) {
    struct State *state;

    func_8029A73C();
    if (func_8029AA08() == VV_0060) {
        func_80436988(D_800E5690->item);
        state = D_800E5690;
        state->value = -1;
        func_8041A4B0(state->first, 2);
    }
    return 0;
}
