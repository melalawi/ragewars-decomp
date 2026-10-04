#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "span_1000/types.h"
#include "types.h"




























/* Runs a player's hold on a carried object: while the player has a view at 0x5DC, one frame in five
   on average it tints the view through func_802391AC_de with a random alpha below 7.5 and plays effect
   D_80145088 at the view's position; the hold time at 0x1D4 counts down by the frame time D_800D2988,
   and once it runs out or the hold flag at 0x5E4 is clear the player drops flag 0x800000, is released
   through func_802227F4_de, and lets go of the object at 0x13D8 through func_80216488_de (flags 0x30200 when
   the object is a carried actor with option 0x200, 0x4600 otherwise) before forgetting it and applying
   the result through func_80219A40_de. */









extern f32 D_800CD738;
extern char D_80140FC8;
extern f32 func_80274564_de(f32);
extern void func_802391AC_de(View_func_80226340_de *, s32, s32, s32, s32, s32, s32, s32);
extern void func_802394BC_de(char *, f32, f32, f32, f32, s32, Triple);
extern void func_802227F4_de(SharedPlayer_func_80226340_de *, SharedPlayer_func_80226340_de *, s32);
extern void func_80216488_de(Slot *, Held *, s32, f32, s32, s32);
extern void func_80219A40_de(SharedPlayer_func_80226340_de *, char *, Slot *);

void func_80226340_de(SharedPlayer_func_80226340_de *player) {
    Slot hit;
    View_func_80226340_de *view;
    Held *owner;
    f32 alpha;
    s32 level;

    if (player->views5DC.view5DC_2.view != 0 && 80.0f < func_80274564_de(100.0f)) {
        view = player->views5DC.view5DC_2.view;
        alpha = func_80274564_de(7.5f);
        level = (u32) alpha;
        func_802391AC_de(view, 0xFF, 0xFF, 0, 0, (u8) level, 3, 7);
        func_802394BC_de(&D_80140FC8, 0.0f, 204.79999f, 0.0f, 512.0f, 0, view->position);
    }
    player->views1C.view1D4_21.holdTime -= D_800CD738;
    if (player->views1C.view1D4_21.holdTime <= 0.0f || player->views5E4.view5E4_4.holding == 0) {
        owner = 0;
        if (player->views13D8.view13D8_1.held->type == 1 && (player->views13D8.view13D8_1.held->flags & 0x300000)) {
            owner = player->views13D8.view13D8_1.held;
        }
        player->views1C.view100_9.flags &= ~0x800000;
        func_802227F4_de(player, player, 2);
        if (owner->options & 0x200) {
            func_80216488_de(&hit, player->views13D8.view13D8_1.held, 0x30200, 25.599998f, 0x80, 0);
        } else {
            func_80216488_de(&hit, player->views13D8.view13D8_1.held, 0x4600, 25.599998f, 0x80, 0);
        }
        player->views13D8.view13D8_1.held = 0;
        func_80219A40_de(player, player->views1C.view170_16.body, &hit);
    }
}
