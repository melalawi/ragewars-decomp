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

typedef struct func_802321B8_S1 func_802321B8_S1;
typedef struct func_802321B8_S2 func_802321B8_S2;
typedef struct func_802321B8_S3 func_802321B8_S3;
struct func_802321B8_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x6AC - 0x650 - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x6B0 - 0x6AC - sizeof(s32)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
};
struct func_802321B8_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_802321B8_S3 {
    char pad0[0x14C];
    s32 unk14C;
    char pad14C[0x150 - 0x14C - sizeof(s32)];
    s32 unk150;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_802321B8_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_802321B8_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_802321B8_S1 *)(player))->unk5D4 * 0x190], ((func_802321B8_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_802321B8_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_802321B8_S1 *)(player))->unk5DC, D_800D70E8, func_8022A590(&D_80145040, player),
                          D_800C80BC);
        }
    }
    return ammo;
}

void func_802321B8(void *actor, void *attack) {
    char *player;
    s32 action;

    player = ((func_802321B8_S2 *)(actor))->unk1D8;
    action = D_800CE8DC[((func_802321B8_S1 *)(player))->unk650].action;
    if (func_80222A80(player, ((func_802321B8_S1 *)(player))->unk62E) == 0) {
        ((func_802321B8_S1 *)(player))->unk770 = func_8022F95C(player);
    }
    if ((((func_802321B8_S1 *)(player))->unk6AC & 0x4000) && can_fire(player)) {
        ((func_802321B8_S3 *)(attack))->unk14C = 1;
        if (((func_802321B8_S1 *)(player))->unk6B0 & 0x2000) {
            func_8022B1A8(player, 0);
            ((func_802321B8_S3 *)(attack))->unk150 = 1;
        }
    } else if (((func_802321B8_S3 *)(attack))->unk14C != 0) {
        if (((func_802321B8_S3 *)(attack))->unk150 == 0) {
            func_8022B1A8(player, 1);
        } else {
            ((func_802321B8_S3 *)(attack))->unk150 = 0;
        }
        ((func_802321B8_S3 *)(attack))->unk14C = 0;
    }
    if (func_802301E4(actor, attack) == 0 && !(((func_802321B8_S2 *)(actor))->unk100 & 0x400)) {
        func_80214178(actor, attack, action);
    }
}
