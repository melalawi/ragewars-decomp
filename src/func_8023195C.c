/* Starts a player's secondary action: sets the request type to 1, refreshes the idle state when the current
 * action is not allowed, and when the player is flagged 0x4000, may fire and holds a charge either releases
 * a charged shot (sound 0x42E at the player, action 0xB) once charged past 24 or reports the empty weapon;
 * otherwise the default action for the player's state is started unless func_802301E4 handled the request
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
extern f32 D_800C80A0;
extern f32 D_800C80A4;
extern char D_80145040;
extern char D_80145088;
extern s32 func_80222A80(void *, s16);
extern s16 func_8022F95C(void *);
extern s32 func_8022F54C(void *, s16);
extern s32 func_8025DF54(s32);
extern s32 func_8025DE74(s32, s32, s32, s32, void *, s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern s32 func_802301E4(void *, void *);
extern void func_80214178(void *, void *, s32);

typedef struct func_8023195C_S1 func_8023195C_S1;
typedef struct func_8023195C_S2 func_8023195C_S2;
typedef struct func_8023195C_S3 func_8023195C_S3;
struct func_8023195C_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5D4 - 0x10 - sizeof(s32)];
    s32 unk5D4;
    char pad5D4[0x5DC - 0x5D4 - sizeof(s32)];
    void* unk5DC;
    char pad5DC[0x5E4 - 0x5DC - sizeof(void*)];
    s32 unk5E4;
    char pad5E4[0x5F4 - 0x5E4 - sizeof(s32)];
    s16 unk5F4;
    char pad5F4[0x62E - 0x5F4 - sizeof(s16)];
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
struct func_8023195C_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_8023195C_S3 {
    char pad0[0x13C];
    s32 unk13C;
};

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((func_8023195C_S1 *)(player))->unk11D8 > 0.0f) {
        return 0;
    }
    if (((func_8023195C_S1 *)(player))->unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((func_8023195C_S1 *)(player))->unk5D4 * 0x190], ((func_8023195C_S1 *)(player))->unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((func_8023195C_S1 *)(player))->unk5DC != 0) {
            func_802398F8(&D_80145088, ((func_8023195C_S1 *)(player))->unk5DC, D_800D70E8[0], func_8022A590(&D_80145040, player),
                          D_800C80A0);
        }
    }
    return ammo;
}

void func_8023195C(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = ((func_8023195C_S2 *)(actor))->unk1D8;
    action = D_800CE8DC[((func_8023195C_S1 *)(player))->unk650].action;
    ((func_8023195C_S3 *)(arg1))->unk13C = 1;
    if (func_80222A80(player, ((func_8023195C_S1 *)(player))->unk62E) == 0) {
        ((func_8023195C_S1 *)(player))->unk770 = func_8022F95C(player);
        return;
    }
    if ((((func_8023195C_S1 *)(player))->unk6AC & 0x4000) && can_fire(player) && ((func_8023195C_S1 *)(player))->unk5E4 != 0) {
        if (((func_8023195C_S1 *)(player))->unk5F4 >= 0x19) {
            func_8025DE74(0x42E, ((func_8023195C_S1 *)(player))->unk8, ((func_8023195C_S1 *)(player))->unkC, ((func_8023195C_S1 *)(player))->unk10, player + 0x8,
                          -1);
            func_80214178(actor, arg1, 0xB);
        } else if (((func_8023195C_S1 *)(player))->unk6B0 & 0x4000) {
            func_8025DF54(0xD4D);
            if (((func_8023195C_S1 *)(player))->unk5DC != 0) {
                func_802398F8(&D_80145040 + 0x48, ((func_8023195C_S1 *)(player))->unk5DC, D_800D70E8[0],
                              func_8022A590(&D_80145040, player), D_800C80A4);
            }
        }
        return;
    }
    if (func_802301E4(actor, arg1) == 0 && !(((func_8023195C_S2 *)(actor))->unk100 & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2EE0_4 = 1.0f;
const float unbake_rodata_800C2EE4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C80A0_4 = 1.0f;
const float unbake_rodata_800C80A4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2FB0_4 = 1.0f;
const float unbake_rodata_800C2FB4_4 = 1.0f;
#endif
