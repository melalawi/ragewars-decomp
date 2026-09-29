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

typedef struct func_80231654_S1 func_80231654_S1;
typedef struct func_80231654_S2 func_80231654_S2;
typedef struct func_80231654_S3 func_80231654_S3;
struct func_80231654_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk11D8;
    char pad11D8[0x11F4 - 0x11D8 - sizeof(f32)];
    f32 unk11F4;
    char pad11F4[0x11F8 - 0x11F4 - sizeof(f32)];
    s32 unk11F8;
    char pad11F8[0x1450 - 0x11F8 - sizeof(s32)];
    s32 unk1450;
};
struct func_80231654_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_80231654_S3 {
    char pad0[0x13C];
    s32 unk13C;
    char pad13C[0x144 - 0x13C - sizeof(s32)];
    s32 unk144;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_80231654_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_80231654_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_80231654_S1 *)(player))->unk5D4 * 0x190], ((func_80231654_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_80231654_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_80231654_S1 *)(player))->unk5DC, D_800D70E8[0], func_8022A590(&D_80145040, player),
                          1.0f);
        }
    }
    return ammo;
}

void func_80231654(void *actor, void *arg1) {
    char *player;
    s32 action;
    s32 single;

    player = ((func_80231654_S2 *)(actor))->unk1D8;
    action = D_800CE8DC[((func_80231654_S1 *)(player))->unk650].action;
    if (func_80222A80(player, ((func_80231654_S1 *)(player))->unk62E) == 0) {
        if (((func_80231654_S3 *)(arg1))->unk13C != 2) {
            goto idle;
        }
        ((func_80231654_S3 *)(arg1))->unk13C = 1;
        if (func_80222A80(player, ((func_80231654_S1 *)(player))->unk62E) == 0) {
        idle:
            ((func_80231654_S1 *)(player))->unk770 = func_8022F95C(player);
            return;
        }
    }
    if ((((func_80231654_S1 *)(player))->unk6B0 & 0x4000) && can_fire(player) && ((func_80231654_S3 *)(arg1))->unk144 > 0) {
        single = 1;
        if (((func_80231654_S3 *)(arg1))->unk13C == single) {
            ((func_80231654_S3 *)(arg1))->unk13C = 2;
            if (func_80222A80(player, ((func_80231654_S1 *)(player))->unk62E) == 0) {
                func_8025DF54(0xD4D);
                if (((func_80231654_S1 *)(player))->unk5DC != 0) {
                    func_802398F8(&D_80145040 + 0x48, ((func_80231654_S1 *)(player))->unk5DC, D_800D70E8[0],
                                  func_8022A590(&D_80145040, player), 1.0f);
                }
                ((func_80231654_S3 *)(arg1))->unk13C = single;
                goto spin;
            }
        } else {
            ((func_80231654_S3 *)(arg1))->unk13C = single;
        }
        ((func_80231654_S3 *)(arg1))->unk144 = single;
    }
spin:
    if (((func_80231654_S3 *)(arg1))->unk13C == 1) {
        if (((func_80231654_S1 *)(player))->unk11F4 > 1.0f) {
            ((func_80231654_S1 *)(player))->unk11F4 -= 0.5f;
        }
        if (((func_80231654_S1 *)(player))->unk11F4 < 1.0f) {
            ((func_80231654_S1 *)(player))->unk11F4 = 1.0f;
        }
    } else if (((func_80231654_S3 *)(arg1))->unk13C == 2) {
        if (((func_80231654_S1 *)(player))->unk11F4 < 2.0f) {
            ((func_80231654_S1 *)(player))->unk11F4 += 0.05f;
        }
        if (((func_80231654_S1 *)(player))->unk11F4 > 2.0f) {
            ((func_80231654_S1 *)(player))->unk11F4 = 2.0f;
        }
    }
    ((func_80231654_S1 *)(player))->unk11F8 = (((func_80231654_S1 *)(player))->unk11F8 + (s32)((func_80231654_S1 *)(player))->unk11F4) % 8;
    if (func_802301E4(actor, arg1) == 0 && !(((func_80231654_S2 *)(actor))->unk100 & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
