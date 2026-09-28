#include "basetypes.h"

/* Walks three lookups through func_8028FD94 from the object at offset 4 of the structure
   D_800E2830 points to: first with zero, then with the argument, and returns the second word of the third lookup, with 2. */
struct State {
    char pad[4];
    void *object;
};

extern struct State *D_800E2830;
extern void *func_8028FD94(void *, s32);

s32 func_80403D4C(s32 key) {
    return ((s32 *) func_8028FD94(func_8028FD94(func_8028FD94(D_800E2830->object, 0), key), 2))[1];
}
