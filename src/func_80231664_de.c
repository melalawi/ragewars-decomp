#include "common/types.h"
#include "span_1000/code_802301E4.h"
#include "span_1000/types.h"
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
/* Runs a player's rapid-fire action: when the current action is not allowed a type 2 request drops to type 1
 * and retries once before the idle state is refreshed; a player flagged 0x4000 that may fire with rounds at
 * 0x144 turns a type 1 request into type 2 (reporting the empty weapon and staying type 1 when firing is
 * not allowed) or any other request into type 1, and holds one round; the barrel spin at 0x11F4 then winds
 * down by 0.5 to 1 while type 1 or up by 0.05 to 2 while type 2 and turns the barrel frame at 0x11F8 (of
 * 8); finally the default action for the player's state starts unless func_802301F4_de handled the request
 * or the actor is flagged 0x400. Adapted from func_80231BB0_de with the same static fire check. */



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

void func_80231664_de(void *actor, void *arg1) {
    char *player;
    s32 action;
    s32 single;

    player = ((Shared_Actor *)(actor))->entity;
    action = D_800C9698[((SharedPlayer_func_8022A398_de *)(player))->views5E8.view650_15.unk650].action;
    if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
        if (((WeaponFireState *)(arg1))->mode != 2) {
            goto idle;
        }
        ((WeaponFireState *)(arg1))->mode = 1;
        if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
        idle:
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view770_91.unk770 = func_8022F96C_de(player);
            return;
        }
    }
    if ((((SharedPlayer_func_8022A398_de *)(player))->views5E8.view6B0_46.unk6B0 & 0x4000) && can_fire(player) && ((WeaponFireState *)(arg1))->rounds > 0) {
        single = 1;
        if (((WeaponFireState *)(arg1))->mode == single) {
            ((WeaponFireState *)(arg1))->mode = 2;
            if (func_80222AA4_de(player, ((SharedPlayer_func_8022A398_de *)(player))->views5E8.view62E_13.unk62E) == 0) {
                func_8025DF34_de(0xD4D);
                if (((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC != 0) {
                    func_80239908_de(D_80140F80 + 0x48, ((SharedPlayer_func_8022A398_de *)(player))->views5DC.view5DC_0.unk5DC, RW_LOCALIZED_TEXT(D_800D30BC[0], D_800E0D44, D_800DCC68, (u8)D_80140F80[0x1809]),
                                  func_8022A5A0_de(D_80140F80, player), 1.0f);
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
        if (((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin > 1.0f) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin -= 0.5f;
        }
        if (((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin < 1.0f) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin = 1.0f;
        }
    } else if (((WeaponFireState *)(arg1))->mode == 2) {
        if (((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin < 2.0f) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin += 0.05f;
        }
        if (((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin > 2.0f) {
            ((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin = 2.0f;
        }
    }
    ((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.frame = (((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.frame + (s32)((SharedPlayer_func_8022A398_de *)(player))->views5E8.rapidFireView.spin) % 8;
    if (func_802301F4_de(actor, arg1) == 0 && !(((Shared_Actor *)(actor))->weaponFlags & 0x400)) {
        func_80214178_de(actor, arg1, action);
    }
}
