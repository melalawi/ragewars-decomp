/* Starts a player's secondary action: sets the request type to 1, refreshes the idle state when the current
 * action is not allowed, and when the player is flagged 0x4000, may fire and holds a charge either releases
 * a charged shot (sound 0x42E at the player, action 0xB) once charged past 24 or reports the empty weapon;
 * otherwise the default action for the player's state is started unless func_802301E4 handled the request
 * or the actor is flagged 0x400. Adapted from func_80231BA0 with the same static fire check. */
#include "shared/weapon_fire.h"
#include "shared/menu_language.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
extern s32 D_800E0D44[], D_800DCC68[];
#endif

extern WeaponActionRecord D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
extern f32 D_800C80A0;
extern f32 D_800C80A4;
extern char D_80145040[];
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

static inline s32 can_fire(char *player) {
    s32 ammo;

    if (((SharedPlayer *)(player))->views5E8.view11D8_147.unk11D8 > 0.0f) {
        return 0;
    }
    if (((SharedPlayer *)(player))->views1450.view1450_0.unk1450 != 0) {
        return 1;
    }
    if (D_801462D5 != 1) {
        return 1;
    }
    ammo = func_8022F54C(&D_80102B00[((SharedPlayer *)(player))->views1C.view5D4_45.unk5D4 * 0x190], ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E);
    if (ammo == 0) {
        func_8025DF54(0xD4D);
        if (((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC != 0) {
            func_802398F8(&D_80145088, ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, D_80152789), func_8022A590(D_80145040, player),
                          D_800C80A0);
        }
    }
    return ammo;
}

void func_8023195C(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800CE8DC[((SharedPlayer *)(player))->views5E8.view650_15.unk650].action;
    ((WeaponFireState *)(arg1))->mode = 1;
    if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
        ((SharedPlayer *)(player))->views5E8.view770_91.unk770 = func_8022F95C(player);
        return;
    }
    if ((((SharedPlayer *)(player))->views5E8.view6AC_45.unk6AC & 0x4000) && can_fire(player) && ((SharedPlayer *)(player))->views5E4.view5E4_0.unk5E4 != 0) {
        if (((SharedPlayer *)(player))->views5E8.view5F4_11.unk5F4[0] >= 0x19) {
            func_8025DE74(0x42E, ((SharedPlayer *)(player))->views0.positionBits.positionWords[0], ((SharedPlayer *)(player))->views0.positionBits.positionWords[1], ((SharedPlayer *)(player))->views0.positionBits.positionWords[2], player + 0x8,
                          -1);
            func_80214178(actor, arg1, 0xB);
        } else if (((SharedPlayer *)(player))->views5E8.view6B0_46.unk6B0 & 0x4000) {
            func_8025DF54(0xD4D);
            if (((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC != 0) {
                func_802398F8(D_80145040 + 0x48, ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, (u8)D_80145040[0x1809]),
                              func_8022A590(D_80145040, player), D_800C80A4);
            }
        }
        return;
    }
    if (func_802301E4(actor, arg1) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
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
