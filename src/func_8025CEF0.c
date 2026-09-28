/* Starts a random song from a group on a music player: picks one of the group's songs with equal weight, returning -1 when the group has none, records the group and song and takes the next request id, repeats the pick for the queued group, sets the volume to 0x40 and the speed from the given scale, then either stops the current song so it restarts (while starting or playing) or requests a start, and returns the request id. The picker and restart are inline helpers; the pick for the queued group is repeated with its result unused, as in the cartridge. */
#include "basetypes.h"

typedef struct Bank {
    char pad0[0x2B60];
    s32 table;
    s32 count;
} Bank;

typedef struct Player {
    Bank *bank;
    s32 request;
    s32 state;
    s32 group;
    s32 song;
    s32 speed;
    s32 volume;
    char pad1C[2];
    s16 id;
} Player;

extern f32 D_800C90A0;

extern s32 func_80265570(s32, s32, s32, s32 *, s32 *);
extern s32 func_80274544(void);
extern char *func_80258D60(Bank *);
extern void func_80258760(Bank *);
extern void func_802587C4(Bank *);
extern void func_802B7FD0(char *, s32);
extern void func_802B8030(char *);

static inline s32 pick(Bank *bank, s32 group) {
    s32 first;
    s32 last;
    s32 i;
    s32 total;
    s32 roll;

    total = 0;
    if (func_80265570(bank->table, bank->count, group, &first, &last) == 0) {
        return -1;
    }
    if (first != last) {
        for (i = first; i <= last; i++) {
            total += 100;
        }
        roll = func_80274544() % total;
        total = 0;
        for (i = first; i < last; i++) {
            total += 100;
            if (roll <= total) {
                return i;
            }
        }
        return i;
    }
    return first;
}

static inline void restart(Player *player) {
    char *channel;

    if (player->state != 2 && player->state != 0) {
        player->state = 2;
        channel = func_80258D60(player->bank);
        func_802B7FD0(channel, player->id);
        func_802B8030(channel);
    }
}

s32 func_8025CEF0(Player *player, s32 group, f32 scale) {
    s32 song;
    s32 request;

    song = pick(player->bank, (s16)group);
    if (song == -1) {
        return -1;
    }
    func_80258D60(player->bank);
    func_80258760(player->bank);
    player->group = group;
    player->song = song;
    request = ++player->request;
    pick(player->bank, (s16)player->group);
    player->speed = scale * *(&D_800C90A0 + 1);
    player->volume = 0x40;
    if (player->state == 3 || player->state == 1) {
        restart(player);
    } else {
        player->state = 1;
    }
    func_802587C4(player->bank);
    return request;
}
