#include "basetypes.h"

/* Walks three lookups through func_8028FD94 from the object at offset 4 of the structure
   D_800E2830 points to: first with zero, then with the argument, and returns the third lookup, with 0. */
struct State {
    char pad[4];
    void *object;
};

extern struct State *D_800E2830;
extern void *func_8028FD94(void *, s32);

void *func_80403A90(s32 key) {
    return func_8028FD94(func_8028FD94(func_8028FD94(D_800E2830->object, 0), key), 0);
}
