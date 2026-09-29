#include "basetypes.h"

/* Route-following check for a computer driver's brain: when it has a target at 0x64, it calls func_8020DC10 if func_802099B4 reports the target reached, and again when its route node at 0xC (unless -1) lies closer than 100 to the position func_8020993C gives; always returns one. */
typedef struct Brain {
    char pad0[0xC];
    s32 node;
    char pad10[0x64 - 0x10];
    void *target;
} Brain;

extern char D_8013B364[];

extern s32 func_802099B4(Brain *, void *);
extern void func_8020DC10(Brain *);
extern void *func_8020993C(Brain *);
extern void *func_8020C994(char *, s32);
extern f32 func_80272768(void *, void *);

s32 func_80210180(Brain *brain) {
    void *pos;

    if (brain->target == 0) {
        return 1;
    }
    if (func_802099B4(brain, brain->target) != 0) {
        func_8020DC10(brain);
    }
    if (brain->node == -1) {
        return 1;
    }
    pos = func_8020993C(brain);
    if (func_80272768(pos, func_8020C994(D_8013B364, brain->node)) < 100.0f) {
        func_8020DC10(brain);
    }
    return 1;
}
