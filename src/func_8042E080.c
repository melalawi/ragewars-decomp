/* Prepares a match: stops the current screen, starts screen 2, resets the eight player status
   records (clearing bytes 0x94 and 0x95 and, for human slots, the team byte 0x92) while counting
   active humans, clears the match counters, and outside mode 0 looks up the stage default for the
   first active player through func_80425E50 and resets the round state. It then runs the setup of
   the current rule set D_80154028, copies each active human's name and the five profile bytes at 0x189
   of their player record into status bytes 0x7B, 0x7D, 0x79, 0x7A and 0x82, sets the game mode (team mode 2 falls back to 1 with fewer than two
   humans) and, when func_8025E2E4 allows, picks a random arena 0x38 to 0x3B. */
#include "basetypes.h"

struct Status {
    char pad0[0x78];
    u8 joined;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    char pad7C;
    u8 unk7D;
    char pad7E[2];
    s8 kind;
    char pad81;
    u8 unk82;
    char pad83;
    char name[0x91 - 0x84];
    u8 computer;
    u8 team;
    char pad93;
    u8 lives;
    u8 score;
};

struct Record {
    char name[0x189];
    u8 profile[5];
    char pad18E[2];
};

struct Match {
    char pad0[0x90];
    s32 kills;
    char pad94[4];
    s32 deaths;
};

extern u8 D_801462C8[];
extern struct Match D_801468A0;
extern struct Record D_80102B00[];
extern s32 D_800E4680;
extern s32 D_8015402C;
extern s32 D_80146948;
extern s32 D_80154028;

extern void func_8029A73C(void);
extern void func_80299368(s32);
extern void func_802A3304(void);
extern s32 func_80425E50(s32, s32, s32);
extern void func_8042E3D0(void);
extern void func_8042ED84(void);
extern void func_8042ECF0(void);
extern void func_8042EEB8(void);
extern void func_8042EE18(void);
extern void func_802A125C(char *, char *);
extern void func_8040C4A8(s32);
extern s32 func_8025E2E4(void);
extern s32 func_80274544(void);
extern void func_8025E2F4(s32);

void func_8042E080(void) {
    u8 *settings;
    u8 *config;
    struct Status *status;
    s32 humans;
    s32 i;
    s32 first;
    struct Match *match;

    func_8029A73C();
    func_80299368(2);
    func_802A3304();
    humans = 0;
    settings = D_801462C8;
    for (i = 0; i < 8; i++) {
        status = (struct Status *)(settings + 0xD0 + i * 0x96);
        status->lives = 0;
        status->score = 0;
        if (status->computer == 0) {
            status->team = 0xFF;
        }
        if (status->computer == 0 && status->joined == 1) {
            humans++;
        }
    }
    match = &D_801468A0;
    match->deaths = 0;
    match->kills = 0;
    D_800E4680 = 0;
    if (settings[0xD] != 0) {
        first = 0;
        while (((struct Status *)(settings + 0xD0 + first * 0x96))->joined == 0) {
            first++;
        }
        status = (struct Status *)(settings + 0xD0 + first * 0x96);
        switch (settings[0xD]) {
        case 1:
            D_800E4680 = func_80425E50(D_8015402C, 0, status->kind);
            break;
        case 2:
            D_800E4680 = func_80425E50(D_8015402C, 1, 0);
            break;
        case 3:
            D_800E4680 = func_80425E50(D_8015402C, 3, 0);
            break;
        case 4:
            D_800E4680 = func_80425E50(D_8015402C, 2, 0);
            break;
        }
        D_80146948 = 0;
        func_8042E3D0();
    }
    switch (D_80154028) {
    case 0:
        func_8042ED84();
        break;
    case 1:
        func_8042ECF0();
        break;
    case 2:
        func_8042EEB8();
        break;
    case 3:
        func_8042EE18();
        break;
    }
    for (i = 0; i < 4; i++) {
        status = (struct Status *)(settings + 0xD0 + i * 0x96);
        if (status->joined == 1 && status->computer == 0) {
            func_802A125C(status->name, D_80102B00[i].name);
            if (settings[0xD] != 0) {
                status->team = 0;
            } else {
                status->team = 0xFF;
            }
            status->unk7B = D_80102B00[i].profile[0];
            status->unk7D = D_80102B00[i].profile[1];
            status->unk79 = D_80102B00[i].profile[2];
            status->unk7A = D_80102B00[i].profile[3];
            status->unk82 = D_80102B00[i].profile[4];
        }
    }
    config = D_801462C8;
    if (config[0x580] == 2 && humans >= 2) {
        func_8040C4A8(1);
    } else {
        func_8040C4A8(config[0x580]);
    }
    if (func_8025E2E4() != 0) {
        func_8025E2F4(func_80274544() % 4 + 0x38);
    }
}
