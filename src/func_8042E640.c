#include "basetypes.h"

typedef struct {
    char pad0[0x78];
    u8 active;
    char pad79[0x7F - 0x79];
    s8 index;
    s8 kind;
    u8 team2;
    char pad82[2];
    char name[0x91 - 0x84];
    s8 taken;
    u8 rank;
    u8 team;
    char pad94[0x96 - 0x94];
} Player;

typedef struct {
    char pad0[0xD0];
    Player players[8];
} Settings;

typedef struct {
    s32 *names;
    s32 unk4;
} NameEntry;

extern Settings D_801462C8;
extern s32 D_800D7330[];
extern s32 D_800D72F0[];
extern NameEntry D_800E3820[];
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif

extern s32 func_80274544(void);
extern s32 func_8042F074(void);
extern s32 func_8041F1B0(s32 kind);
extern void func_802A125C(char *dst, s32 name);

/* Seats a joining player (request: kind+1, team, rank) in the highest free player slot, filling its index, kind (random for 20), team (random for 3, at most 2), rank and name (per language on the European cartridges); returns the slot or -1 when all are taken. */
s32 func_8042E640(u8 *request) {
    s32 i;
    s32 kind;
    s32 team;
    s32 name;
    s32 result;
    Player *player;
    Settings *settings; /* FAKEMATCH: copy-only local, set inside the scan loop, steers the base register */

    for (i = 7; i > 0; i--) {
        settings = &D_801462C8;
        if (settings->players[i].active != 1) {
            break;
        }
    }
    result = -1;
    if (i >= 0) {
        player = &D_801462C8.players[i];
        player->taken = 1;
        player->active = 1;
        player->index = i;
        kind = request[0] - 1;
        if (kind == 19) {
            player->kind = func_8042F074();
        } else {
            player->kind = kind;
        }
        team = request[1];
        if (team == 3) {
            player->team = func_80274544() % 3;
        } else {
            player->team = team;
        }
        if (player->team >= 3) {
            player->team = 2;
        }
        player->team2 = player->team;
        player->rank = request[2];
        switch (player->kind) {
        case 15:
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            name = D_800D7330[D_80152789];
#else
            name = D_800D7330[0];
#endif
            break;
        case 16:
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            name = D_800D72F0[D_80152789];
#else
            name = D_800D72F0[0];
#endif
            break;
        default:
#if defined(VERSION_EU) || defined(VERSION_EU_X)
            name = D_800E3820[player->team * 17 + func_8041F1B0(player->kind)].names[D_80152789];
#else
            name = *D_800E3820[player->team * 17 + func_8041F1B0(player->kind)].names;
#endif
            break;
        }
        func_802A125C(player->name, name);
        result = i;
    }
    return result;
}
