#include "basetypes.h"

/* Calls func_802B2378 on the word at offset 0x24 of the structure D_800E28BC points to and
   returns zero. */
struct State {
    char pad[0x24];
    s32 value;
};

extern struct State *D_800E28BC;
extern void func_802B2378(s32);

s32 func_8040A614(void) {
    func_802B2378(D_800E28BC->value);
    return 0;
}
