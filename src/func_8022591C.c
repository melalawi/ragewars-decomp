/* Handles a player's death: stops the body's motion at 0x1C to 0x24 and runs func_8044ACCC; in a
   single player game (D_801462E5) a player with limited lives at 0x1450 gets the death menu for its
   profile slot 0 to 3 on its view, and when D_80146938 asks and the player is out of a team game, once
   every active player among the first eight is out the team is revived through func_8044A37C (every
   active player in mode 2 when the mode 14 leader is down, and the leader in modes below 3); in
   multiplayer the view shows the respawn menu, D_45047C when the player has a respawn count at 0x5EA
   or D_450DA8 otherwise. */
#include "basetypes.h"

typedef struct {
    char pad0[0x80];
    s8 mode;
    char pad81[0x94 - 0x81];
    u8 team;
    u8 active;
} Controls;

typedef struct {
    char pad0[0x554];
    char menu[1];
} View;

#define MATCHKIT_KNOWN_Controls 1
#define MATCHKIT_KNOWN_View 1
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct {
    char pad0[0x1C];
    s32 motion[3];
} Body;

extern char D_45047C;
extern char D_450DA8;
extern char D_451700;
extern char D_451724;
extern char D_451748;
extern char D_45176C;
extern char D_80145040;
extern u8 D_801462E5;
extern s32 D_80146938;
extern s32 D_8014693C;
extern void func_8044ACCC(void);
extern void func_804426E4(char *, char *, Player *, void *, s32);
extern Player *func_8022A5E4(char *, s32);
extern void func_8044A37C(Player *);

void func_8022591C(Player *player, Body *body) {
    Player *other;
    Player *leader;
    s32 i;
    s32 active;
    s32 out;

    body->motion[0] = 0;
    body->motion[1] = 0;
    body->motion[2] = 0;
    func_8044ACCC();
    if (D_801462E5 != 0) {
        if (player->views1450.view1450_2.infinite == 0) {
            switch (player->views1C.view5D4_46.slot) {
            case 0:
                func_804426E4(player->views5DC.view5DC_2.view->menu, &D_451700, player, player->views5E8.view698_36.controller, 0);
                break;
            case 1:
                func_804426E4(player->views5DC.view5DC_2.view->menu, &D_451724, player, player->views5E8.view698_36.controller, 0);
                break;
            case 2:
                func_804426E4(player->views5DC.view5DC_2.view->menu, &D_451748, player, player->views5E8.view698_36.controller, 0);
                break;
            case 3:
                func_804426E4(player->views5DC.view5DC_2.view->menu, &D_45176C, player, player->views5E8.view698_36.controller, 0);
                break;
            }
        }
        if (D_80146938 != 0 && player->views5D8.view5D8_2.controls->team == 0 && player->views5D8.view5D8_2.controls->active != 0) {
            active = 0;
            out = 0;
            leader = 0;
            for (i = 0; i < 8; i++) {
                other = func_8022A5E4(&D_80145040, i);
                if (other != 0) {
                    if (other->views5D8.view5D8_2.controls->active != 0) {
                        active++;
                        if (other->views5E4.view5E4_3.alive == 0) {
                            out++;
                        }
                    }
                    if (other->views5D8.view5D8_2.controls->mode == 0xE) {
                        leader = other;
                    }
                }
            }
            if (out == active) {
                if (D_8014693C == 2 && leader->views5E4.view5E4_3.alive == 0) {
                    for (i = 0; i < 8; i++) {
                        other = func_8022A5E4(&D_80145040, i);
                        if (other != 0 && other->views5D8.view5D8_2.controls->active != 0) {
                            func_8044A37C(other);
                        }
                    }
                }
                if (D_8014693C < 3) {
                    func_8044A37C(leader);
                }
            }
        }
    } else if (player->views5DC.view5DC_2.view != 0) {
        if (player->views5E8.view5EA_3.respawns != 0) {
            func_804426E4(player->views5DC.view5DC_2.view->menu, &D_45047C, player, player->views5E8.view698_36.controller, 0);
        } else {
            func_804426E4(player->views5DC.view5DC_2.view->menu, &D_450DA8, player, player->views5E8.view698_36.controller, 0);
        }
    }
}
