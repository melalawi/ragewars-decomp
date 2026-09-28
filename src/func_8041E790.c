/* Scores the three entries (5, 10 or 20 points by kind for each active one, repeating the previous award for other kinds) and returns the first of five ranks whose threshold for the active-entry count reaches the score, 4 when none does, or zero with no active entry. */
#include "basetypes.h"

typedef struct {
    s32 owner;
    s32 kind;
    char pad8[0x14];
} Entry;

typedef struct {
    s32 byCount[5];
} Thresholds;

extern Entry D_80153F80[];
extern Thresholds D_800E37B8[];

static inline s32 entryScore(void) {
    s32 score;
    s32 points;
    s32 i;

    score = 0;
    points = 0;
    for (i = 0; i < 3; i++) {
        if (D_80153F80[i].owner >= 0) {
            switch (D_80153F80[i].kind) {
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
        if (D_80153F80[i].owner >= 0) {
            count++;
        }
    }
    return count;
}

s32 func_8041E790(void) {
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
        if (D_800E37B8[i].byCount[count - 1] >= score) {
            rank = i;
            break;
        }
    }
    return rank;
}
