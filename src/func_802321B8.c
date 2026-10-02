/* Runs a player's aiming action: refreshes the idle state when the action is not allowed; while the aim
 * flag 0x4000 is held and the weapon may fire (as in func_80231BA0) the attack enters aiming and, for scoped
 * weapons, zooms in through func_8022B1A8; when aiming stops it zooms back out unless the zoom was already
 * cancelled; then the default action for the player's state starts unless func_802301E4 handled the
 * request or the actor is flagged 0x400. Adapted from func_80231BA0 with the aiming state.
 */
#include "shared/weapon_fire.h"
#include "shared/menu_language.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
extern s32 D_800E0D44[], D_800DCC68[];
#endif

extern WeaponActionRecord D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8;
extern f32 D_800C80BC;
extern char D_80145040[];
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
#if defined(VERSION_EU_X)
extern void func_80228E60(void *, s32);
#endif

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
            func_802398F8(&D_80145088, ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8, D_800E0D44, D_800DCC68, D_80152789), func_8022A590(D_80145040, player),
                          D_800C80BC);
        }
    }
    return ammo;
}

void func_802321B8(void *actor, void *attack) {
    char *player;
    s32 action;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800CE8DC[((SharedPlayer *)(player))->views5E8.view650_15.unk650].action;
    if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
        ((SharedPlayer *)(player))->views5E8.view770_91.unk770 = func_8022F95C(player);
    }
    if ((((SharedPlayer *)(player))->views5E8.view6AC_45.unk6AC & 0x4000) && can_fire(player)) {
        ((WeaponFireState *)(attack))->triggered = 1;
        if (((SharedPlayer *)(player))->views5E8.view6B0_46.unk6B0 & 0x2000) {
#if defined(VERSION_EU_X)
            func_80228E60(player, 0);
#else
            func_8022B1A8(player, 0);
#endif
            ((WeaponFireState *)(attack))->alternate = 1;
        }
    } else if (((WeaponFireState *)(attack))->triggered != 0) {
        if (((WeaponFireState *)(attack))->alternate == 0) {
#if defined(VERSION_EU_X)
            func_80228E60(player, 1);
#else
            func_8022B1A8(player, 1);
#endif
        } else {
            ((WeaponFireState *)(attack))->alternate = 0;
        }
        ((WeaponFireState *)(attack))->triggered = 0;
    }
    if (func_802301E4(actor, attack) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
        func_80214178(actor, attack, action);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2EFC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C80BC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2FCC_4 = 1.0f;
#endif
