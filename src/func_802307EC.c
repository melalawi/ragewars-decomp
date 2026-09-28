/* Runs a charge weapon's fire for its holder at 0x1D8: picks the holder's next weapon at 0x770 through
   func_8022F95C when the current one cannot be used; while the fire input 0x4000 is held on a weapon
   that can fire (not stunned, with ammunition, clicking and showing the empty message otherwise) in
   ready state 1 at 0x13C, a full charge of at least 50 at 0x5F6 fires action 5 and enters state 2,
   while a partial charge clicks and shows the not-ready message; otherwise it fires the state's action
   from D_800CE8DC unless func_802301E4 handles the weapon or the actor has flag 0x400, and when
   func_802301E4 handles it the barrel spin at 0x128 grows, drives the model's animation speed at 0x168
   (capped at 1), returns the weapon to state 1 and sets the spin step at 0x124. */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
extern f32 D_800D2988;
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

void func_802307EC(void *actor, void *fire) {
    char *player;
    s32 action;
    char *model;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        *(s16 *)(player + 0x770) = func_8022F95C(player);
    }
    if ((*(s32 *)(player + 0x6B0) & 0x4000) && can_fire(player) && *(s32 *)((char *)fire + 0x13C) == 1) {
        if (*(s16 *)(player + 0x5F6) >= 50) {
            func_80214178(actor, fire, 5);
            *(s32 *)((char *)fire + 0x13C) = 2;
        } else {
            func_8025DF54(0xD4D);
            if (*(void **)(player + 0x5DC) != 0) {
                func_802398F8((char *)&D_80145040 + 0x48, *(void **)(player + 0x5DC), D_800D70E8[0],
                              func_8022A590(&D_80145040, player), 1.0f);
            }
            *(s32 *)((char *)fire + 0x13C) = 1;
        }
        return;
    }
    if (func_802301E4(actor, fire) == 0) {
        if (!(*(s32 *)((char *)actor + 0x100) & 0x400)) {
            func_80214178(actor, fire, action);
        }
    } else {
        *(f32 *)((char *)fire + 0x128) += *(f32 *)((char *)fire + 0x128) * D_800D2988 * 2.0f;
        model = *(char **)(player + 0x698);
        if (!(*(f32 *)((char *)fire + 0x128) < 0.0f ? 1.0f < -*(f32 *)((char *)fire + 0x128) * 1.7904929f
                                                     : 1.0f < *(f32 *)((char *)fire + 0x128) * 1.7904929f)) {
            if (*(f32 *)((char *)fire + 0x128) < 0.0f) {
                *(f32 *)(model + 0x168) = -*(f32 *)((char *)fire + 0x128) * 1.7904929f;
            } else {
                *(f32 *)(model + 0x168) = *(f32 *)((char *)fire + 0x128) * 1.7904929f;
            }
        } else {
            *(f32 *)(model + 0x168) = 1.0f;
        }
        *(f32 *)((char *)fire + 0x124) = *(f32 *)((char *)fire + 0x128) * D_800D2988 * 2.0f;
        *(s32 *)((char *)fire + 0x13C) = 1;
    }
}
