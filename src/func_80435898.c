/* Copies the block's chosen 400-byte record for the place at slot arg0 into D_80102B00[arg0]: when
   the place is claimed (id != -1), copies the owning player's chosen slot into the record and marks
   the record's owned-slot byte, then always stamps the record's place-id byte. */
#include "basetypes.h"

struct Player {
    char pad0[0x18];
    char slots[4][400];
    char pad658[0xB68 - 0x658];
};

struct Place {
    s32 id;
    s32 value;
    s32 word8;
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
    struct Place places[4];
};

extern struct Block *D_800E54A4;
extern char D_80102B00[];
extern void func_802A1724(void *, void *, s32);

typedef struct func_80435898_S1 func_80435898_S1;
struct func_80435898_S1 {
    char pad0[0xC];
    s8 unkC;
    char padC[0xD - 0xC - sizeof(s8)];
    s8 unkD;
};

void func_80435898(s32 arg0) {
    char *record;
    s32 place;
    s32 owner;

    place = D_800E54A4->places[arg0].id;
    owner = D_800E54A4->places[arg0].value;
    record = &D_80102B00[arg0 * 400];
    if (place != -1) {
        func_802A1724(record, D_800E54A4->players[place].slots[owner], 400);
        ((func_80435898_S1 *)(record))->unkC = (s8) owner;
    }
    ((func_80435898_S1 *)(record))->unkD = (s8) place;
}
