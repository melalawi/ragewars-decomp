#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Plays an effect at a position through func_8025DEC0_de unless the global D_80146894 is set, selecting the target from the given object's type and team masks and choosing the scale from the global option flags. Adapted from func_8026730C_de with the null object test and case 2 removed, a team test for case 0, a mask test for case 1, and the scale constants changed. */








extern f32 D_800C4460_de[];


extern s32 D_801427D4;

extern s32 func_8025DEC0_de(s32 arg0, Vec3 arg1, s32 arg4, s32 arg5,
                         f32 arg6);

void func_8026826C_de(Object_func_8026826C_de *arg0, Object_func_8026826C_de *arg1, s32 arg2, Vec3 arg3,
                   Params_func_8026826C_de arg6) {
    s32 *global = &D_801427D4;
    s32 selected;
    f32 scale;

    scale = D_800C4460_de[1];
    selected = -1;
    if (global[0] != 0) {
        return;
    }

    switch (arg1->type) {
    case 0:
        if (arg0->kind->team != arg6.team) {
            return;
        }
        selected = arg1->value;
        break;
    case 1:
        if (arg1->kind->value == arg1->type) {
            if (global[-371] & 0x40) {
                scale = D_800C4468_de;
            } else if (global[-371] & 0x20) {
                scale = D_800C446C_de;
            }
        }
        if ((arg1->mask & (1 << arg6.team)) == 0) {
            return;
        }
        break;
    }

    func_8025DEC0_de(arg6.value, arg3, 0, selected, scale);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4394_4 = 1.0f;
const float unbake_rodata_800C4398_4 = 2.5f;
const float unbake_rodata_800C439C_4 = 0.349999994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9554_4 = 1.0f;
const float unbake_rodata_800C9558_4 = 2.5f;
const float unbake_rodata_800C955C_4 = 0.349999994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4714_4 = 1.0f;
const float unbake_rodata_800C4718_4 = 2.5f;
const float unbake_rodata_800C471C_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4754_4 = 1.0f;
const float unbake_rodata_800C4758_4 = 2.5f;
const float unbake_rodata_800C475C_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4464_4 = 1.0f;
const float unbake_rodata_800C4468_4 = 2.5f;
const float unbake_rodata_800C446C_4 = 0.349999994f;
#endif
