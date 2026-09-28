/* Runs a player's aiming action: refreshes the idle state when the action is not allowed; while the aim
 * flag 0x4000 is held and the weapon may fire (as in func_80231BA0) the attack enters aiming and, for scoped
 * weapons, zooms in through func_8022B1A8; when aiming stops it zooms back out unless the zoom was already
 * cancelled; then the default action for the player's state starts unless func_802301E4 handled the
 * request or the actor is flagged 0x400. Adapted from func_80231BA0 with the aiming state.
 */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8;
extern f32 D_800C80BC;
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
extern void func_8022B1A8(void *, s32);

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
                          D_800C80BC);
        }
    }
    return ammo;
}

void func_802321B8(void *actor, void *attack) {
    char *player;
    s32 action;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        *(s16 *)(player + 0x770) = func_8022F95C(player);
    }
    if ((*(s32 *)(player + 0x6AC) & 0x4000) && can_fire(player)) {
        *(s32 *)((char *)attack + 0x14C) = 1;
        if (*(s32 *)(player + 0x6B0) & 0x2000) {
            func_8022B1A8(player, 0);
            *(s32 *)((char *)attack + 0x150) = 1;
        }
    } else if (*(s32 *)((char *)attack + 0x14C) != 0) {
        if (*(s32 *)((char *)attack + 0x150) == 0) {
            func_8022B1A8(player, 1);
        } else {
            *(s32 *)((char *)attack + 0x150) = 0;
        }
        *(s32 *)((char *)attack + 0x14C) = 0;
    }
    if (func_802301E4(actor, attack) == 0 && !(*(s32 *)((char *)actor + 0x100) & 0x400)) {
        func_80214178(actor, attack, action);
    }
}
