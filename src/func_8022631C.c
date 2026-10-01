/* Runs a player's hold on a carried object: while the player has a view at 0x5DC, one frame in five
   on average it tints the view through func_8023919C with a random alpha below 7.5 and plays effect
   D_80145088 at the view's position; the hold time at 0x1D4 counts down by the frame time D_800D2988,
   and once it runs out or the hold flag at 0x5E4 is clear the player drops flag 0x800000, is released
   through func_802227D0, and lets go of the object at 0x13D8 through func_80216488 (flags 0x30200 when
   the object is a carried actor with option 0x200, 0x4600 otherwise) before forgetting it and applying
   the result through func_80219A40. */
#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct View {
    char pad0[0x128];
    Triple position;
} View;

typedef struct Held {
    u8 type;
    char pad1[0x100 - 0x1];
    s32 flags;
    char pad104[0x122C - 0x104];
    s32 options;
} Held;


typedef struct {
    char pad0[0x18];
} Throw;

extern f32 D_800D2988;
extern char D_80145088;
extern f32 func_802745D4(f32);
extern void func_8023919C(View *, s32, s32, s32, s32, s32, s32, s32);
extern void func_802394AC(char *, f32, f32, f32, f32, s32, Triple);
extern void func_802227D0(Player *, Player *, s32);
extern void func_80216488(Throw *, Held *, s32, f32, s32, s32);
extern void func_80219A40(Player *, char *, Throw *);

void func_8022631C(Player *player) {
    Throw hit;
    View *view;
    Held *owner;
    f32 alpha;
    s32 level;

    if (player->views5DC.view5DC_2.view != 0 && 80.0f < func_802745D4(100.0f)) {
        view = player->views5DC.view5DC_2.view;
        alpha = func_802745D4(7.5f);
        level = (u32) alpha;
        func_8023919C(view, 0xFF, 0xFF, 0, 0, (u8) level, 3, 7);
        func_802394AC(&D_80145088, 0.0f, 204.79999f, 0.0f, 512.0f, 0, view->position);
    }
    player->views1C.view1D4_21.holdTime -= D_800D2988;
    if (player->views1C.view1D4_21.holdTime <= 0.0f || player->views5E4.view5E4_4.holding == 0) {
        owner = 0;
        if (player->views13D8.view13D8_1.held->type == 1 && (player->views13D8.view13D8_1.held->flags & 0x300000)) {
            owner = player->views13D8.view13D8_1.held;
        }
        player->views1C.view100_9.flags &= ~0x800000;
        func_802227D0(player, player, 2);
        if (owner->options & 0x200) {
            func_80216488(&hit, player->views13D8.view13D8_1.held, 0x30200, 25.599998f, 0x80, 0);
        } else {
            func_80216488(&hit, player->views13D8.view13D8_1.held, 0x4600, 25.599998f, 0x80, 0);
        }
        player->views13D8.view13D8_1.held = 0;
        func_80219A40(player, player->views1C.view170_16.body, &hit);
    }
}
