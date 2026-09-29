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

typedef struct func_802307EC_S1 func_802307EC_S1;
typedef struct func_802307EC_S2 func_802307EC_S2;
typedef struct func_802307EC_S3 func_802307EC_S3;
typedef struct func_802307EC_S4 func_802307EC_S4;
typedef struct func_802307EC_S5 func_802307EC_S5;
struct func_802307EC_S1 {
    char pad0[0x5D4];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5F6 - 0x5DC - sizeof(void*)];
    s16 unk5F6;
    char pad5F6[0x62E - 0x5F6 - sizeof(s16)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x698 - 0x650 - sizeof(s16)];
    char* unk698;
    char pad698[0x6B0 - 0x698 - sizeof(char*)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11D8 - 0x770 - sizeof(s16)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
};
struct func_802307EC_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_802307EC_S3 {
    char pad0[0x124];
    f32 unk124;
    char pad124[0x128 - 0x124 - sizeof(f32)];
    f32 unk128;
    char pad128[0x13C - 0x128 - sizeof(f32)];
    s32 unk13C;
};
struct func_802307EC_S4 {
    char pad0[0x48];
    char unk48;
};
struct func_802307EC_S5 {
    char pad0[0x168];
    f32 unk168;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_802307EC_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_802307EC_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_802307EC_S1 *)(player))->unk5D4 * 0x190], ((func_802307EC_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_802307EC_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_802307EC_S1 *)(player))->unk5DC, D_800D70E8[0], func_8022A590(&D_80145040, player),
                          1.0f);
        }
    }
    return ammo;
}

void func_802307EC(void *actor, void *fire) {
    char *player;
    s32 action;
    char *model;

    player = ((func_802307EC_S2 *)(actor))->unk1D8;
    action = D_800CE8DC[((func_802307EC_S1 *)(player))->unk650].action;
    if (func_80222A80(player, ((func_802307EC_S1 *)(player))->unk62E) == 0) {
        ((func_802307EC_S1 *)(player))->unk770 = func_8022F95C(player);
    }
    if ((((func_802307EC_S1 *)(player))->unk6B0 & 0x4000) && can_fire(player) && ((func_802307EC_S3 *)(fire))->unk13C == 1) {
        if (((func_802307EC_S1 *)(player))->unk5F6 >= 50) {
            func_80214178(actor, fire, 5);
            ((func_802307EC_S3 *)(fire))->unk13C = 2;
        } else {
            func_8025DF54(0xD4D);
            if (((func_802307EC_S1 *)(player))->unk5DC != 0) {
                func_802398F8(&((func_802307EC_S4 *)(&D_80145040))->unk48, ((func_802307EC_S1 *)(player))->unk5DC, D_800D70E8[0],
                              func_8022A590(&D_80145040, player), 1.0f);
            }
            ((func_802307EC_S3 *)(fire))->unk13C = 1;
        }
        return;
    }
    if (func_802301E4(actor, fire) == 0) {
        if (!(((func_802307EC_S2 *)(actor))->unk100 & 0x400)) {
            func_80214178(actor, fire, action);
        }
    } else {
        ((func_802307EC_S3 *)(fire))->unk128 += ((func_802307EC_S3 *)(fire))->unk128 * D_800D2988 * 2.0f;
        model = ((func_802307EC_S1 *)(player))->unk698;
        if (!(((func_802307EC_S3 *)(fire))->unk128 < 0.0f ? 1.0f < -((func_802307EC_S3 *)(fire))->unk128 * 1.7904929f
                                                     : 1.0f < ((func_802307EC_S3 *)(fire))->unk128 * 1.7904929f)) {
            if (((func_802307EC_S3 *)(fire))->unk128 < 0.0f) {
                ((func_802307EC_S5 *)(model))->unk168 = -((func_802307EC_S3 *)(fire))->unk128 * 1.7904929f;
            } else {
                ((func_802307EC_S5 *)(model))->unk168 = ((func_802307EC_S3 *)(fire))->unk128 * 1.7904929f;
            }
        } else {
            ((func_802307EC_S5 *)(model))->unk168 = 1.0f;
        }
        ((func_802307EC_S3 *)(fire))->unk124 = ((func_802307EC_S3 *)(fire))->unk128 * D_800D2988 * 2.0f;
        ((func_802307EC_S3 *)(fire))->unk13C = 1;
    }
}
