/* When team sync is enabled, copies a player's team flag from its actor (byte 0x8F of the record at
   0x5D8) into D_801468A0 if it is 1; then resumes the script D_8011FAC0 through func_8044E9A0 in mode
   1 or else clears the actor's word at 0x5D0; returns 1. Matched through a local pointer to
   D_801468A0 and the team byte held in a local. */
typedef struct {
    char pad[0x8F];
    unsigned char team;
} Info;

typedef struct {
    char pad[0x5D0];
    int waiting;
    char pad5D4[4];
    Info *info;
} Actor;

typedef struct {
    char pad[0x1C];
    Actor *actor;
} Player;

typedef struct {
    char pad[0x54];
    int sync;
    char pad58[0x1C];
    int team;
} Sync;

extern Sync D_801468A0;
extern int D_80145070;
extern char D_8011FAC0[];
extern void func_8044E9A0(char *);

int func_804439B4(int unused, Player *player) {
    Sync *sync = &D_801468A0;
    int team;

    if (sync->sync != 0) {
        team = player->actor->info->team;
        if (team == 1) {
            sync->team = team;
        }
    }
    if (D_80145070 == 1) {
        func_8044E9A0(D_8011FAC0);
    } else {
        player->actor->waiting = 0;
    }
    return 1;
}
