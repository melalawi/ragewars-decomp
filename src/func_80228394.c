/* Ends a match when its conditions are met, unless a menu or pause is up (func_80245774,
   func_80245788), the match is locked at 0x1C of the rules D_801468A0 or the game D_8014561C disallows
   it at 0xCC9: outside a cutscene (func_80442B98) the time limit at 0x14 of the rules counts down by
   the frame time while func_8022C640 says the clock runs and ends the match when it expires (clearing
   humanWon at 0xA8 of the rules in trial kind 3); outside a cutscene a score limit reached through func_8022804C
   ends it while the rules' limit at 0x18 is set and 0x54 is clear; and when D_80146938 asks, it counts
   the active players among the first eight and how many of them are out, ending the match once all
   are out, directly or, when a mode 14 player takes part, only after the rules' round count at 0x9C
   reaches 3, marking humanWon. */
#include "basetypes.h"

typedef struct {
    char pad0[0x80];
    s8 mode;
    char pad81[0x94 - 0x81];
    u8 active;
} Controls;

typedef struct Player Player;
struct Player {
    char pad0[0x5D8];
    Controls *controls;
    char pad5DC[0x5E4 - 0x5DC];
    s32 alive;
    char pad5E8[0x16E0 - 0x5E8];
    Player *next;
};

typedef struct {
    char pad0[0x20];
    Player *players;
} World;

typedef struct {
    char pad0[0x14];
    f32 timeLimit;
    s32 scoreLimit;
    s32 locked;
    char pad20[0x54 - 0x20];
    s32 sudden;
    char pad58[0x9C - 0x58];
    s32 rounds;
    char padA0[0xA8 - 0xA0];
    s32 humanWon;
} Rules;

typedef struct {
    char pad0[0xCB9];
    u8 trialKind;
    char padCBA[0xCC9 - 0xCBA];
    u8 allowed;
    char padCCA[0x1278 - 0xCCA];
    s32 paused;
    char pad127C[0x1284 - 0x127C];
    Rules rules;
} Game;

extern f32 D_800D2988;
extern Game D_8014561C;
extern s32 D_80146938;
extern s32 D_80146948;
extern s32 func_80245774(void);
extern s32 func_80245788(void);
extern s32 func_80442B98(Game *);
extern s32 func_8022C640(World *);
extern void func_8022A738(World *);
extern s32 func_8022804C(World *);

static inline Player *player_at(World *world, u32 index) {
    Player *player;
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
                player = player->next;
                count += 1;
            } while (player != 0);
        }
    }
    return player;
}

void func_80228394(World *world) {
    Player *player;
    Rules *rules;
    Game *game;
    Rules *limits;
    s32 i;
    s32 active;
    s32 out;
    s32 special;

    if (func_80245774() == 0 && func_80245788() == 0) {
        rules = &D_8014561C.rules;
        if (rules->locked != 0 || D_8014561C.allowed == 0) {
            return;
        }
        if (func_80442B98(&D_8014561C) == 0 && rules->timeLimit > 0.0f && D_8014561C.paused == 0) {
            if (func_8022C640(world) != 0) {
                rules->timeLimit -= D_800D2988;
            }
            if (rules->timeLimit <= 0.0f && rules->locked == 0) {
                rules->timeLimit = 0.0f;
                if (D_8014561C.trialKind == 3) {
                    rules->humanWon = 0;
                }
                func_8022A738(world);
            }
        }
        game = &D_8014561C;
        if (func_80442B98(game) == 0 && func_8022804C(world) != 0) {
            limits = &game->rules;
            if (limits->locked == 0 && game->paused == 0 && limits->scoreLimit > 0 && limits->sudden == 0) {
                func_8022A738(world);
            }
        }
        if (D_80146938 != 0) {
            active = 0;
            out = 0;
            special = 0;
            for (i = 0; i < 8; i++) {
                player = player_at(world, i);
                if (player != 0 && player->controls->active != 0) {
                    active++;
                    if (player->alive == 0) {
                        out++;
                    }
                    if (player->controls->mode == 0xE) {
                        special = 1;
                    }
                }
            }
            if (out == active) {
                if (special) {
                    limits = &D_8014561C.rules;
                    if (limits->rounds >= 3) {
                        limits->humanWon = 1;
                        func_8022A738(world);
                    }
                } else {
                    D_80146948 = 1;
                    func_8022A738(world);
                }
            }
        }
    }
}
