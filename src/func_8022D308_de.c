#include "span_1000/code_8022D1FC.h"
#include "span_1000/types.h"
#include "types.h"







/* Resets an actor's motion state, advances its wait timer, and fires action 0x13 or 0x14 once the timer passes its limit or the game mode allows it. */



extern void func_802227F4_de(Actor_func_8022D290_de *, Actor_func_8022D290_de *, s32);
extern s32 D_800C9AEC_de;
extern f32 D_800C2DB0_de[];
extern Shared_GameMode D_801427E0;
extern f32 D_800CD738;

void func_8022D308_de(Actor_func_8022D290_de *arg0) {
    f32 wait;
    f32 D_800C7EA0_1;
    Shared_GameMode *mode;

    arg0->flags &= 0xFF7FFFFF;
    arg0->unk_0x001C = 0;
    arg0->unk_0x0020 = 0;
    arg0->unk_0x0024 = 0;
    arg0->unk_0x11D8 = 0.0f;
    arg0->unk_0x11FC = 0;
    arg0->flags |= 0x01000000;
    if (arg0->unk_0x13B4 == &D_800C9AEC_de) {
        arg0->unk_0x086C = 0x5E24;
    } else {
        arg0->unk_0x086C = 1;
    }
    D_800C7EA0_1 = D_800C2DB0_de[1];
    wait = *(f32 *) &arg0->unk_0x0860 + D_800CD738;
    *(f32 *) &arg0->unk_0x0860 = wait;
    if (wait > D_800C7EA0_1) {
        goto fire;
    }
    if ((mode = &D_801427E0)->unk28 != 0 && mode->unk1C != 0) {
        fire:
        if ((mode = &D_801427E0)->unk28 != 0 && 0 == mode->unk1C) {
            func_802227F4_de(arg0, arg0, 0x14);
        } else {
            func_802227F4_de(arg0, arg0, 0x13);
        }

    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CE4_4 = 75.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EA4_4 = 75.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3058_4 = 75.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3098_4 = 75.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DB4_4 = 75.0f;
#endif
