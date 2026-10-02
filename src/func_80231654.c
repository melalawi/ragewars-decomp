/* Runs a player's rapid-fire action: when the current action is not allowed a type 2 request drops to type 1
 * and retries once before the idle state is refreshed; a player flagged 0x4000 that may fire with rounds at
 * 0x144 turns a type 1 request into type 2 (reporting the empty weapon and staying type 1 when firing is
 * not allowed) or any other request into type 1, and holds one round; the barrel spin at 0x11F4 then winds
 * down by 0.5 to 1 while type 1 or up by 0.05 to 2 while type 2 and turns the barrel frame at 0x11F8 (of
 * 8); finally the default action for the player's state starts unless func_802301E4 handled the request
 * or the actor is flagged 0x400. Adapted from func_80231BA0 with the same static fire check. */
#include "shared/weapon_fire.h"
#include "shared/menu_language.h"



extern WeaponActionRecord D_800CE8DC[];
extern char D_80102B00[];
extern u8 D_801462D5;
extern s32 D_800D70E8[];
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

#if defined(VERSION_EU)
extern s32 D_800E0D44[];
#elif defined(VERSION_EU_X)
extern s32 D_800DCC68[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
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
            func_802398F8(&D_80145088, ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, D_80152789), func_8022A590(D_80145040, player),
                          1.0f);
        }
    }
    return ammo;
}

void func_80231654(void *actor, void *arg1) {
    char *player;
    s32 action;
    s32 single;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800CE8DC[((SharedPlayer *)(player))->views5E8.view650_15.unk650].action;
    if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
        if (((WeaponFireState *)(arg1))->mode != 2) {
            goto idle;
        }
        ((WeaponFireState *)(arg1))->mode = 1;
        if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
        idle:
            ((SharedPlayer *)(player))->views5E8.view770_91.unk770 = func_8022F95C(player);
            return;
        }
    }
    if ((((SharedPlayer *)(player))->views5E8.view6B0_46.unk6B0 & 0x4000) && can_fire(player) && ((WeaponFireState *)(arg1))->rounds > 0) {
        single = 1;
        if (((WeaponFireState *)(arg1))->mode == single) {
            ((WeaponFireState *)(arg1))->mode = 2;
            if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
                func_8025DF54(0xD4D);
                if (((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC != 0) {
                    func_802398F8(D_80145040 + 0x48, ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, (u8)D_80145040[0x1809]),
                                  func_8022A590(D_80145040, player), 1.0f);
                }
                ((WeaponFireState *)(arg1))->mode = single;
                goto spin;
            }
        } else {
            ((WeaponFireState *)(arg1))->mode = single;
        }
        ((WeaponFireState *)(arg1))->rounds = single;
    }
spin:
    if (((WeaponFireState *)(arg1))->mode == 1) {
        if (((SharedPlayer *)(player))->views5E8.rapidFireView.spin > 1.0f) {
            ((SharedPlayer *)(player))->views5E8.rapidFireView.spin -= 0.5f;
        }
        if (((SharedPlayer *)(player))->views5E8.rapidFireView.spin < 1.0f) {
            ((SharedPlayer *)(player))->views5E8.rapidFireView.spin = 1.0f;
        }
    } else if (((WeaponFireState *)(arg1))->mode == 2) {
        if (((SharedPlayer *)(player))->views5E8.rapidFireView.spin < 2.0f) {
            ((SharedPlayer *)(player))->views5E8.rapidFireView.spin += 0.05f;
        }
        if (((SharedPlayer *)(player))->views5E8.rapidFireView.spin > 2.0f) {
            ((SharedPlayer *)(player))->views5E8.rapidFireView.spin = 2.0f;
        }
    }
    ((SharedPlayer *)(player))->views5E8.rapidFireView.frame = (((SharedPlayer *)(player))->views5E8.rapidFireView.frame + (s32)((SharedPlayer *)(player))->views5E8.rapidFireView.spin) % 8;
    if (func_802301E4(actor, arg1) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
