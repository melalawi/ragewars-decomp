/* Continues a player's secondary action: refreshes the idle state when the current action is not allowed;
 * a player flagged 0x4000 that may fire with a type 1 request takes action 5 and marks the request type 2,
 * unless it is in state 4 with a charge under 48, which reports the empty weapon; otherwise a request
 * func_802301E4 handles is marked type 1 and the default action for the player's state is started unless
 * the actor is flagged 0x400. Adapted from func_80231BA0 with the same static fire check. */
#include "basetypes.h"

typedef struct {
    s16 action;
    char pad2[0x16];
} StateInfo;

extern StateInfo D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
extern f32 D_800C80AC;
extern f32 D_800C80B0;
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

typedef struct func_80231D38_S1 func_80231D38_S1;
typedef struct func_80231D38_S2 func_80231D38_S2;
typedef struct func_80231D38_S3 func_80231D38_S3;
struct func_80231D38_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5F4 - 0x5DC - sizeof(void*)];
    s16 unk5F4;
    char pad5F4[0x62E - 0x5F4 - sizeof(s16)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
};
struct func_80231D38_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_80231D38_S3 {
    char pad0[0x13C];
    s32 unk13C;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_80231D38_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_80231D38_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_80231D38_S1 *)(player))->unk5D4 * 0x190], ((func_80231D38_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_80231D38_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_80231D38_S1 *)(player))->unk5DC, D_800D70E8[0], func_8022A590(&D_80145040, player),
                          D_800C80AC);
        }
    }
    return ammo;
}

void func_80231D38(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = ((func_80231D38_S2 *)(actor))->unk1D8;
    action = D_800CE8DC[((func_80231D38_S1 *)(player))->unk650].action;
    if (func_80222A80(player, ((func_80231D38_S1 *)(player))->unk62E) == 0) {
        ((func_80231D38_S1 *)(player))->unk770 = func_8022F95C(player);
    }
    if ((((func_80231D38_S1 *)(player))->unk6B0 & 0x4000) && can_fire(player) && ((func_80231D38_S3 *)(arg1))->unk13C == 1) {
        if (((func_80231D38_S1 *)(player))->unk5F4 >= 0x30 || ((func_80231D38_S1 *)(player))->unk62E != 4) {
            func_80214178(actor, arg1, 5);
            ((func_80231D38_S3 *)(arg1))->unk13C = 2;
            return;
        } else {
            func_8025DF54(0xD4D);
            if (((func_80231D38_S1 *)(player))->unk5DC != 0) {
                func_802398F8(&D_80145040 + 0x48, ((func_80231D38_S1 *)(player))->unk5DC, D_800D70E8[0],
                              func_8022A590(&D_80145040, player), D_800C80B0);
            }
        }
        return;
    }
    if (func_802301E4(actor, arg1) == 0) {
        if (!(((func_80231D38_S2 *)(actor))->unk100 & 0x400)) {
            func_80214178(actor, arg1, action);
        }
        return;
    }
    ((func_80231D38_S3 *)(arg1))->unk13C = 1;
}
