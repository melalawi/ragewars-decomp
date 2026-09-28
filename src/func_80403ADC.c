#include "basetypes.h"

/* Calls func_8028FD94 on the object at offset 4 of the structure D_800E2830 points to, with 1. */
struct State {
    char pad[4];
    void *object;
};

extern struct State *D_800E2830;
extern void func_8028FD94(void *, s32);

void func_80403ADC(void) {
    func_8028FD94(D_800E2830->object, 1);
}
