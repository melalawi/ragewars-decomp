/* Reports why a match ended: time running out on a timed match, the score limit (func_8022804C),
   the rule set's own target (func_802282C8 for rule set 0, the Frag Tag limit func_802281CC for
   rule set 1), or otherwise whether the last-player-standing check reached its end. */
#include "basetypes.h"

#define RULE_SET_POINT_TARGET 0
#define RULE_SET_FRAG_TAG 1

enum MatchEnd {
    MATCH_END_TIME_UP,
    MATCH_END_SCORE_LIMIT,
    MATCH_END_TAG_LIMIT,
    MATCH_END_POINT_TARGET
};

typedef struct World World;

typedef struct {
    char pad0[0x24];
    s8 timeSetting;
} Settings;

typedef struct {
    char pad0[0x14];
    f32 timeLeft;
    char pad18[0x98 - 0x18];
    s32 lastStanding;
} Rules;

typedef struct {
    char pad0[0xCAC];
    Settings settings;
    char padCD1[0x1284 - 0xCD1];
    Rules rules;
} Game;

extern Game D_8014561C;
extern World D_80145040;
extern s32 D_80154028;
extern s32 func_8022804C(World *world);
extern s32 func_802281CC(World *world);
extern s32 func_802282C8(World *world);

s32 func_8042D240(void) {
    Settings *settings;

    settings = &D_8014561C.settings;
    if (settings->timeSetting > 0 && D_8014561C.rules.timeLeft == 0.0f) {
        return MATCH_END_TIME_UP;
    }
    if (func_8022804C(&D_80145040) != 0) {
        return MATCH_END_SCORE_LIMIT;
    }
    switch (D_80154028) {
    case RULE_SET_POINT_TARGET:
        if (func_802282C8(&D_80145040) != 0) {
            return MATCH_END_POINT_TARGET;
        }
        break;
    case RULE_SET_FRAG_TAG:
        if (func_802281CC(&D_80145040) != 0) {
            return MATCH_END_TAG_LIMIT;
        }
        break;
    }
    return D_8014561C.rules.lastStanding == 1;
}
