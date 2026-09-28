/* Handles a player's charged secondary action: refreshes the idle state when the action is not allowed and
 * picks the effect position (the weapon's at 0x128, else the player's); a player flagged 0x4000 that may
 * fire with a type 1 request marks it type 2 and, once charged to 50, plays sound 0xB23 at that position and
 * takes action 5, otherwise reports the empty weapon and restores type 1; any other request func_802301E4
 * handles becomes type 1 with 0x124 cleared, else the state's default action starts unless the actor is
 * flagged 0x400. Adapted from func_80231BA0 with the same static fire check. */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
extern f32 D_800C80B4;
extern f32 D_800C80B8;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80222A80(void *, s16);
extern s16 func_8022F95C(void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8025DE74(s32, s32, s32, s32, void *, void *);
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
                          D_800C80B4);
        }
    }
    return ammo;
}

void func_80231F5C(void *actor, void *arg1) {
    char *player;
    s32 action;
    s32 *pos;
    s32 type;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        *(s16 *)(player + 0x770) = func_8022F95C(player);
    }
    if (*(void **)(player + 0x5DC) != 0) {
        pos = (s32 *)(*(char **)(player + 0x5DC) + 0x128);
    } else {
        pos = (s32 *)(player + 0x8);
    }
    if ((*(s32 *)(player + 0x6B0) & 0x4000) && can_fire(player) && (type = *(s32 *)((char *)arg1 + 0x13C)) == 1) {
        *(s32 *)((char *)arg1 + 0x13C) = 2;
        if (*(s16 *)(player + 0x5F6) >= 0x32) {
            func_8025DE74(0xB23, pos[0], pos[1], pos[2], pos, player);
            func_80214178(actor, arg1, 5);
        } else {
            func_8025DF54(0xD4D);
            if (*(void **)(player + 0x5DC) != 0) {
                func_802398F8(&D_80145040 + 0x48, *(void **)(player + 0x5DC), D_800D70E8[0],
                              func_8022A590(&D_80145040, player), D_800C80B8);
            }
            *(s32 *)((char *)arg1 + 0x13C) = type;
        }
        return;
    }
    if (func_802301E4(actor, arg1) == 0) {
        if (!(*(s32 *)((char *)actor + 0x100) & 0x400)) {
            func_80214178(actor, arg1, action);
        }
        return;
    }
    *(s32 *)((char *)arg1 + 0x13C) = 1;
    *(s32 *)((char *)arg1 + 0x124) = 0;
}
