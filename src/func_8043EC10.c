#include "basetypes.h"

/* Starts a match from the menu: clears byte 0x1D and sets byte 0x1E of D_801462C8, clears the active byte 0x78 of its eight 150-byte status records, then gives the menu at 0x20 the first of the four 0x224-byte controller profiles of D_8010F328 that func_8026439C reports active, marking the settings D_80146302 at 0x78 and recording its index in D_80146381, before calling func_8025E3A4, resetting D_8011FAC0 through func_8044EACC and setting D_80154048. */
struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[150 - 0x79];
};

struct Globals {
    char pad0[0x1D];
    u8 flag1D;
    u8 flag1E;
    char pad1F[0xD0 - 0x1F];
    struct Status status[8];
};

struct Settings {
    char pad[0x78];
    u8 chosen;
};

struct Menu {
    char pad[0x20];
    char *profile;
};

extern struct Globals D_801462C8;
extern struct Settings D_80146302;
extern s8 D_80146381;
extern char D_8010F328[];
extern char D_8011FAC0[];
extern s32 D_80154048;

extern s32 func_8026439C(char *);
extern void func_8025E3A4(void);
extern void func_8044EACC(char *, s32);

void func_8043EC10(void *arg0, struct Menu *menu) {
    struct Globals *globals;
    struct Settings *settings;
    char *profile;
    s32 on;
    s32 i;

    globals = &D_801462C8;
    globals->flag1D = 0;
    globals->flag1E = 1;
    for (i = 7; i >= 0; i--) {
        globals->status[i].active = 0;
    }
    i = 0;
    settings = &D_80146302;
    /* FAKEMATCH: constant-holding local places the li */
    on = 1;
    for (profile = D_8010F328; i < 4; i++) {
        if (func_8026439C(profile) != 0) {
            settings->chosen = on;
            D_80146381 = i;
            menu->profile = profile;
            break;
        }
        profile += 0x224;
    }
    func_8025E3A4();
    func_8044EACC(D_8011FAC0, -1);
    D_80154048 = 1;
}
