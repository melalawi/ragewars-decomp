/* Runs a player's team selection menu each frame unless a menu is paused (func_80245774): while the
   game is ending (D_8014561C) an open menu is closed through func_80218F84; a closed menu opens through
   func_80219124 when team selection D_801468C4 is on and the player has no team yet (0xFF at 0x92 of its
   controls); while it is open the player is held (0x11B4, 0x11B8) and shielded for 2, and the team slot
   under the stick (func_80218988) becomes the hovered entry at 0x70, moving the cursor at 0x6C and
   choosing the entry's team for the player unless the entry is disabled or flagged 0x8000; the menu
   then slides open at 0.25 per frame, and once func_8021917C confirms a choice it releases the player,
   announces the chosen team with its message and sound, and slides closed, the menu's spin at 0x14
   turning while it is shown. */
#include "basetypes.h"

typedef struct {
    char pad0[0x92];
    u8 team;
} Controls;

typedef struct {
    char pad0[0xB0];
    s32 buttons;
} Controller;

typedef struct {
    char pad0[0x5D8];
    Controls *controls;
    void *view;
    char pad5E0[0x670 - 0x5E0];
    f32 shield;
    char pad674[0x698 - 0x674];
    Controller *controller;
    char pad69C[0x11B4 - 0x69C];
    s32 locked;
    s32 frozen;
} Player;

typedef struct {
    char pad0[0x1E];
    u16 team;
    s32 enabled;
} Entry;

typedef struct {
    s32 state;
    char pad4[0x8 - 0x4];
    f32 open;
    char padC[0x14 - 0xC];
    f32 spin;
    char pad18[0x6C - 0x18];
    s32 cursor;
    s32 hover;
} TeamMenu;

extern f32 D_800D2988;
extern s32 D_800D7194;
extern s32 D_800D7198;
extern s32 D_800D719C;
extern s32 D_800D71A0;
extern char D_80145088;
extern s32 D_8014561C;
extern s32 D_801468C4;
extern s32 func_80245774(void);
extern void func_80218F84(TeamMenu *);
extern void func_80219124(TeamMenu *, s32, Player *);
extern s32 func_80218988(Player *);
extern s32 func_8021917C(TeamMenu *, Player *);
extern void func_80237E70(char *, void *, s32);
extern void func_8025DF54(s32);

void func_80218B84(TeamMenu *menu, Player *player) {
    s32 held;
    s32 slot;
    Entry *entry;
    u16 team;

    if (func_80245774() != 0) {
        return;
    }
    if (D_8014561C != 0 && menu->state != 0) {
        func_80218F84(menu);
        return;
    }
    held = player->controller->buttons & 0x8000;
    if (menu->state == 0 || menu->state == 3) {
        if (D_801468C4 == 0 || player->controls->team != 0xFF) {
            goto run;
        }
        func_80219124(menu, held, player);
        menu->state = 1;
    }
    player->locked = 1;
    player->frozen = 1;
    player->shield = 2.0f;
    slot = func_80218988(player);
    if (slot != menu->hover) {
        if (slot != -1) {
            entry = (Entry *) ((char *) menu + slot * 0x14);
            team = entry->team;
            if (entry->enabled == 0) {
                goto run;
            }
            if ((s16) team < 0) {
                menu->hover = -1;
                goto run;
            }
            if (slot != menu->cursor) {
                menu->cursor = slot;
            }
            player->controls->team = team;
        }
        menu->hover = slot;
    }
run:
    switch (menu->state) {
    case 1:
        menu->open += D_800D2988 * 0.25f;
        if (1.0f <= menu->open) {
            menu->open = 1.0f;
            menu->state = 2;
        }
        break;
    case 2:
        if (func_8021917C(menu, player) == 0) {
            break;
        }
        menu->state = 3;
        player->locked = 0;
        player->frozen = 0;
        switch (player->controls->team) {
        case 0:
            func_80237E70(&D_80145088, player->view, D_800D7194);
            func_8025DF54(0x2E6);
            break;
        case 1:
            func_80237E70(&D_80145088, player->view, D_800D7198);
            func_8025DF54(0x2E4);
            break;
        case 2:
            func_80237E70(&D_80145088, player->view, D_800D719C);
            func_8025DF54(0x2E8);
            break;
        case 3:
            func_80237E70(&D_80145088, player->view, D_800D71A0);
            func_8025DF54(0x2EC);
            break;
        }
        /* fall through */
    case 3:
        menu->open -= D_800D2988 * 0.25f;
        if (menu->open <= 0.0f) {
            menu->open = 0.0f;
            menu->state = 0;
        }
        break;
    }
    if (menu->state != 0) {
        menu->spin += D_800D2988 * 0.52359885f;
    }
}
