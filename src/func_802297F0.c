/* Stuns a player by an amount: unless the amount is zero, the stun at 0x11D8 is already 75, the
   player is shielded at 0x670, the match rule D_801468A0 protects a player in controller mode 11, or
   the player's option 0x8000 is set, it raises the stun by fifteen times the amount up to 75, resets
   the weapon state through func_80214178, drops a held marker at 0x1210 (releasing the hold at 0x5E4
   through func_802227D0), clears flag 0x01000000, and on the player's view at 0x5DC either starts a
   flash of colour 0x80, 0, 0 with a random alpha and a strength from the stun, or when a flash is already running sets
   its state at 0x544 to 3 and its level at 0x54D to the stun. */
#include "basetypes.h"

typedef struct {
    char pad0[0x80];
    s8 mode;
} Controls;

typedef struct {
    char pad0[0x544];
    s32 flash;
    char pad548[0x54D - 0x548];
    u8 level;
} View;

typedef struct {
    char pad0[0x100];
    s32 flags;
    char pad104[0x2E8 - 0x104];
    char weapon[0x458 - 0x2E8];
    char ammo[0x5D8 - 0x458];
    Controls *controls;
    View *view;
    char pad5E0[0x5E4 - 0x5E0];
    s32 holding;
    char pad5E8[0x670 - 0x5E8];
    f32 shield;
    char pad674[0x11D8 - 0x674];
    f32 stun;
    char pad11DC[0x1210 - 0x11DC];
    s32 marker;
    s32 markerShown;
    char pad1218[0x122C - 0x1218];
    s32 options;
} Player;

typedef struct {
    char pad0[0x98];
    s32 rule;
    char pad9C[0xA0 - 0x9C];
    s32 protect;
} Match;

extern Match D_801468A0[];
extern void func_80214178(char *, char *, s32);
extern void func_802227D0(Player *, Player *, s32);
extern f32 func_802745D4(f32);
extern void func_8023919C(View *, s32, s32, s32, s32, s32, s32, s32);

void func_802297F0(Player *player, f32 amount) {
    f32 stun;

    if (amount != 0.0f && !(75.0f <= player->stun) && !(player->shield > 0.0f)
        && !(D_801468A0->rule != 0 && player->controls->mode == 0xB && D_801468A0->protect > 0)
        && !(player->options & 0x8000)) {
        stun = player->stun + amount * 15.0f;
        if (75.0f < stun) {
            stun = 75.0f;
        }
        player->stun = stun;
        func_80214178(player->weapon, player->ammo, 2);
        if (player->marker != 0) {
            if (player->holding != 0) {
                func_802227D0(player, player, 2);
            }
            player->marker = 0;
            player->markerShown = 0;
        }
        player->flags &= ~0x01000000;
        if (player->view != 0) {
            if (player->view->flash == 0) {
                func_8023919C(player->view, 0x80, 0, 0, 0xFA, (u8) (u32) func_802745D4(7.5f), 0,
                              (u8) (u32) ((player->stun * 0.06666667f - 1.5f) * 15.0f));
            } else {
                player->view->flash = 3;
                player->view->level = (u32) player->stun;
            }
        }
    }
}
