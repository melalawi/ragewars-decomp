#ifdef NON_MATCHING
#include "basetypes.h"

/* Awards earned end-of-match unlocks and lists the first two new rewards. */
typedef struct Record {
    char pad0[0x26];
    u8 plays[0x24];
    u8 unlocks[0x6C - 0x4A];
    s32 total1;
    char pad70[0x74 - 0x70];
    s32 total2;
    char pad78[0x190 - 0x78];
} Record;

typedef struct Status {
    s16 wins;
    s16 losses;
    s16 score;
    char pad6[0xA - 0x6];
    s16 kills;
    char padC[0x78 - 0xC];
    u8 active;
    char pad79[0x91 - 0x79];
    u8 out;
    char pad92[0x96 - 0x92];
} Status;

typedef struct Rules {
    char pad0[0x14];
    f32 time;
} Rules;

typedef struct Globals {
    char pad0[0x24];
    s8 laps;
    s8 players;
    char pad26[0xD0 - 0x26];
    Status status[8];
    char pad580[0x5D8 - 0x580];
    Rules rules;
} Globals;

typedef struct UnlockRecord {
    u8 bits[0x190];
} UnlockRecord;
typedef struct PlayRecord {
    u8 plays[0x24];
    char pad24[0x190 - 0x24];
} PlayRecord;
typedef struct TotalRecord {
    s32 value;
    char pad4[0x190 - 4];
} TotalRecord;
extern UnlockRecord D_80102B4A[];
extern PlayRecord D_80102B26[];
extern TotalRecord D_80102B6C[];
extern TotalRecord D_80102B74[];
extern Status D_80146398[];
extern Rules D_801468A0;
extern Globals D_801462C8;
extern u8 D_801462EC;
extern f32 D_800E16B0;
extern f32 D_800E16B4;
extern f32 D_800E16B8;
extern f32 D_800E16BC;
extern f32 D_800E16C0;
extern f32 D_800E16C4;

extern s32 func_80426454(void);
extern s32 func_80265670(u8 *, s32);
extern void func_802656A8(u8 *, s32, s32);

void func_804245C0(s32 player, s32 *awarded) {
    Status *status;
    Globals *globals;
    Rules *rules;
    /* FAKEMATCH: stages elapsed-time conversion before converting the lap count. */
    f32 elapsed;
    /* FAKEMATCH: captures the player score before the opponent loop. */
    s32 score;
    s32 count;
    s32 i;
    /* FAKEMATCH: named flag records whether the current reward condition passed. */
    u32 ok;

    count = 0;
    awarded[0] = -1;
    awarded[1] = -1;
    if (func_80426454() == 0) {
        return;
    }
    status = &D_80146398[player];
    if (status->active != 1) {
        return;
    }
    if (status->out != 0) {
        return;
    }
    for (i = 0; i < 0x24; i++) {
        if (func_80265670(D_80102B4A[player].bits, i) == 0 && D_80102B26[player].plays[i] >= 2) {
            func_802656A8(D_80102B4A[player].bits, i, 1);
            if (count < 2) {
                awarded[count++] = i;
            }
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x24) == 0) {
        rules = &D_801468A0;
        ok = 0;
        if ((D_801462EC - 1U < 5 && status->score >= 15) ||
            (rules->time >= 0.0f && status->score >= 15 &&
             (elapsed = (f32) (s32) (rules->time * D_800E16B0 * D_800E16B4), (f32) D_801462C8.laps - elapsed) <= D_800E16B8)) {
            ok = 1;
        }
        if (ok == 1) {
            func_802656A8(D_80102B4A[player].bits, 0x24, 1);
            if (count < 2) {
                awarded[count++] = 0x24;
            }
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x25) == 0) {
        rules = &D_801468A0;
        ok = 0;
        if ((D_801462EC - 1U < 10 && status->score >= 25) ||
            (rules->time >= 0.0f && status->score >= 25 &&
             (elapsed = (f32) (s32) (rules->time * D_800E16BC * D_800E16C0), (f32) D_801462C8.laps - elapsed) <= D_800E16C4)) {
            ok = 1;
        }
        if (ok == 1) {
            func_802656A8(D_80102B4A[player].bits, 0x25, 1);
            if (count < 2) {
                awarded[count++] = 0x25;
            }
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x26) == 0 && status->score == 0 &&
        (globals = &D_801462C8)->laps >= 10 && globals->players >= 20) {
        func_802656A8(D_80102B4A[player].bits, 0x26, 1);
        if (count < 2) {
            awarded[count++] = 0x26;
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x27) == 0 && status->wins >= 5) {
        func_802656A8(D_80102B4A[player].bits, 0x27, 1);
        if (count < 2) {
            awarded[count++] = 0x27;
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x28) == 0 && (globals = &D_801462C8)->players >= 20) {
        score = status->score;
        ok = 1;
        for (i = 0; i < 4; i++) {
            if (ok != 1) {
                break;
            }
            if (player != i && (globals->status[i].active != 1 || globals->status[i].out != 0 ||
                                globals->status[i].score - score < 10)) {
                ok = 0;
            }
        }
        if (ok == 1) {
            func_802656A8(D_80102B4A[player].bits, 0x28, 1);
            if (count < 2) {
                awarded[count++] = 0x28;
            }
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x29) == 0 && D_80102B6C[player].value > 1000) {
        func_802656A8(D_80102B4A[player].bits, 0x29, 1);
        if (count < 2) {
            awarded[count++] = 0x29;
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x2A) == 0 && D_80102B74[player].value > 1000) {
        func_802656A8(D_80102B4A[player].bits, 0x2A, 1);
        if (count < 2) {
            awarded[count++] = 0x2A;
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x2B) == 0 && status->kills >= 10 &&
        (globals = &D_801462C8)->laps >= 10 && globals->players >= 20) {
        func_802656A8(D_80102B4A[player].bits, 0x2B, 1);
        if (count < 2) {
            awarded[count++] = 0x2B;
        }
    }
    if (func_80265670(D_80102B4A[player].bits, 0x2C) == 0 && status->losses == 0 &&
        (globals = &D_801462C8)->laps >= 10 && globals->players >= 20) {
        func_802656A8(D_80102B4A[player].bits, 0x2C, 1);
        if (count < 2) {
            awarded[count] = 0x2C;
        }
    }
}

#endif
