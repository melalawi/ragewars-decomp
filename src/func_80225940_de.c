#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "types.h"




























/* Handles a player's death: stops the body's motion at 0x1C to 0x24 and runs func_8044A07C_de; in a
   single player game (D_801462E5) a player with limited lives at 0x1450 gets the death menu for its
   profile slot 0 to 3 on its view, and when D_80146938 asks and the player is out of a team game, once
   every active player among the first eight is out the team is revived through func_8044972C_de (every
   active player in mode 2 when the mode 14 leader is down, and the leader in modes below 3); in
   multiplayer the view shows the respawn menu, D_45047C when the player has a respawn count at 0x5EA
   or D_450DA8 otherwise. */









extern char D_0044F82C_de;
extern char D_00450178;
extern char D_00450AD0;
extern char D_00450AF4;
extern char D_00450B18;
extern char D_00450B3C;
extern char D_80140F80;
extern u8 D_801462E5;
extern s32 D_80142878;

extern void func_8044A07C_de(void);
extern void func_80442574_de(char *, char *, SharedPlayer_func_80225940_de *, void *, s32);
extern SharedPlayer_func_80225940_de *func_8022A5F4_de(char *, s32);
extern void func_8044972C_de(SharedPlayer_func_80225940_de *);

void func_80225940_de(SharedPlayer_func_80225940_de *player, Body_func_80225940_de *body) {
    SharedPlayer_func_80225940_de *other;
    SharedPlayer_func_80225940_de *leader;
    s32 i;
    s32 active;
    s32 out;

    body->motion[0] = 0;
    body->motion[1] = 0;
    body->motion[2] = 0;
    func_8044A07C_de();
    if (D_801462E5 != 0) {
        if (player->views1450.view1450_2.infinite == 0) {
            switch (player->views1C.view5D4_46.slot) {
            case 0:
                func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_00450AD0, player, player->views5E8.view698_36.controller, 0);
                break;
            case 1:
                func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_00450AF4, player, player->views5E8.view698_36.controller, 0);
                break;
            case 2:
                func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_00450B18, player, player->views5E8.view698_36.controller, 0);
                break;
            case 3:
                func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_00450B3C, player, player->views5E8.view698_36.controller, 0);
                break;
            }
        }
        if (D_80142878 != 0 && player->views5D8.view5D8_2.controls->team == 0 && player->views5D8.view5D8_2.controls->active != 0) {
            active = 0;
            out = 0;
            leader = 0;
            for (i = 0; i < 8; i++) {
                other = func_8022A5F4_de(&D_80140F80, i);
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
                if (D_8014287C == 2 && leader->views5E4.view5E4_3.alive == 0) {
                    for (i = 0; i < 8; i++) {
                        other = func_8022A5F4_de(&D_80140F80, i);
                        if (other != 0 && other->views5D8.view5D8_2.controls->active != 0) {
                            func_8044972C_de(other);
                        }
                    }
                }
                if (D_8014287C < 3) {
                    func_8044972C_de(leader);
                }
            }
        }
    } else if (player->views5DC.view5DC_2.view != 0) {
        if (player->views5E8.view5EA_3.respawns != 0) {
            func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_0044F82C_de, player, player->views5E8.view698_36.controller, 0);
        } else {
            func_80442574_de(player->views5DC.view5DC_2.view->menu, &D_00450178, player, player->views5E8.view698_36.controller, 0);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5140_D[] = {0x67, 0x72, 0x69, 0x64, 0x20, 0x73, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA300_D[] = {0x67, 0x72, 0x69, 0x64, 0x20, 0x73, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C4FC0_4 = 10.2399998f;
const float unbake_rodata_800C4FC4_4 = 102400.0f;
const float unbake_rodata_800C4FC8_4 = 0.785398245f;
const float unbake_rodata_800C4FCC_4 = 0.305175781f;
const float unbake_rodata_800C4FD0_4 = 200.0f;
const float unbake_rodata_800C4FD4_4 = 255.0f;
const float unbake_rodata_800C4FD8_4 = 7.67999983f;
const float unbake_rodata_800C4FDC_4 = 8.0f;
const float unbake_rodata_800C4FE0_4 = 0.100000001f;
const float unbake_rodata_800C4FE4_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4EB8_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C5110_C[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#endif
