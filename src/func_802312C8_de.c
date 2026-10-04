#include "common/types.h"
#include "span_1000/code_802301E4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Advances a player's charging action: when the trigger is released (controller latch for a controlled
 * player, otherwise flag 0x2000 with no hold and a disallowed action) or the cooldown is past D_800C2F5C_de, it
 * switches to action 2, runs func_8022AF40_de and func_8022B00C_de and plays sound 0x978 at the player's target or
 * position; otherwise it grows the charge at 0x128 by the charge rate and, each time the cue timer at 0x64
 * runs out, restarts it and plays the charge cue (0x3FB in a multiplayer match without controller, 0x4CD
 * otherwise). */


extern s32 D_800CA37C;
extern f32 D_800CD738;
extern s32 D_80140FF8;
extern void func_80214178_de(void *, void *, s32);
extern s32 func_80222AA4_de(void *, s16);
extern void func_8022AF40_de(void *);
extern void func_8022B00C_de(void *);
extern s32 func_8025DE54_de(s16, s32, s32, s32, s32 *, s32);
extern void func_80274870_de(f32 *, f32, f32);
extern void func_8021A9A4_de(void *, s32);















static inline s32 released(void *actor, char *player) {
    char *control;
    s32 latch;

    if (((func_80230BB8_S1 *)(player))->unk11D8 > D_800C2F5C_de) {
        return 1;
    }
    if ((((func_80230BB8_S2 *)(actor))->unk100 & 0x300000) && ((func_80230BB8_S1 *)(player))->unk1450 != 0) {
        control = ((func_80230BB8_S1 *)(player))->unk1454;
        latch = ((func_80230BB8_S3 *)(control))->unk23C;
        ((func_80230BB8_S3 *)(control))->unk23C = 0;
        return latch == 0;
    }
    if (!(((func_80230BB8_S1 *)(player))->unk6AC & 0x2000)) {
        return 1;
    }
    if (((func_80230BB8_S1 *)(player))->unk11B4 != 0) {
        return 1;
    }
    return func_80222AA4_de(player, ((func_80230BB8_S1 *)(player))->unk62E) == 0;
}

void func_802312C8_de(void *actor, void *attack) {
    char *player;
    s32 *position;
    char *target;

    player = ((func_80230BB8_S2 *)(actor))->unk1D8.v0;
    target = ((func_80230BB8_S1 *)(player))->unk5DC;
    if (target != 0) {
        position = &((func_802063EC_S2 *)(target))->unk128;
    } else {
        position = &((func_80230BB8_S1 *)(player))->unk8;
    }
    if (released(actor, player)) {
        func_80214178_de(actor, attack, 2);
        func_8022AF40_de(player);
        func_8022B00C_de(player);
        func_8025DE54_de(0x978, position[0], position[1], position[2], position, -1);
        return;
    }
    func_80274870_de(&((func_80230BB8_S5 *)(attack))->unk128, (f32)D_800CA37C * D_800C2F60_de, 0.4f);
    ((func_80230BB8_S5 *)(attack))->unk64 -= D_800CD738;
    if (((func_80230BB8_S5 *)(attack))->unk64 <= 0.0f) {
        ((func_80230BB8_S5 *)(attack))->unk64 = ((func_802077F4_S2 *)(&D_800C2F60_de))->unk4;
        if (((func_80230BB8_S1 *)(player))->unk1450 == 0 && D_80140FF8 == 1) {
            func_8021A9A4_de(((func_80230BB8_S2 *)(actor))->unk1D8.v1, 0x3FB);
        } else {
            func_8021A9A4_de(((func_80230BB8_S2 *)(actor))->unk1D8.v1, 0x4CD);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E8C_4 = 0.100000001f;
const float unbake_rodata_800C2E90_4 = 0.0174532942f;
const float unbake_rodata_800C2E94_4 = 2.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C804C_4 = 0.100000001f;
const float unbake_rodata_800C8050_4 = 0.0174532942f;
const float unbake_rodata_800C8054_4 = 2.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C320C_4 = 0.100000001f;
const float unbake_rodata_800C3210_4 = 0.0174532942f;
const float unbake_rodata_800C3214_4 = 2.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C324C_4 = 0.100000001f;
const float unbake_rodata_800C3250_4 = 0.0174532942f;
const float unbake_rodata_800C3254_4 = 2.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F5C_4 = 0.100000001f;
const float unbake_rodata_800C2F60_4 = 0.0174532942f;
const float unbake_rodata_800C2F64_4 = 2.5f;
#endif
