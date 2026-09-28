/* Reports whether a team's points reached the point target (none when it is 0); in a trial it records
   in humanWon whether that team is the human side's and, when it is not, keeps looking. */
#include "basetypes.h"

#define NO_TEAM 0xFF
#define TEAM_COUNT 5
#define TRIAL_NONE 0

typedef struct World World;

typedef struct {
    char pad0[0x78];
    u8 active;
    char pad79[0x92 - 0x79];
    u8 team;
    char pad93[0x96 - 0x93];
} RosterEntry;

typedef struct {
    char pad0[0x40];
    s32 teamPoints[TEAM_COUNT];
    char pad54[0x7C - 0x54];
    s32 pointTarget;
    char pad80[0xA8 - 0x80];
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

s32 func_802282C8(World *world) {
    Rules *target;
    Rules *rules;
    Settings *settings;
    Settings *trial;
    s32 humanTeam;
    s32 i;
    s32 team;
    s32 kind;

    target = &D_8014561C.rules;
    if (target->pointTarget == 0) {
        return 0;
    }
    i = 0;
    settings = &D_8014561C.settings;
    humanTeam = NO_TEAM;
    if (settings->trialKind != TRIAL_NONE) {
        for (; settings->roster[i].active == 0; i++) {
        }
        humanTeam = D_8014561C.settings.roster[i].team;
    }
    for (team = 0; team < TEAM_COUNT; team++) {
        rules = &D_8014561C.rules;
        if (rules->teamPoints[team] >= rules->pointTarget) {
            if (team == humanTeam) {
                rules->humanWon = 1;
                return 1;
            }
            trial = &D_8014561C.settings;
            kind = trial->trialKind;
            rules->humanWon = 0;
            if (kind == TRIAL_NONE) {
                return 1;
            }
        }
    }
    return 0;
}
