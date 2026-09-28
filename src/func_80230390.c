/* Runs a weapon's alternate fire for its holder at 0x1D8: when the holder cannot use the alternate
   mode of its weapon (func_80222A80) a pending switch to it at 0x13C is cancelled (unzooming a scoped
   weapon, flag 0x20 of its D_800D052C record) and, if still unusable, the holder picks its next weapon
   at 0x770 through func_8022F95C; otherwise, while the alternate input 0x4000 is held on one of the
   first eighteen weapons and the holder is not stunned, a single player game without infinite
   ammunition checks it through func_8022F54C (clicking and showing the empty message when out), and
   with ammunition the mode toggles between 1 and 2, zooming a scoped weapon in or out, or clicking
   and showing the unavailable message when mode 2 cannot be used; finally, unless func_802301E4
   handled the weapon or the actor has flag 0x400, it fires through func_80214178 with the holder's
   state's fire mode from D_800CE8DC. */
#include "basetypes.h"

typedef struct {
    s16 fireMode;
    char pad2[0x18 - 0x2];
} StateInfo;

typedef struct {
    char pad0[0x14];
    s32 flags;
} Record;

typedef struct {
    char pad0[0x5D4];
    s32 slot;
    char pad5D8[0x5DC - 0x5D8];
    void *view;
    char pad5E0[0x62E - 0x5E0];
    s16 weapon;
    char pad630[0x650 - 0x630];
    s16 state;
    char pad652[0x6B0 - 0x652];
    s32 input;
    char pad6B4[0x770 - 0x6B4];
    s16 nextWeapon;
    char pad772[0x7E8 - 0x772];
    s32 zoomed;
    char pad7EC[0x11D8 - 0x7EC];
    f32 stun;
    char pad11DC[0x1450 - 0x11DC];
    s32 infinite;
} Player;

typedef struct {
    char pad0[0x100];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    Player *holder;
} Actor;

typedef struct {
    char pad0[0x13C];
    s32 mode;
} Fire;

typedef struct {
    char pad0[0x190];
} Profile;

typedef struct {
    char pad0[0x48];
    char empty[1];
} Messages;

extern StateInfo D_800CE8DC[];
extern Record *D_800D052C[];
extern s32 D_800D70E8[];
extern f32 D_800C7FD8;
extern f32 D_800C7FDC;
extern char D_80102B00[];
extern Messages D_80145040;
extern char D_80145088;
extern u8 D_801462D5;
extern s32 func_80222A80(Player *, s16);
extern s16 func_8022F95C(Player *);
extern s32 func_8022F54C(void *, s16);
extern void func_8025DF54(s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern s32 func_802301E4(Actor *, Fire *);
extern void func_80214178(Actor *, Fire *, s16);

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
                          D_800C7FD8);
        }
    }
    return ammo;
}

void func_80230390(Actor *actor, Fire *fire) {
    Player *holder;
    s32 fireMode;
    Record *record;
    s32 ready;

    holder = actor->holder;
    fireMode = D_800CE8DC[holder->state].fireMode;
    record = D_800D052C[holder->weapon];
    if (func_80222A80(holder, holder->weapon) == 0) {
        if (fire->mode != 2) {
            holder->nextWeapon = func_8022F95C(holder);
            return;
        }
        fire->mode = 1;
        if (record->flags & 0x20) {
            holder->zoomed = 0;
        }
        if (func_80222A80(holder, holder->weapon) == 0) {
            holder->nextWeapon = func_8022F95C(holder);
            return;
        }
    }
    if ((holder->input & 0x4000) && holder->weapon < 0x12) {
        ready = can_fire((char *) holder);
        if (ready != 0) {
            if (fire->mode == 1) {
                fire->mode = 2;
                if (func_80222A80(holder, holder->weapon) == 0) {
                    func_8025DF54(0xD4D);
                    if (holder->view != 0) {
                        func_802398F8(D_80145040.empty, holder->view, D_800D70E8[0],
                                      func_8022A590(&D_80145040, holder), D_800C7FDC);
                    }
                    fire->mode = 1;
                } else if (record->flags & 0x20) {
                    holder->zoomed = 1;
                }
            } else {
                fire->mode = 1;
                if (record->flags & 0x20) {
                    holder->zoomed = 0;
                }
            }
        }
    }
    if (func_802301E4(actor, fire) == 0 && !(actor->flags & 0x400)) {
        func_80214178(actor, fire, fireMode);
    }
}
