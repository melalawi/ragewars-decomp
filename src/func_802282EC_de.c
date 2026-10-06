#include "span_1000/code_80225D10.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "types.h"
/* Reports whether a team's points reached the point target (none when it is 0); in a trial it records
   in humanWon whether that team is the human side's and, when it is not, keeps looking. */

#define NO_TEAM 0xFF
#define TEAM_COUNT 5
#define TRIAL_NONE 0










extern Game1330_2 D_8014155C;

s32 func_802282EC_de(struct World *world) {
    RulesAC_2 *target;
    RulesAC_2 *rules;
    Settings580 *settings;
    Settings580 *trial;
    s32 humanTeam;
    s32 i;
    s32 team;
    s32 kind;

    target = &D_8014155C.rules;
    if (target->pointTarget == 0) {
        return 0;
    }
    i = 0;
    settings = &D_8014155C.settings;
    humanTeam = NO_TEAM;
    if (settings->trialKind != TRIAL_NONE) {
        for (; settings->roster[i].active == 0; i++) {
        }
        humanTeam = D_8014155C.settings.roster[i].team;
    }
    for (team = 0; team < TEAM_COUNT; team++) {
        rules = &D_8014155C.rules;
        if (rules->teamPoints[team] >= rules->pointTarget) {
            if (team == humanTeam) {
                rules->humanWon = 1;
                return 1;
            }
            trial = &D_8014155C.settings;
            kind = trial->trialKind;
            rules->humanWon = 0;
            if (kind == TRIAL_NONE) {
                return 1;
            }
        }
    }
    return 0;
}

