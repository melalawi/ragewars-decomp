#include "basetypes.h"

/* Clears the words at offsets 0x78 and 0x54 of D_801468A0, then calls func_80299368 with 0x14
   unless func_8042B108 and func_8042AEB8 both report something, in which case it calls
   func_8042E080. */
struct State {
    char pad0[0x54];
    s32 first;
    char pad58[0x78 - 0x58];
    s32 second;
};

extern struct State D_801468A0;
extern s32 func_8042B108();
extern s32 func_8042AEB8();
extern void func_80299368(s32);
extern void func_8042E080();

void func_8042D1BC(void) {
    struct State *state = &D_801468A0;

    state->second = 0;
    state->first = 0;
    if (func_8042B108() == 0 || func_8042AEB8() == 0) {
        func_80299368(0x14);
    } else {
        func_8042E080();
    }
}
