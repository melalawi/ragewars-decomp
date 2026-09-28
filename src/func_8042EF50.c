/* Starts a match's rules: stores the score, tag and point limits and the rule flags, sets the clock
   from the time setting (15 seconds a unit in trial kinds 2 and 3, 900 otherwise, and no limit when
   the setting is 0), and clears every team's score and points. */
#include "basetypes.h"

#define TEAM_COUNT 5
#define TRIAL_TIMED_FIRST 2
#define TRIAL_TIMED_COUNT 2
#define ROUND_LENGTH 0xA00
#define SECONDS_PER_UNIT 900.0f
#define TRIAL_SECONDS_PER_UNIT 15.0f
#define NO_TIME_LIMIT -1.0f

typedef struct {
    char pad0[0xD];
    u8 trialKind;
} Settings;

typedef struct {
    char pad0[0x14];
    f32 timeLeft;
    s32 scoreLimit;
    s32 unk1C;
    char pad20[0x24 - 0x20];
    s32 teamGame;
    s32 unk28;
    s32 teamScore[TEAM_COUNT];
    s32 teamPoints[TEAM_COUNT];
    s32 fragTag;
    s32 tagLimit;
    char pad5C[0x6C - 0x5C];
    s32 roundLength;
    char pad70[0x78 - 0x70];
    s32 unk78;
    s32 pointTarget;
    s32 unk80;
} Rules;

typedef struct {
    char pad0[0xCAC];
    Settings settings;
    char padCBA[0x1284 - 0xCBA];
    Rules rules;
} Game;

extern Game D_8014561C;
extern Rules D_801468A0;

void func_8042EF50(f32 time, s32 scoreLimit, s32 tagLimit, s32 pointTarget, s32 fragTag, s32 teamGame,
                   s32 unk78) {
    Rules *rules;
    Rules *teams;
    s32 i;

    rules = &D_8014561C.rules;
    rules->tagLimit = tagLimit;
    rules->unk80 = 0;
    rules->pointTarget = pointTarget;
    rules->fragTag = fragTag;
    rules->teamGame = teamGame;
    rules->unk78 = unk78;
    if ((u8)(D_8014561C.settings.trialKind - TRIAL_TIMED_FIRST) < TRIAL_TIMED_COUNT) {
        rules->timeLeft = time * TRIAL_SECONDS_PER_UNIT;
    } else {
        rules->timeLeft = time * SECONDS_PER_UNIT;
    }
    i = 0;
    teams = &D_801468A0;
    teams->roundLength = ROUND_LENGTH;
    teams->scoreLimit = scoreLimit;
    teams->unk1C = 0;
    for (; i < TEAM_COUNT; i++) {
        teams->teamScore[i] = 0;
        teams->teamPoints[i] = 0;
    }
    teams = &D_801468A0;
    teams->unk28 = 0;
    if (teams->timeLeft == 0.0f) {
        teams->timeLeft = NO_TIME_LIMIT;
    }
}
