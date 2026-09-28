/* Returns whether a player actor can use the item picked up through func_8024E914: never for non-players or disabled actors, always during a team round when the model says so, and otherwise by the item's table: a D_800D31D0 power-up when the actor's team matches a D_800CE474 entry or its slot is free while not both states 3 and 7 are in use, a D_800D3230 weapon when on those teams or below the level from func_8022ACA8, a D_800D32A8 item when func_8022ABF0 exceeds the actor's count at 0x5E4, any D_800D34C0 item, and a D_800D3390 item unless it is item 0xBD6. */
#include "basetypes.h"

typedef struct Entry {
    char pad0[4];
    s16 id;
    char pad6[6];
    s16 index;
} Entry;

typedef struct {
    char pad0[0x8F];
    u8 teamRound;
} Model;

typedef struct {
    s8 value;
    s8 state;
} Slot;

typedef struct {
    u8 type;
    char pad1[0xE4 - 1];
    u16 team;
    char padE6[0x100 - 0xE6];
    s32 flags;
    char pad104[0x5D8 - 0x104];
    Model *model;
    char pad5DC[0x5E4 - 0x5DC];
    s32 count;
    char pad5E8[0x5F4 - 0x5E8];
    s16 levels[7];
    char pad602[0x602 - 0x602];
    Slot slots[22];
} Actor;

extern char D_800D31D0;
extern char D_800D3230;
extern char D_800D32A8;
extern char D_800D3390;
extern char D_800D34C0;
extern s32 D_800CE474[2];
extern s32 D_801468F4;
extern s32 func_8024E914(s32 arg0);
extern s32 func_8022ACA8(Actor *actor, s16 index, s32 arg2);
extern s32 func_8022ABF0(Actor *actor, s32 id);

static inline Entry *find_entry(char *table, s32 count, s32 size, s32 id) {
    Entry *entry;
    s32 i;

    entry = (Entry *)table;
    for (i=count; i!=-1; --i) {
        if (entry->id == id) return entry;
        entry=(Entry *)((char *)entry+size);
    }
    return 0;
}

#define IS_PLAYER(actor) ((actor)->type == 1 && ((actor)->flags & 0x300000) != 0)

s32 func_802AC3F0(s32 arg0, Actor *actor) {
    Entry *powerup;
    Entry *weapon;
    Entry *item;
    Entry *bonus;
    Entry *special;
    s32 id;
    s32 level;
    s32 noState3;
    s32 noState7;
    s32 i;
    Actor *player;

    id = func_8024E914(arg0);
    if (IS_PLAYER(actor)) {
        player = actor;
        if (player->count == 0) {
            return 0;
        }
        if (D_801468F4 != 0 && player->model->teamRound != 0) {
            return 1;
        }
        powerup = find_entry(&D_800D31D0, 3, 0x18, id);
        if (powerup != 0) {
            noState3 = 1;
            noState7 = 1;
            if (player->team == D_800CE474[0] || player->team == D_800CE474[1]) {
                return 1;
            }
            if (player->slots[powerup->index].state != -1) {
                return 0;
            }
            for (i = 0; i < 22; i++) {
                if (player->slots[i].state == 3) {
                    noState3 = 0;
                } else if (player->slots[i].state == 7) {
                    noState7 = 0;
                }
            }
            if (noState3 || noState7) {
                return 1;
            }
            return 0;
        }
        weapon = find_entry(&D_800D3230, 5, 0x14, id);
        if (weapon != 0) {
            level = func_8022ACA8(player, weapon->index, 0);
            if (player->team == D_800CE474[0] || player->team == D_800CE474[1]) {
                return 1;
            }
            return player->levels[weapon->index] < level;
        }
        item = find_entry(&D_800D32A8, 7, 0x18, id);
        if (item != 0) {
            return player->count < func_8022ABF0(player, id);
        }
        bonus = find_entry(&D_800D34C0, 15, 0x18, id);
        if (bonus != 0) {
            return 1;
        }
        special = find_entry(&D_800D3390, 2, 0x10, id);
        if (special != 0) {
            if ((player->team == D_800CE474[0] || player->team == D_800CE474[1]) && special->id != 0xBD6) {
                return 1;
            }
            return special->id != 0xBD6;
        }
        return 0;
    }
    return IS_PLAYER(actor);
}
