#include "basetypes.h"

/* Looks up the object at offset 4 of the structure D_800E2830 points to through func_8028FD94
   with zero, then looks up the result again with the argument, and returns that. */
struct State {
    char pad[4];
    void *object;
};

extern struct State *D_800E2830;
extern void *func_8028FD94(void *, s32);

void *func_80403CBC(s32 key) {
    return func_8028FD94(func_8028FD94(D_800E2830->object, 0), key);
}
