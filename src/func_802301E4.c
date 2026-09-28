/* Handles a player's attack trigger: nothing while cooling down past D_800C7FD0; the trigger is the
 * controller latch at 0x23C (cleared when read) for a flagged controlled player, else flag 0x2000; when it
 * fires and func_80230048 accepts the attack, a ranged attack (type 2) that may fire takes action 8 and
 * returns 2, otherwise action 4 starts with the combo byte cleared and returns 1. Adapted from
 * func_80231BA0 with the fire check as the same static helper. */
#include "basetypes.h"

extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8;
extern f32 D_800C7FD0;
extern f32 D_800C7FD4;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80230048(void *, void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern void func_80214178(void *, void *, s32);

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (*(f32 *)(player + 0x11D8) > 0.0f) {
        return 0;
    }
    if (*(s32 *)(player + 0x1450) != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[*(s32 *)(player + 0x5D4) * 0x190], *(s16 *)(player + 0x62E));
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (*(void **)(player + 0x5DC) != 0) {
            func_802398F8(&D_80145088, *(void **)(player + 0x5DC), D_800D70E8, func_8022A590(&D_80145040, player),
                          D_800C7FD4);
        }
    }
    return ammo;
}

s32 func_802301E4(void *actor, void *attack) {
    char *player;
    s32 trigger;
    char *control;

    player = *(char **)((char *)actor + 0x1D8);
    if (*(f32 *)(player + 0x11D8) > D_800C7FD0) {
        return 0;
    }
    if ((*(s32 *)((char *)actor + 0x100) & 0x300000) && *(s32 *)(player + 0x1450) != 0) {
        control = *(char **)(player + 0x1454);
        trigger = *(s32 *)(control + 0x23C);
        *(s32 *)(control + 0x23C) = 0;
    } else {
        trigger = *(s32 *)(player + 0x6AC) & 0x2000;
    }
    if (trigger != 0 && func_80230048(actor, attack) != 0) {
        if (*(s32 *)((char *)attack + 0x13C) == 2 && can_fire(player)) {
            func_80214178(actor, attack, 8);
            return 2;
        }
        func_80214178(actor, attack, 4);
        *(u8 *)((char *)attack + 0xCB) = 0;
        return 1;
    }
    return 0;
}
