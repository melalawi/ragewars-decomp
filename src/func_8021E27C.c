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

#define MATCHKIT_KNOWN_Controls 1
#define MATCHKIT_KNOWN_Vec3f 1
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

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

    player->views5E8.view7BC_102.timer += D_800D2988;
    if (player->views5E8.view788_94.icons == 0) {
        return;
    }
    if (player->views5D8.view5D8_2.controls->paused == 1 && D_801468F4 != 0) {
        return;
    }
    if (player->views5E8.view650_17.action == 0x27) {
        return;
    }
    if (player->views1C.view594_40.mode == 2 && player->views5E8.view62E_14.weapon == 3) {
        return;
    }
    if (func_802A33AC() != 0) {
        return;
    }
    if (player->views5E8.view798_96.carried == 0x2DA) {
        if (player->views1C.view594_40.mode == 1) {
            if (player->views1C.viewE4_7.kind != D_800CE474[0] && player->views1C.viewE4_7.kind != D_800CE474[1]) {
                player->views5E8.view798_96.carried = 0x2EF;
                if ((u8) player->views1C.view48C_35.state - 2U < 2) {
                    player->views5E8.view7BC_102.timer = 0.0f;
                } else if (player->views1C.view523_37.busy != 0) {
                    player->views5E8.view7BC_102.timer = 0.0f;
                } else {
                    player->views5E8.view7BC_102.timer = 1.0f;
                }
            }
        } else if (player->views1C.viewE4_7.kind != D_800CE474[0] && player->views1C.viewE4_7.kind != D_800CE474[1]) {
            player->views5E8.view798_96.carried = 0x2F1;
            if (player->views5E8.view62E_14.weapon == 9 && player->views1C.view5A0_42.charge > 0.0f) {
                player->views5E8.view7BC_102.timer = 1.0f;
            } else if (player->views1C.view48C_35.state == 0xB || player->views1C.view48C_35.state == 3 || player->views1C.view48C_35.state == 2) {
                player->views5E8.view7BC_102.timer = 0.0f;
            } else if (player->views1C.view523_37.busy != 0) {
                player->views5E8.view7BC_102.timer = 0.0f;
            } else {
                player->views5E8.view7BC_102.timer = 1.0f;
            }
        } else {
            player->views5E8.view798_96.carried = 0x302;
            player->views5E8.view7BC_102.timer = 0.0f;
        }
    }
    func_802AA224(0xFF);

    icon = player->views5E8.view7B8_100.target;
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
            func_8021E068(view, &player->views5E8.view7C0_104.targetPosition, icon, player->views5E8.view7BC_102.timer, scale, 1.0f);
        }
    }

    icon = player->views5E8.view798_96.carried;
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
            func_8021E068(view, &player->views5E8.view79C_98.carriedPosition, icon, player->views5E8.view7BC_102.timer, scale, 1.0f);
        }
    }
}
