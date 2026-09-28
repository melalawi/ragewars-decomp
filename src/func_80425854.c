/* Awards the single-player unlocks of player p: in a one-player game (settings byte 0xD and word
   0x680 both 1) past stage 0x22 of D_8015402C, gives record D_80102B00[p] the flag for the
   character in the player's status byte 0x80 unless it already has it, then flag 0xB once 0x11, 1
   and 8 are held, 0xC once 2, 6 and 9 are, and 0xD once 3, 0x12 and 0xA are. Returns the
   character flag newly given (none for character 4), or -1. */
#include "basetypes.h"

struct Status {
    char pad0[0x80];
    s8 kind;
    char pad81[0x96 - 0x81];
};

struct Settings {
    char pad0[0xD];
    u8 players;
    char padE[0xD0 - 0xE];
    struct Status status[4];
    char pad328[0x680 - 0x328];
    s32 story;
};

extern struct Settings D_801462C8;
extern char D_80102B00[];
extern s32 D_8015402C;

extern s32 func_8022F5B4(char *, s32);
extern void func_8022F594(char *, s32);

s32 func_80425854(s32 p) {
    char *record;
    struct Settings *settings;
    s32 given;

    record = D_80102B00 + p * 400;
    settings = &D_801462C8;
    given = -1;
    if (settings->players == 1 && settings->story == 1 && D_8015402C >= 0x23) {
        switch (settings->status[p].kind) {
        case 0:
            if (func_8022F5B4(record, 0x11) == 0) {
                func_8022F594(record, 0x11);
                given = 0x11;
            }
            break;
        case 1:
            if (func_8022F5B4(record, 0x6) == 0) {
                func_8022F594(record, 0x6);
                given = 0x6;
            }
            break;
        case 2:
            if (func_8022F5B4(record, 0x3) == 0) {
                func_8022F594(record, 0x3);
                given = 0x3;
            }
            break;
        case 3:
            if (func_8022F5B4(record, 0x4) == 0) {
                func_8022F594(record, 0x4);
                given = 0x4;
            }
            break;
        case 4:
            if (func_8022F5B4(record, 0xE) == 0) {
                func_8022F594(record, 0xE);
            }
            break;
        case 5:
            if (func_8022F5B4(record, 0x1) == 0) {
                func_8022F594(record, 0x1);
                given = 0x1;
            }
            break;
        case 6:
            if (func_8022F5B4(record, 0x12) == 0) {
                func_8022F594(record, 0x12);
                given = 0x12;
            }
            break;
        case 7:
            if (func_8022F5B4(record, 0x8) == 0) {
                func_8022F594(record, 0x8);
                given = 0x8;
            }
            break;
        case 8:
            if (func_8022F5B4(record, 0x9) == 0) {
                func_8022F594(record, 0x9);
                given = 0x9;
            }
            break;
        case 9:
            if (func_8022F5B4(record, 0xA) == 0) {
                func_8022F594(record, 0xA);
                given = 0xA;
            }
            break;
        case 17:
            if (func_8022F5B4(record, 0x2) == 0) {
                func_8022F594(record, 0x2);
                given = 0x2;
            }
            break;
        case 18:
            break;
        }
        if (func_8022F5B4(record, 0x11) == 1 && func_8022F5B4(record, 1) == 1 &&
            func_8022F5B4(record, 8) == 1 && func_8022F5B4(record, 0xB) == 0) {
            func_8022F594(record, 0xB);
        }
        if (func_8022F5B4(record, 2) == 1 && func_8022F5B4(record, 6) == 1 &&
            func_8022F5B4(record, 9) == 1 && func_8022F5B4(record, 0xC) == 0) {
            func_8022F594(record, 0xC);
        }
        if (func_8022F5B4(record, 3) == 1 && func_8022F5B4(record, 0x12) == 1 &&
            func_8022F5B4(record, 0xA) == 1 && func_8022F5B4(record, 0xD) == 0) {
            func_8022F594(record, 0xD);
        }
    }
    return given;
}
