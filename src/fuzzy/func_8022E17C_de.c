#include "types.h"

typedef struct TeamStats {
    /* 0x00 */ char pad0[0x92];
    /* 0x92 */ u8 team;
} TeamStats;

typedef struct TeamPlayer {
    /* 0x000 */ char pad0[0x5D8];
    /* 0x5D8 */ TeamStats *stats;
} TeamPlayer;

typedef struct TeamCounters {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 active;
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 wins[5];
    /* 0x40 */ s32 losses[5];
    /* 0x54 */ s32 locked;
    /* 0x58 */ char pad58[0x20];
    /* 0x78 */ s32 frozen;
} TeamCounters;

extern TeamCounters D_801468A0;

void func_8022E17C_de(TeamPlayer *a, TeamPlayer *b, s32 mode) {
    u8 teamA;
    u8 teamB;

    if (D_801468A0.active == 0) {
        return;
    }
    teamA = a->stats->team;
    teamB = b->stats->team;
    if ((s32)teamA < 0 || (s32)teamA >= 5) {
        return;
    }
    switch (mode) {
    case 0:
        if (D_801468A0.frozen == 0 && D_801468A0.locked == 0) {
            D_801468A0.wins[teamA]--;
        }
        break;
    case 1:
        if (teamB != teamA) {
            D_801468A0.wins[teamA]++;
        }
        break;
    case 2:
        if (teamB == teamA) {
            D_801468A0.wins[teamA]--;
        } else {
            D_801468A0.wins[teamA]++;
        }
        break;
    case 3:
        D_801468A0.losses[teamA]++;
        break;
    }
}
