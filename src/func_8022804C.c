/* Reports whether the score limit has been reached, by a team's score in a team game or a player's
   frags otherwise, unless a menu or pause is up (func_80245774, func_80245788); in a trial it records
   in humanWon whether the human side reached it and ends the match on any other side reaching it
   unless the trial needs the human to reach it. */
#include "basetypes.h"
#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

#define NO_TEAM 0xFF
#define TEAM_COUNT 5
#define HUMAN_SLOTS 4
#define TRIAL_NONE 0
#define TRIAL_HUMAN_MUST_REACH 1

typedef struct Controls {
    char pad0[0x4];
    s16 frags;
} Controls;

typedef struct {
    char pad0[0x20];
    Player *players;
} World;

typedef struct {
    char pad0[0x78];
    u8 active;
    char pad79[0x92 - 0x79];
    u8 team;
    char pad93[0x96 - 0x93];
} RosterEntry;

typedef struct {
    char pad0[0x18];
    s32 scoreLimit;
    char pad1C[0x24 - 0x1C];
    s32 teamGame;
    char pad28[0x2C - 0x28];
    s32 teamScore[TEAM_COUNT];
    char pad40[0xA8 - 0x40];
    s32 humanWon;
} Rules;

typedef struct {
    char pad0[0xD];
    u8 trialKind;
    char padE[0xD0 - 0xE];
    RosterEntry roster[8];
} Settings;

typedef struct {
    char pad0[0xCAC];
    Settings settings;
    char pad122C[0x1284 - 0x122C];
    Rules rules;
} Game;

extern Game D_8014561C;
extern s32 func_80245774(void);
extern s32 func_80245788(void);

s32 func_8022804C(World *world) {
    Rules *rules;
    u8 kind;

    if (func_80245774() != 0) {
        return 0;
    }
    if (func_80245788() != 0) {
        return 0;
    }
    rules = &D_8014561C.rules;
    /* A limit of 0 is no limit. The us cartridge tests that only in a team game, so in an individual
       game with no limit (Frag Tag) every player counts as having reached it and the first one in the
       list, a bot, clears humanWon. */
#ifndef VERSION_US
    if (rules->scoreLimit == 0) {
        return 0;
    }
#endif
    if (rules->teamGame != 0) {
        Settings *settings;
        Rules *teams;
        Settings *trial;
        s32 humanTeam;
        s32 i;
        s32 team;

#ifdef VERSION_US
        if (rules->scoreLimit == 0) {
            return 0;
        }
#endif
        settings = &D_8014561C.settings;
        humanTeam = NO_TEAM;
        if (settings->trialKind != TRIAL_NONE) {
            for (i = 0; settings->roster[i].active == 0; i++) {
            }
            humanTeam = D_8014561C.settings.roster[i].team;
        }
        for (team = 0; team < TEAM_COUNT; team++) {
            teams = &D_8014561C.rules;
            if (teams->teamScore[team] >= teams->scoreLimit) {
                trial = &D_8014561C.settings;
                kind = trial->trialKind;
                if (kind == TRIAL_NONE) {
                    return 1;
                }
                if (team == humanTeam) {
                    teams->humanWon = 1;
                    return 1;
                }
                teams->humanWon = 0;
                if (kind != TRIAL_HUMAN_MUST_REACH) {
                    return 1;
                }
            }
        }
        return 0;
    } else {
        Rules *limits;
        Settings *trial;
        Player *player;

        for (player = world->players; player != 0; player = player->views16E0.view16E0_2.next) {
            limits = &D_8014561C.rules;
            if (player->views5D8.view5D8_2.controls->frags >= limits->scoreLimit) {
                trial = &D_8014561C.settings;
                kind = trial->trialKind;
                if (kind != TRIAL_NONE) {
                    if (player->views1C.view5D4_46.slot < HUMAN_SLOTS) {
                        limits->humanWon = 1;
                        return 1;
                    }
                    limits->humanWon = 0;
                    if (kind == TRIAL_HUMAN_MUST_REACH) {
                        continue;
                    }
                }
                return 1;
            }
        }
        return 0;
    }
}
