#include "basetypes.h"

/* Sets up a player in a slot: records whether its record at arg2 is a computer driver, loads the driver's profile at 0x688 through func_8026369C from D_8010EEB8 (computers, keeping the record's slot) or from the slot's entry of D_8010F328, clears its race counters and eight lap splits, links it to its vehicle through func_802097E8 and resets it through func_8021A78C and func_802A7F58. */
#define WORD(p, offset) (*(s32 *)((char *)(p) + (offset)))

typedef struct {
    char pad0[0x7F];
    signed char slot;
    char pad80;
    u8 team;
    char pad82[0xF];
    u8 computer;
} Record;

extern char D_8010EEB8[];
extern char D_8010F328[];
extern char D_800CE8C8[];

extern void func_8026369C(char *, char *);
extern void func_802097E8(s32, char *);
extern void func_8021A78C(char *);
extern void func_802A7F58(char *);

void func_8044AB34(char *player, s32 slot, Record *record) {
    s32 i;
    s32 computer;
    u8 team;

    computer = record->computer;
    WORD(player, 0x5D0) = 0;
    WORD(player, 0x1450) = computer;
    if (computer != 0) {
        func_8026369C(player + 0x688, D_8010EEB8);
        WORD(player, 0x5D4) = record->slot;
    } else {
        func_8026369C(player + 0x688, D_8010F328 + slot * 0x224);
        WORD(player, 0x5D4) = slot;
    }
    WORD(player, 0x5D8) = (s32)record;
    team = record->team;
    WORD(player, 0x11BC) = 0;
    WORD(player, 0x11C0) = 0;
    WORD(player, 0x5EC) = 0;
    WORD(player, 0x5F0) = 0;
    WORD(player, 0x864) = 0;
    WORD(player, 0x868) = 0;
    WORD(player, 0x1D8) = (s32)player;
    player[3] = team;
    func_802097E8(WORD(player, 0x1454), player);
    WORD(player, 0x13C8) = 0;
    WORD(player, 0x121C) = slot * 2;
    WORD(player, 0x1220) = 0;
    WORD(player, 0x122C) = 0;
    WORD(player, 0x11CC) = 0;
    WORD(player, 0x1218) = 0;
    for (i = 0; i < 8; i++) {
        WORD(player, 0x12CC + i * 4) = 0;
        WORD(player, 0x12F4 + i * 4) = 0;
    }
    WORD(player, 0x1338) = -1;
    WORD(player, 0x12C4) = 0;
    WORD(player, 0x12C8) = 0;
    WORD(player, 0x1334) = 0;
    WORD(player, 0x13B4) = (s32)D_800CE8C8;
    WORD(player, 0x11E8) = 0;
    func_8021A78C(player);
    WORD(player, 0x16D4) = 0;
    *(s16 *)(player + 0x16D8) = 0;
    func_802A7F58(player + 0xD40);
}
