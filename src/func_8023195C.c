/* Starts a player's secondary action: sets the request type to 1, refreshes the idle state when the current
 * action is not allowed, and when the player is flagged 0x4000, may fire and holds a charge either releases
 * a charged shot (sound 0x42E at the player, action 0xB) once charged past 24 or reports the empty weapon;
 * otherwise the default action for the player's state is started unless func_802301E4 handled the request
 * or the actor is flagged 0x400. Adapted from func_80231BA0 with the same static fire check. */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
extern f32 D_800C80A0;
extern f32 D_800C80A4;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80222A80(void *, s16);
extern s16 func_8022F95C(void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8025DE74(s32, s32, s32, s32, void *, s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern s32 func_802301E4(void *, void *);
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
            func_802398F8(&D_80145088, *(void **)(player + 0x5DC), D_800D70E8[0], func_8022A590(&D_80145040, player),
                          D_800C80A0);
        }
    }
    return ammo;
}

void func_8023195C(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    *(s32 *)((char *)arg1 + 0x13C) = 1;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        *(s16 *)(player + 0x770) = func_8022F95C(player);
        return;
    }
    if ((*(s32 *)(player + 0x6AC) & 0x4000) && can_fire(player) && *(s32 *)(player + 0x5E4) != 0) {
        if (*(s16 *)(player + 0x5F4) >= 0x19) {
            func_8025DE74(0x42E, *(s32 *)(player + 0x8), *(s32 *)(player + 0xC), *(s32 *)(player + 0x10), player + 0x8,
                          -1);
            func_80214178(actor, arg1, 0xB);
        } else if (*(s32 *)(player + 0x6B0) & 0x4000) {
            func_8025DF54(0xD4D);
            if (*(void **)(player + 0x5DC) != 0) {
                func_802398F8(&D_80145040 + 0x48, *(void **)(player + 0x5DC), D_800D70E8[0],
                              func_8022A590(&D_80145040, player), D_800C80A4);
            }
        }
        return;
    }
    if (func_802301E4(actor, arg1) == 0 && !(*(s32 *)((char *)actor + 0x100) & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
