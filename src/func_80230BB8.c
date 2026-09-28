/* Advances a player's second charging action: when the trigger is released (as in func_802312B8) or the
 * cooldown is past D_800C8008, it switches to action 2, runs func_8022AF30 and func_8022AFFC, plays sound
 * 0x794 at the player's target or position and pushes the charge at 0x128 by the release amount; otherwise
 * it grows the charge by the charge rate and each time the cue timer at 0x64 runs out adds the cue period
 * back and plays the charge cue (0x3F9 in a multiplayer match without controller, 0x4CB otherwise).
 * Adapted from func_802312B8. */
#include "basetypes.h"

extern f32 D_800C8008;
extern f32 D_800C8010;
extern s32 D_800CF518;
extern f32 D_800D2988;
extern s32 D_801450B8;
extern void func_80214178(void *, void *, s32);
extern s32 func_80222A80(void *, s16);
extern void func_8022AF30(void *);
extern void func_8022AFFC(void *);
extern s32 func_8025DE74(s16, s32, s32, s32, s32 *, s32);
extern void func_802748E0(f32 *, f32, f32);
extern void func_8021A9A4(void *, s32);

static inline s32 released(void *actor, char *player) {
    char *control;
    s32 latch;

    if (*(f32 *)(player + 0x11D8) > D_800C8008) {
        return 1;
    }
    if ((*(s32 *)((char *)actor + 0x100) & 0x300000) && *(s32 *)(player + 0x1450) != 0) {
        control = *(char **)(player + 0x1454);
        latch = *(s32 *)(control + 0x23C);
        *(s32 *)(control + 0x23C) = 0;
        return latch == 0;
    }
    if (!(*(s32 *)(player + 0x6AC) & 0x2000)) {
        return 1;
    }
    if (*(s32 *)(player + 0x11B4) != 0) {
        return 1;
    }
    return func_80222A80(player, *(s16 *)(player + 0x62E)) == 0;
}

void func_80230BB8(void *actor, void *attack) {
    char *player;
    s32 *position;
    char *target;

    player = *(char **)((char *)actor + 0x1D8);
    target = *(char **)(player + 0x5DC);
    if (target != 0) {
        position = (s32 *)(target + 0x128);
    } else {
        position = (s32 *)(player + 8);
    }
    if (released(actor, player)) {
        func_80214178(actor, attack, 2);
        func_8022AF30(player);
        func_8022AFFC(player);
        func_8025DE74(0x794, position[0], position[1], position[2], position, -1);
        func_802748E0((f32 *)((char *)attack + 0x128), (f32)D_800CF518 * *(f32 *)((char *)&D_800C8008 + 4), 0.4f);
        return;
    }
    func_802748E0((f32 *)((char *)attack + 0x128), (f32)D_800CF518 * D_800C8010, 0.4f);
    *(f32 *)((char *)attack + 0x64) -= D_800D2988;
    if (*(f32 *)((char *)attack + 0x64) <= 0.0f) {
        *(f32 *)((char *)attack + 0x64) += *(f32 *)((char *)&D_800C8010 + 4);
        if (*(s32 *)(player + 0x1450) == 0 && D_801450B8 == 1) {
            func_8021A9A4(*(void **)((char *)actor + 0x1D8), 0x3F9);
        } else {
            func_8021A9A4(*(void **)((char *)actor + 0x1D8), 0x4CB);
        }
    }
}
