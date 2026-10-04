#include "common/types.h"
#include "span_16E000/code_8041DBA0.h"
#include "span_16E000/types.h"
#include "types.h"
/* Scores the three entries (5, 10 or 20 points by kind for each active one, repeating the previous award for other kinds) and returns the first of five ranks whose threshold for the active-entry count reaches the score, 4 when none does, or zero with no active entry. */





extern struct Entry_func_804101BC_de D_8014DCF0[];
extern InstanceHdr D_800DF768[];

static inline s32 entryScore(void) {
    s32 score;
    s32 points;
    s32 i;

    score = 0;
    points = 0;
    for (i = 0; i < 3; i++) {
        if (D_8014DCF0[i].unused >= 0) {
            switch (D_8014DCF0[i].flags) {
            case 0:
                points = 5;
                break;
            case 1:
                points = 10;
                break;
            case 2:
                points = 20;
                break;
            }
            score += points;
        }
    }
    return score;
}


static inline s32 activeCount(void) {
    s32 count;
    s32 i;

    count = 0;
    for (i = 0; i < 3; i++) {
        if (D_8014DCF0[i].unused >= 0) {
            count++;
        }
    }
    return count;
}

s32 func_8041E720_de(void) {
    s32 score;
    s32 i;
    s32 count;
    s32 rank;

    score = entryScore();
    count = activeCount();
    rank = 4;
    if (count <= 0) {
        return 0;
    }
    for (i = 0; i < 5; i++) {
        if (D_800DF768[i].w[count - 1] >= score) {
            rank = i;
            break;
        }
    }
    return rank;
}
