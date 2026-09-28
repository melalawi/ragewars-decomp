/* Draws a player's two objective icons on its view: advances the icon timer at 0x7BC and, while the
   icons are enabled at 0x788 (not for a paused controlled player under D_801468F4, in state 0x27, in
   mode 2 carrying weapon 3, or during a cutscene), turns a plain objective icon 0x2DA at 0x798 into its
   carried form (0x2EF in mode 1 for players other than the D_800CE474 kinds, 0x302 or 0x2F1 in other
   modes) and restarts or holds the timer by the player's state; it then draws the icon at 0x7B8 at the
   position at 0x7C0 and the icon at 0x798 at 0x79C through func_8021E068, each scaled 8 for the
   objective icons, 32 for the large ones and 16 otherwise (objective icons shown only when the
   options at D_801462F3 allow). The second switch lists two icons that share the default scale, which
   the original needed for its jump table; which icons they were is not recoverable from the bytes. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    char pad0[0x8F];
    u8 paused;
} Controls;

typedef struct {
    char pad0[0xE4];
    u16 kind;
    char padE6[0x48C - 0xE6];
    s8 state;
    char pad48D[0x523 - 0x48D];
    s8 busy;
    char pad524[0x594 - 0x524];
    s32 mode;
    char pad598[0x5A0 - 0x598];
    f32 charge;
    char pad5A4[0x5D8 - 0x5A4];
    Controls *controls;
    char pad5DC[0x62E - 0x5DC];
    s16 weapon;
    char pad630[0x650 - 0x630];
    s16 action;
    char pad652[0x788 - 0x652];
    s32 icons;
    char pad78C[0x798 - 0x78C];
    s32 carried;
    Vec3f carriedPosition;
    char pad7A8[0x7B8 - 0x7A8];
    s32 target;
    f32 timer;
    Vec3f targetPosition;
} Player;

extern f32 D_800D2988;
extern s32 D_800CE474[2];
extern u8 D_801462E5;
extern u8 D_801462F3;
extern s32 D_801468F4;
extern s32 func_802A33AC(void);
extern void func_802AA224(s32);
extern void func_8021E068(void *, Vec3f *, s32, f32, f32, f32);

void func_8021E27C(Player *player, void *view) {
    s32 icon;
    s32 show;
    f32 scale;

    player->timer += D_800D2988;
    if (player->icons == 0) {
        return;
    }
    if (player->controls->paused == 1 && D_801468F4 != 0) {
        return;
    }
    if (player->action == 0x27) {
        return;
    }
    if (player->mode == 2 && player->weapon == 3) {
        return;
    }
    if (func_802A33AC() != 0) {
        return;
    }
    if (player->carried == 0x2DA) {
        if (player->mode == 1) {
            if (player->kind != D_800CE474[0] && player->kind != D_800CE474[1]) {
                player->carried = 0x2EF;
                if ((u8) player->state - 2U < 2) {
                    player->timer = 0.0f;
                } else if (player->busy != 0) {
                    player->timer = 0.0f;
                } else {
                    player->timer = 1.0f;
                }
            }
        } else if (player->kind != D_800CE474[0] && player->kind != D_800CE474[1]) {
            player->carried = 0x2F1;
            if (player->weapon == 9 && player->charge > 0.0f) {
                player->timer = 1.0f;
            } else if (player->state == 0xB || player->state == 3 || player->state == 2) {
                player->timer = 0.0f;
            } else if (player->busy != 0) {
                player->timer = 0.0f;
            } else {
                player->timer = 1.0f;
            }
        } else {
            player->carried = 0x302;
            player->timer = 0.0f;
        }
    }
    func_802AA224(0xFF);

    icon = player->target;
    show = 1;
    if (icon == 0x2DA && D_801462E5 != 0) {
        show = D_801462F3;
    }
    if (icon != -1) {
        switch (icon) {
        case 0x2DA:
        case 0x2EF:
        case 0x2F0:
            scale = 8.0f;
            break;
        case 0x2BC:
        case 0x2E4:
        case 0x2F1:
        case 0x2F2:
        case 0x302:
        case 0x320:
        case 0x32A:
        case 0x32B:
        case 0x35C:
        case 0x35D:
            scale = 32.0f;
            break;
        default:
            scale = 16.0f;
            break;
        }
        if (show) {
            func_8021E068(view, &player->targetPosition, icon, player->timer, scale, 1.0f);
        }
    }

    icon = player->carried;
    show = 1;
    if (icon == 0x2DA && D_801462E5 != 0) {
        show = D_801462F3;
    }
    if (icon != -1) {
        switch (icon) {
        case 0x2DA:
        case 0x2EF:
        case 0x2F0:
            scale = 8.0f;
            break;
        case 0x2BC:
        case 0x2E4:
        case 0x2F1:
        case 0x2F2:
        case 0x302:
        case 0x320:
            scale = 32.0f;
            break;
        case 0x2F3:
        case 0x2F4:
        default:
            scale = 16.0f;
            break;
        }
        if (show) {
            func_8021E068(view, &player->carriedPosition, icon, player->timer, scale, 1.0f);
        }
    }
}
