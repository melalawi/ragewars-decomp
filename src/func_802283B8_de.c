#include "span_1000/code_80222E80.h"
#include "types.h"




























/* Ends a match when its conditions are met, unless a menu or pause is up (func_80245784_de,
   func_80245798_de), the match is locked at 0x1C of the rules D_801468A0 or the game D_8014561C disallows
   it at 0xCC9: outside a cutscene (func_80442A28_de) the time limit at 0x14 of the rules counts down by
   the frame time while func_8022C650_de says the clock runs and ends the match when it expires (clearing
   humanWon at 0xA8 of the rules in trial kind 3); outside a cutscene a score limit reached through func_80228070_de
   ends it while the rules' limit at 0x18 is set and 0x54 is clear; and when D_80146938 asks, it counts
   the active players among the first eight and how many of them are out, ending the match once all
   are out, directly or, when a mode 14 player takes part, only after the rules' round count at 0x9C
   reaches 3, marking humanWon. */












extern f32 D_800CD738;
extern Game_func_802283B8_de D_8014155C;
extern s32 D_80142878;
extern s32 D_80142888;
extern s32 func_80245784_de(void);
extern s32 func_80245798_de(void);
extern s32 func_80442A28_de(Game_func_802283B8_de *);
extern s32 func_8022C650_de(World_func_802283B8_de *);
extern void func_8022A748_de(World_func_802283B8_de *);
extern s32 func_80228070_de(World_func_802283B8_de *);

static inline SharedPlayer_func_802283B8_de *player_at(World_func_802283B8_de *world, u32 index) {
    SharedPlayer_func_802283B8_de *player;
    s32 count;

    player = 0;
    count = 0;
    if (index < 8U) {
        player = world->players;
        if (player != 0) {
            do {
                if (count == (s32) index) {
                    return player;
                }
                player = player->views16E0.view16E0_2.next;
                count += 1;
            } while (player != 0);
        }
    }
    return player;
}

void func_802283B8_de(World_func_802283B8_de *world) {
    SharedPlayer_func_802283B8_de *player;
    Rules_func_802283B8_de *rules;
    Game_func_802283B8_de *game;
    Rules_func_802283B8_de *limits;
    s32 i;
    s32 active;
    s32 out;
    s32 special;

    if (func_80245784_de() == 0 && func_80245798_de() == 0) {
        rules = &D_8014155C.rules;
        if (rules->locked != 0 || D_8014155C.allowed == 0) {
            return;
        }
        if (func_80442A28_de(&D_8014155C) == 0 && rules->timeLimit > 0.0f && D_8014155C.paused == 0) {
            if (func_8022C650_de(world) != 0) {
                rules->timeLimit -= D_800CD738;
            }
            if (rules->timeLimit <= 0.0f && rules->locked == 0) {
                rules->timeLimit = 0.0f;
                if (D_8014155C.trialKind == 3) {
                    rules->humanWon = 0;
                }
                func_8022A748_de(world);
            }
        }
        game = &D_8014155C;
        if (func_80442A28_de(game) == 0 && func_80228070_de(world) != 0) {
            limits = &game->rules;
            if (limits->locked == 0 && game->paused == 0 && limits->scoreLimit > 0 && limits->sudden == 0) {
                func_8022A748_de(world);
            }
        }
        if (D_80142878 != 0) {
            active = 0;
            out = 0;
            special = 0;
            for (i = 0; i < 8; i++) {
                player = player_at(world, i);
                if (player != 0 && player->views5D8.view5D8_2.controls->display != 0) {
                    active++;
                    if (player->views5E4.view5E4_3.alive == 0) {
                        out++;
                    }
                    if (player->views5D8.view5D8_2.controls->kind == 0xE) {
                        special = 1;
                    }
                }
            }
            if (out == active) {
                if (special) {
                    limits = &D_8014155C.rules;
                    if (limits->rounds >= 3) {
                        limits->humanWon = 1;
                        func_8022A748_de(world);
                    }
                } else {
                    D_80142888 = 1;
                    func_8022A748_de(world);
                }
            }
        }
    }
}
