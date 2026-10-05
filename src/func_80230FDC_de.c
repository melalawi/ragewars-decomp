#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022F3E8.h"
#include "types.h"





































#if defined(VERSION_EU) || defined(VERSION_EU_X)
#if defined(VERSION_EU_X)
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_x_table)[language])
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) ((eu_table)[language])
#endif
#else
#define RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, language) (fixed)
#endif
#define RW_MENU_TEXT(fixed, eu_table, eu_x_table, settings) RW_LOCALIZED_TEXT(fixed, eu_table, eu_x_table, (settings)[0x581])
/* Runs a weapon's two-shot alternate fire for its holder at 0x1D8: when the holder cannot use the
   alternate mode of its weapon (func_80222AA4_de) a pending switch at 0x13C is cancelled and, if still
   unusable, the holder picks its next weapon at 0x770 through func_8022F96C_de; otherwise, while the
   alternate input 0x4000 is held and the weapon can fire (not stunned, and with ammunition in a single
   player game, clicking and showing the empty message when out), mode 1 with a second shot available
   arms mode 2, clicking and showing the unavailable message and falling back to mode 1 when mode 2
   cannot be used, and any other state resets to mode 1; finally, unless func_802301F4_de handled the
   weapon or the actor has flag 0x400, it fires through func_80214178_de with the holder's state's fire
   mode from D_800CE8DC. */



extern WeaponActionRecord D_800C9698[];
extern char D_800FEB00[];
extern u8 D_80142215;
extern s32 D_800D30BC[];
extern char D_80140F80[];
extern char D_80140FC8;
extern s32 func_80222AA4_de(void *, s16);
extern s16 func_8022F96C_de(void *);
extern s32 func_8022F55C_de(void *, s16);
extern s32 func_8025DF34_de(s32);
extern s32 func_8022A5A0_de(void *, void *);
extern void func_80239908_de(void *, void *, s32, s32, f32);
extern s32 func_802301F4_de(void *, void *);
extern void func_80214178_de(void *, void *, s32);

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

    if (((SharedPlayer_func_8022A398_de *)(player))->views5E8.view11D8_147.unk11D8 > 0.0f) {
        return 0;
    }
    if (((SharedPlayer_func_8022A398_de *)(player))->views1450.view1450_0.unk1450 != 0) {
        return 1;
    }
    if (D_80142215 != 1) {
        return 1;
    }
    ammo = func_8022F55C_de(&D_800FEB00[((SharedPlayer_func_8022A398_de *)(player))->views1C.view5D4_45.unk5D4 * 0x190], ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E);
    if (ammo == 0) {
        func_8025DF34_de(0xD4D);
        if (((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC != 0) {
            func_80239908_de(&D_80140FC8, ((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D30BC[0], D_800E0D44, D_800DCC68, D_80152789), func_8022A5A0_de(D_80140F80, player),
                          1.0f);
        }
    }
    return ammo;
}

void func_80230FDC_de(void *actor, void *arg1) {
    char *player;
    s32 action;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800C9698[((SharedPlayer_func_8022A398_de *)(player))->views5E8.view650_15.unk650].action;
    if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
        if (((WeaponFireState *)(arg1))->mode != 2) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view770_91.unk770 = func_8022F96C_de(player);
            return;
        }
        ((WeaponFireState *)(arg1))->mode = 1;
        if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view770_91.unk770 = func_8022F96C_de(player);
            return;
        }
    }
    if ((((SharedPlayer_func_8022A398_de *)(player))->views5E8.view6B0_46.unk6B0 & 0x4000) && can_fire(player)) {
        if (((WeaponFireState *)(arg1))->mode == 1 && can_fire(player)) {
            ((WeaponFireState *)(arg1))->mode = 2;
            if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
                func_8025DF34_de(0xD4D);
                if (((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC != 0) {
                    func_80239908_de((D_80140F80 + 0x48), ((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D30BC[0], D_800E0D44, D_800DCC68, (u8)D_80140F80[0x1809]),
                                  func_8022A5A0_de(D_80140F80, player), 1.0f);
                }
                ((WeaponFireState *)(arg1))->mode = 1;
            }
        } else {
            ((WeaponFireState *)(arg1))->mode = 1;
        }
    }
    if (func_802301F4_de(actor, arg1) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
        func_80214178_de(actor, arg1, action);
    }
}
