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

typedef struct func_802683F0_S1 func_802683F0_S1;
struct func_802683F0_S1 {
    char pad0[0xC];
    f32 unkC;
};

void func_802683F0(char *arg0, s32 arg1, s32 arg2, Triple arg3, Pair arg6)
{
    f32 d = ((func_802683F0_S1 *)(arg0))->unkC - arg3.y;

    if (d < 0.0f ? -d <= D_800C9560 : d <= D_800C9564) {
        fire(arg0, arg1, arg2, arg3, arg6);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C43A0_4 = 76.7999954f;
const float unbake_rodata_800C43A4_4 = 76.7999954f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9560_4 = 76.7999954f;
const float unbake_rodata_800C9564_4 = 76.7999954f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4720_4 = 76.7999954f;
const float unbake_rodata_800C4724_4 = 76.7999954f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4760_4 = 76.7999954f;
const float unbake_rodata_800C4764_4 = 76.7999954f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4470_4 = 76.7999954f;
const float unbake_rodata_800C4474_4 = 76.7999954f;
#endif
