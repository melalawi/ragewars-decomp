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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5270_4 = 262144.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA430_4 = 262144.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C514C_4 = 65536.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5144_4 = 1.41421354f;
const float unbake_rodata_800C5148_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5240_8 = 4294967296.0;
const float unbake_rodata_800C5248_4 = 0.00392156886f;
const float unbake_rodata_800C524C_4 = 0.5f;
const float unbake_rodata_800C5250_4 = 1.0f;
const float unbake_rodata_800C5254_4 = 1.0f;
const float unbake_rodata_800C5258_4 = 0.5f;
const float unbake_rodata_800C525C_4 = 255.0f;
const float unbake_rodata_800C5260_4 = 5.0f;
const float unbake_rodata_800C5264_4 = 1.0f;
const float unbake_rodata_800C5268_4 = 2.14748365e+09f;
const float unbake_rodata_800C526C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5270_4 = 2.14748365e+09f;
const float unbake_rodata_800C5274_4 = 2.14748365e+09f;
const float unbake_rodata_800C5278_4 = 2.14748365e+09f;
const float unbake_rodata_800C527C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5280_4 = 127.0f;
#endif
