/* Runs a weapon's two-shot alternate fire for its holder at 0x1D8: when the holder cannot use the
   alternate mode of its weapon (func_80222A80) a pending switch at 0x13C is cancelled and, if still
   unusable, the holder picks its next weapon at 0x770 through func_8022F95C; otherwise, while the
   alternate input 0x4000 is held and the weapon can fire (not stunned, and with ammunition in a single
   player game, clicking and showing the empty message when out), mode 1 with a second shot available
   arms mode 2, clicking and showing the unavailable message and falling back to mode 1 when mode 2
   cannot be used, and any other state resets to mode 1; finally, unless func_802301E4 handled the
   weapon or the actor has flag 0x400, it fires through func_80214178 with the holder's state's fire
   mode from D_800CE8DC. */
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

void func_80230FCC(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = *(char **)((char *)actor + 0x1D8);
    action = D_800CE8DC[*(s16 *)(player + 0x650)].action;
    if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
        if (*(s32 *)((char *)arg1 + 0x13C) != 2) {
            *(s16 *)(player + 0x770) = func_8022F95C(player);
            return;
        }
        *(s32 *)((char *)arg1 + 0x13C) = 1;
        if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
            *(s16 *)(player + 0x770) = func_8022F95C(player);
            return;
        }
    }
    if ((*(s32 *)(player + 0x6B0) & 0x4000) && can_fire(player)) {
        if (*(s32 *)((char *)arg1 + 0x13C) == 1 && can_fire(player)) {
            *(s32 *)((char *)arg1 + 0x13C) = 2;
            if (func_80222A80(player, *(s16 *)(player + 0x62E)) == 0) {
                func_8025DF54(0xD4D);
                if (*(void **)(player + 0x5DC) != 0) {
                    func_802398F8((char *)&D_80145040 + 0x48, *(void **)(player + 0x5DC), D_800D70E8[0],
                                  func_8022A590(&D_80145040, player), 1.0f);
                }
                *(s32 *)((char *)arg1 + 0x13C) = 1;
            }
        } else {
            *(s32 *)((char *)arg1 + 0x13C) = 1;
        }
    }
    if (func_802301E4(actor, arg1) == 0 && !(*(s32 *)((char *)actor + 0x100) & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
