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
#include "shared/weapon_fire.h"
#include "shared/menu_language.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
extern s32 D_800E0D44[], D_800DCC68[];
#endif

extern WeaponActionRecord D_800CE8DC[];
extern WeaponDefinition *D_800D052C[];
extern s32 D_800D70E8[];
extern f32 D_800C7FD8;
extern f32 D_800C7FDC;
extern char D_80102B00[];
extern char D_80145040[];
extern char D_80145088;
extern u8 D_801462D5;
extern s32 func_80222A80(SharedPlayer *, s16);
extern s16 func_8022F95C(SharedPlayer *);
extern s32 func_8022F54C(void *, s16);
extern void func_8025DF54(s32);
extern s32 func_8022A590(void *, void *);
extern void func_802398F8(void *, void *, s32, s32, f32);
extern s32 func_802301E4(Shared_Actor *, WeaponFireState *);
extern void func_80214178(Shared_Actor *, WeaponFireState *, s16);

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
                          D_800C7FD8);
        }
    }
    return ammo;
}

void func_80230390(Shared_Actor *actor, WeaponFireState *fire) {
    SharedPlayer *holder;
    s32 fireMode;
    WeaponDefinition *record;
    s32 ready;

    holder = (SharedPlayer *)actor->entity;
    fireMode = D_800CE8DC[holder->views5E8.view650_15.unk650].action;
    record = D_800D052C[holder->views5E8.view62E_13.unk62E];
    if (func_80222A80(holder, holder->views5E8.view62E_13.unk62E) == 0) {
        if (fire->mode != 2) {
            holder->views5E8.view770_91.unk770 = func_8022F95C(holder);
            return;
        }
        fire->mode = 1;
        if (record->flags & 0x20) {
            holder->views5E8.view7E8_106.zoomed = 0;
        }
        if (func_80222A80(holder, holder->views5E8.view62E_13.unk62E) == 0) {
            holder->views5E8.view770_91.unk770 = func_8022F95C(holder);
            return;
        }
    }
    if ((holder->views5E8.view6B0_46.unk6B0 & 0x4000) && holder->views5E8.view62E_13.unk62E < 0x12) {
        ready = can_fire((char *)holder);
        if (ready != 0) {
            if (fire->mode == 1) {
                fire->mode = 2;
                if (func_80222A80(holder, holder->views5E8.view62E_13.unk62E) == 0) {
                    func_8025DF54(0xD4D);
                    if (holder->views5DC.view5DC_0.unk5DC != 0) {
                        func_802398F8(D_80145040 + 0x48, holder->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D70E8[0], D_800E0D44, D_800DCC68, (u8)D_80145040[0x1809]),
                                      func_8022A590(D_80145040, holder), D_800C7FDC);
                    }
                    fire->mode = 1;
                } else if (record->flags & 0x20) {
                    holder->views5E8.view7E8_106.zoomed = 1;
                }
            } else {
                fire->mode = 1;
                if (record->flags & 0x20) {
                    holder->views5E8.view7E8_106.zoomed = 0;
                }
            }
        }
    }
    if (func_802301E4(actor, fire) == 0 && !(actor->weaponFlags & 0x400)) {
        func_80214178(actor, fire, fireMode);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E18_4 = 1.0f;
const float unbake_rodata_800C2E1C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7FD8_4 = 1.0f;
const float unbake_rodata_800C7FDC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2EE8_4 = 1.0f;
const float unbake_rodata_800C2EEC_4 = 1.0f;
#endif
