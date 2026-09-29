#include "basetypes.h"

/* Sets up a player in a slot: records whether its record at arg2 is a computer driver, loads the driver's profile at 0x688 through func_8026369C from D_8010EEB8 (computers, keeping the record's slot) or from the slot's entry of D_8010F328, clears its race counters and eight lap splits, links it to its vehicle through func_802097E8 and resets it through func_8021A78C and func_802A7F58. */
typedef struct {
    char pad0[0x1D8];
    s32 f1D8;
    char pad1DC[0x3F4];
    s32 f5D0;
    s32 f5D4;
    s32 f5D8;
    char pad5DC[0x10];
    s32 f5EC;
    s32 f5F0;
    char pad5F4[0x270];
    s32 f864;
    s32 f868;
    char pad86C[0x950];
    s32 f11BC;
    s32 f11C0;
    char pad11C4[0x8];
    s32 f11CC;
    char pad11D0[0x18];
    s32 f11E8;
    char pad11EC[0x2C];
    s32 f1218;
    s32 f121C;
    s32 f1220;
    char pad1224[0x8];
    s32 f122C;
    char pad1230[0x94];
    s32 f12C4;
    s32 f12C8;
    s32 splitsA[8];
    char pad12EC[0x8];
    s32 splitsB[8];
    char pad1314[0x20];
    s32 f1334;
    s32 f1338;
    char pad133C[0x78];
    s32 f13B4;
    char pad13B8[0x10];
    s32 f13C8;
    char pad13CC[0x84];
    s32 f1450;
    s32 f1454;
    char pad1458[0x27C];
    s32 f16D4;
} Player;

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

typedef struct func_8044AB34_S1 func_8044AB34_S1;
struct func_8044AB34_S1 {
    char pad0[0x16D8];
    s16 unk16D8;
};

void func_8044AB34(char *player, s32 slot, Record *record) {
    s32 i;
    s32 computer;
    u8 team;

    computer = record->computer;
    ((Player *)player)->f5D0 = 0;
    ((Player *)player)->f1450 = computer;
    if (computer != 0) {
        func_8026369C(player + 0x688, D_8010EEB8);
        ((Player *)player)->f5D4 = record->slot;
    } else {
        func_8026369C(player + 0x688, D_8010F328 + slot * 0x224);
        ((Player *)player)->f5D4 = slot;
    }
    ((Player *)player)->f5D8 = (s32)record;
    team = record->team;
    ((Player *)player)->f11BC = 0;
    ((Player *)player)->f11C0 = 0;
    ((Player *)player)->f5EC = 0;
    ((Player *)player)->f5F0 = 0;
    ((Player *)player)->f864 = 0;
    ((Player *)player)->f868 = 0;
    ((Player *)player)->f1D8 = (s32)player;
    player[3] = team;
    func_802097E8(((Player *)player)->f1454, player);
    ((Player *)player)->f13C8 = 0;
    ((Player *)player)->f121C = slot * 2;
    ((Player *)player)->f1220 = 0;
    ((Player *)player)->f122C = 0;
    ((Player *)player)->f11CC = 0;
    ((Player *)player)->f1218 = 0;
    for (i = 0; i < 8; i++) {
        ((Player *)player)->splitsA[i] = 0;
        ((Player *)player)->splitsB[i] = 0;
    }
    ((Player *)player)->f1338 = -1;
    ((Player *)player)->f12C4 = 0;
    ((Player *)player)->f12C8 = 0;
    ((Player *)player)->f1334 = 0;
    ((Player *)player)->f13B4 = (s32)D_800CE8C8;
    ((Player *)player)->f11E8 = 0;
    func_8021A78C(player);
    ((Player *)player)->f16D4 = 0;
    ((func_8044AB34_S1 *)(player))->unk16D8 = 0;
    func_802A7F58((char *)player + 0xD40);
}
