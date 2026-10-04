#include "span_1000/code_8020570C.h"
#include "span_C76B0/data.h"
#include "types.h"





extern u8 D_801462E5[];
extern u8 D_80142226;
extern f32 D_800C1AC8_de;

extern f32 func_80274A90_de(f32 lo, f32 hi);
extern void func_80214178_de(Actor_func_80205F18_de *actor, Action *action, s32 arg2);
/* Starts an eligible actor action with a random delay and descriptor duration, applies its flags and callback, then clears the pending flag when required. */
void func_80205F18_de(Actor_func_80205F18_de *actor, Action *action) {
    ActionInfo *info = &actor->desc->info;
    if ((info->flags & 0x10) && (D_801462E5[0] == 0 || D_801462E5[1] != 1)) {
        actor->flags &= ~0x100;
        return;
    }
    action->delay = func_80274A90_de(D_800C1AC8_de, D_800C1ACC_de);
    action->timer = 0;
    action->duration = info->duration;
    if (actor->model == 0x644 || (info->flags & 8)) actor->flags &= ~0x2000;
    func_80214178_de(actor, action, 0);
    if (!(info->flags & 0x10) || D_80142226 == 1) return;
    actor->flags &= ~0x100;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C19F8_4 = 45.0f;
const float unbake_rodata_800C19FC_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6BB8_4 = 45.0f;
const float unbake_rodata_800C6BBC_4 = 60.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D68_4 = 45.0f;
const float unbake_rodata_800C1D6C_4 = 60.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1DA8_4 = 45.0f;
const float unbake_rodata_800C1DAC_4 = 60.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1AC8_4 = 45.0f;
const float unbake_rodata_800C1ACC_4 = 60.0f;
#endif
