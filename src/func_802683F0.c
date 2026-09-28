#include "basetypes.h"

/* Effect callback that fires only near an object's height: when the event's height lies within D_800C9564 below or D_800C9560 above the object's y at 0xC, it forwards the event to func_80266830 with mode 1 and flags 0x200. */

typedef struct Triple {
    s32 x;
    f32 y;
    s32 z;
} Triple;

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

extern f32 D_800C9560;
extern f32 D_800C9564;
extern void func_80266830(char *, s32, s32, Triple, Pair, s32, s32, s32);

static inline void fire(char *arg0, s32 arg1, s32 arg2, Triple arg3, Pair arg6)
{
    func_80266830(arg0, arg1, arg2, arg3, arg6, 1, 0, 0x200);
}

void func_802683F0(char *arg0, s32 arg1, s32 arg2, Triple arg3, Pair arg6)
{
    f32 d = *(f32 *)(arg0 + 0xC) - arg3.y;

    if (d < 0.0f ? -d <= D_800C9560 : d <= D_800C9564) {
        fire(arg0, arg1, arg2, arg3, arg6);
    }
}
