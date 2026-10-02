/* Runs a weapon's two-shot alternate fire for its holder at 0x1D8: when the holder cannot use the
   alternate mode of its weapon (func_80222A80) a pending switch at 0x13C is cancelled and, if still
   unusable, the holder picks its next weapon at 0x770 through func_8022F95C; otherwise, while the
   alternate input 0x4000 is held and the weapon can fire (not stunned, and with ammunition in a single
   player game, clicking and showing the empty message when out), mode 1 with a second shot available
   arms mode 2, clicking and showing the unavailable message and falling back to mode 1 when mode 2
   cannot be used, and any other state resets to mode 1; finally, unless func_802301E4 handled the
   weapon or the actor has flag 0x400, it fires through func_80214178 with the holder's state's fire
   mode from D_800CE8DC. */
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

void func_80230FCC(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800CE8DC[((SharedPlayer *)(player))->views5E8.view650_15.unk650].action;
    if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
        if (((WeaponFireState *)(arg1))->mode != 2) {
            ((SharedPlayer *)(player))->views5E8.view770_91.unk770 = func_8022F95C(player);
            return;
        }
        ((WeaponFireState *)(arg1))->mode = 1;
        if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
            ((SharedPlayer *)(player))->views5E8.view770_91.unk770 = func_8022F95C(player);
            return;
        }
    }
    if ((((SharedPlayer *)(player))->views5E8.view6B0_46.unk6B0 & 0x4000) && can_fire(player)) {
        if (((WeaponFireState *)(arg1))->mode == 1 && can_fire(player)) {
            ((WeaponFireState *)(arg1))->mode = 2;
            if (func_80222A80(player, ((SharedPlayer *)(player))->views5E8.view62E_13.unk62E) == 0) {
                func_8025DF54(0xD4D);
                if (((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC != 0) {
                    func_802398F8((D_80145040 + 0x48), ((SharedPlayer *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, (u8)D_80145040[0x1809]),
                                  func_8022A590(D_80145040, player), 1.0f);
                }
                ((WeaponFireState *)(arg1))->mode = 1;
            }
        } else {
            ((WeaponFireState *)(arg1))->mode = 1;
        }
    }
    if (func_802301E4(actor, arg1) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
        func_80214178(actor, arg1, action);
    }
}
