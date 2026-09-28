#include "basetypes.h"

/* Places player p's chosen record into a free place: when the flag word for the chosen slot (index
   at 0xAEC of the player's 2920-byte record at 0x58, flags from 0xAF0) is 1, it takes the first of
   the four 12-byte places at 0x2DF8 of the block D_800E54A4 points to whose id is -1, records it in
   the entry func_804353C0 returns (id 0, value the place, word 8 set to 1), copies the chosen
   400-byte slot from 0x18 of the player's record into that place of D_80102B00 through
   func_802A1724, marks p as its owner at 0xD, clears the player's word at 0x4 and relabels through
   func_80433DA8(-1), returning 1; otherwise it returns 0. */

struct Place {
    s32 id;
    s32 value;
    s32 word8;
};

struct Player {
    char pad0[0x4];
    s32 word4;
    char pad8[0x18 - 0x8];
    char slots[4][400];
    char pad658[0xAEC - 0x658];
    s32 chosen;
    s32 flags[4];
    char padB00[0xB68 - 0xB00];
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
    struct Place places[4];
};

struct Record {
    char pad0[0xD];
    s8 owner;
    char padE[400 - 0xE];
};

extern struct Block *D_800E54A4;
extern struct Record D_80102B00[];
extern s32 func_804353C0();
extern void func_802A1724(void *, void *, s32);
extern void func_80433DA8(s32);

s32 func_80434B58(s32 player) {
    struct Record *record;
    s32 chosen;
    s32 place;
    s32 found;
    s32 entry;
    s32 result;
    s32 i;

    chosen = D_800E54A4->players[player].chosen;
    result = 0;
    if (D_800E54A4->players[player].flags[chosen] == 1) {
        found = -1;
        for (i = 0; i < 4 && found == -1; i++) {
            if (D_800E54A4->places[i].id == -1) {
                found = i;
            }
        }
        place = found;
        if (place >= 0) {
            entry = func_804353C0();
            if (entry >= 0) {
                D_800E54A4->places[entry].id = 0;
                D_800E54A4->places[entry].value = place;
                D_800E54A4->places[entry].word8 = 1;
            }
            record = &D_80102B00[found];
            func_802A1724(record, D_800E54A4->players[player].slots[chosen], 400);
            record->owner = player;
            D_800E54A4->players[player].word4 = 0;
            place = -1;
            func_80433DA8(place);
            result = 1;
        }
    }
    return result;
}
