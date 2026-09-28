/* Runs a player's hold on a carried object: while the player has a view at 0x5DC, one frame in five
   on average it tints the view through func_8023919C with a random alpha below 7.5 and plays effect
   D_80145088 at the view's position; the hold time at 0x1D4 counts down by the frame time D_800D2988,
   and once it runs out or the hold flag at 0x5E4 is clear the player drops flag 0x800000, is released
   through func_802227D0, and lets go of the object at 0x13D8 through func_80216488 (flags 0x30200 when
   the object is a carried actor with option 0x200, 0x4600 otherwise) before forgetting it and applying
   the result through func_80219A40. */
#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct {
    char pad0[0x128];
    Triple position;
} View;

typedef struct {
    u8 type;
    char pad1[0x100 - 0x1];
    s32 flags;
    char pad104[0x122C - 0x104];
    s32 options;
} Held;

typedef struct {
    char pad0[0x100];
    s32 flags;
    char pad104[0x170 - 0x104];
    char body[0x1D4 - 0x170];
    f32 holdTime;
    char pad1D8[0x5DC - 0x1D8];
    View *view;
    char pad5E0[0x5E4 - 0x5E0];
    s32 holding;
    char pad5E8[0x13D8 - 0x5E8];
    Held *held;
} Player;

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

    if (player->view != 0 && 80.0f < func_802745D4(100.0f)) {
        view = player->view;
        alpha = func_802745D4(7.5f);
        level = (u32) alpha;
        func_8023919C(view, 0xFF, 0xFF, 0, 0, (u8) level, 3, 7);
        func_802394AC(&D_80145088, 0.0f, 204.79999f, 0.0f, 512.0f, 0, view->position);
    }
    player->holdTime -= D_800D2988;
    if (player->holdTime <= 0.0f || player->holding == 0) {
        owner = 0;
        if (player->held->type == 1 && (player->held->flags & 0x300000)) {
            owner = player->held;
        }
        player->flags &= ~0x800000;
        func_802227D0(player, player, 2);
        if (owner->options & 0x200) {
            func_80216488(&hit, player->held, 0x30200, 25.599998f, 0x80, 0);
        } else {
            func_80216488(&hit, player->held, 0x4600, 25.599998f, 0x80, 0);
        }
        player->held = 0;
        func_80219A40(player, player->body, &hit);
    }
}
