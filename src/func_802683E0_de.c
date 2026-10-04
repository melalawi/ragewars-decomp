#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Effect callback that fires only near an object's height: when the event's height lies within D_800C9564 below or D_800C9560 above the object's y at 0xC, it forwards the event to func_80266810_de with mode 1 and flags 0x200. */







extern void func_80266810_de(char *, s32, s32, Triple_func_802683E0_de, struct Shape_func_802764D4_de_2, s32, s32, s32);

static inline void fire(char *arg0, s32 arg1, s32 arg2, Triple_func_802683E0_de arg3, struct Shape_func_802764D4_de_2 arg6)
{
    func_80266810_de(arg0, arg1, arg2, arg3, arg6, 1, 0, 0x200);
}




void func_802683E0_de(char *arg0, s32 arg1, s32 arg2, Triple_func_802683E0_de arg3, struct Shape_func_802764D4_de_2 arg6)
{
    f32 d = ((func_80216BF4_S1 *)(arg0))->unkC - arg3.y;

    if (d < 0.0f ? -d <= D_800C4470_de : d <= D_800C4474_de) {
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
