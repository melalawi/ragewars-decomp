#include "basetypes.h"

/* Returns the first word of what func_8028FD94 gives for the object at offset 4 of the structure
   D_800E2830 points to, asked with zero. */
struct State {
    char pad[4];
    void *object;
};

extern struct State *D_800E2830;
extern s32 *func_8028FD94(void *, s32);

s32 func_80403A64(void) {
    return *func_8028FD94(D_800E2830->object, 0);
}
