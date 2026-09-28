/* Runs a player's rapid-fire action: when the current action is not allowed a type 2 request drops to type 1
 * and retries once before the idle state is refreshed; a player flagged 0x4000 that may fire with rounds at
 * 0x144 turns a type 1 request into type 2 (reporting the empty weapon and staying type 1 when firing is
 * not allowed) or any other request into type 1, and holds one round; the barrel spin at 0x11F4 then winds
 * down by 0.5 to 1 while type 1 or up by 0.05 to 2 while type 2 and turns the barrel frame at 0x11F8 (of
 * 8); finally the default action for the player's state starts unless func_802301E4 handled the request
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
extern char D_80145040;
extern char D_80145088;
extern s32 func_80222A80(void *, s16);
extern s16 func_8022F95C(void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
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
                          1.0f);
        }
    }
    return ammo;
}

void func_80231654(void *actor, void *arg1) {
    char *player;
    s32 action;
    s32 single;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        if (*(s32 *)((char *)arg1 + 0x13C) != 2) {
            goto idle;
        }
        *(s32 *)((char *)arg1 + 0x13C) = 1;
        if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        idle:
            *(s16 *)(player + 0x770) = func_8022F95C(player);
            return;
        }
    }
    if ((*(s32 *)(player + 0x6B0) & 0x4000) && can_fire(player) && *(s32 *)((char *)arg1 + 0x144) > 0) {
        single = 1;
        if (*(s32 *)((char *)arg1 + 0x13C) == single) {
            *(s32 *)((char *)arg1 + 0x13C) = 2;
            if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
                func_8025DF54(0xD4D);
                if (*(void **)(player + 0x5DC) != 0) {
                    func_802398F8(&D_80145040 + 0x48, *(void **)(player + 0x5DC), D_800D70E8[0],
                                  func_8022A590(&D_80145040, player), 1.0f);
                }
                *(s32 *)((char *)arg1 + 0x13C) = single;
                goto spin;
            }
        } else {
            *(s32 *)((char *)arg1 + 0x13C) = single;
        }
        *(s32 *)((char *)arg1 + 0x144) = single;
    }
spin:
    if (*(s32 *)((char *)arg1 + 0x13C) == 1) {
        if (*(f32 *)(player + 0x11F4) > 1.0f) {
            *(f32 *)(player + 0x11F4) -= 0.5f;
        }
        if (*(f32 *)(player + 0x11F4) < 1.0f) {
            *(f32 *)(player + 0x11F4) = 1.0f;
        }
    } else if (*(s32 *)((char *)arg1 + 0x13C) == 2) {
        if (*(f32 *)(player + 0x11F4) < 2.0f) {
            *(f32 *)(player + 0x11F4) += 0.05f;
        }
        if (*(f32 *)(player + 0x11F4) > 2.0f) {
            *(f32 *)(player + 0x11F4) = 2.0f;
        }
    }
    *(s32 *)(player + 0x11F8) = (*(s32 *)(player + 0x11F8) + (s32)*(f32 *)(player + 0x11F4)) % 8;
    if (func_802301E4(actor, arg1) == 0 && !(*(s32 *)((char *)actor + 0x100) & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
