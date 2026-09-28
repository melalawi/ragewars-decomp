#include "basetypes.h"

#if defined(VERSION_DE)
#define VALUE_73 0x71
#elif defined(VERSION_EU_MUL)
#define VALUE_73 0x77
#else
#define VALUE_73 0x73
#endif

/* Calls func_8029A73C; when func_8029AA08 reports 0x73, sets the word at offset 0x14 of the object
   D_800E58A0 points to to -1 and calls func_8041A4B0 on its first word with 2. Returns zero. */
struct State {
    void *first;
    char pad4[0x14 - 4];
    s32 value;
};

extern struct State *D_800E58A0;
extern void func_8029A73C();
extern s32 func_8029AA08();
extern void func_8041A4B0(void *, s32);

s32 func_80439308(void) {
    struct State *state;

    func_8029A73C();
    if (func_8029AA08() == VALUE_73) {
        state = D_800E58A0;
        state->value = -1;
        func_8041A4B0(state->first, 2);
    }
    return 0;
}
