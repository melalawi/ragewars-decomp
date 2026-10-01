#include "basetypes.h"

/* Sets up a player in a slot: records whether its record at arg2 is a computer driver, loads the driver's profile at 0x688 through func_8026369C from D_8010EEB8 (computers, keeping the record's slot) or from the slot's entry of D_8010F328, clears its race counters and eight lap splits, links it to its vehicle through func_802097E8 and resets it through func_8021A78C and func_802A7F58. */
#include "shared/player.h"
typedef SharedPlayer Player;

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
    ((Player *)player)->views1C.view5D0_44.f5D0 = 0;
    ((Player *)player)->views1450.view1450_5.f1450 = computer;
    if (computer != 0) {
        func_8026369C(player + 0x688, D_8010EEB8);
        ((Player *)player)->views1C.view5D4_48.f5D4 = record->slot;
    } else {
        func_8026369C(player + 0x688, D_8010F328 + slot * 0x224);
        ((Player *)player)->views1C.view5D4_48.f5D4 = slot;
    }
    ((Player *)player)->views5D8.view5D8_8.f5D8 = (s32)record;
    team = record->team;
    ((Player *)player)->views5E8.view11BC_140.f11BC = 0;
    ((Player *)player)->views5E8.view11C0_142.f11C0 = 0;
    ((Player *)player)->views5E8.view5EC_8.f5EC = 0;
    ((Player *)player)->views5E8.view5F0_10.f5F0 = 0;
    ((Player *)player)->views5E8.view864_122.f864 = 0;
    ((Player *)player)->views5E8.view868_124.f868 = 0;
    ((Player *)player)->views1C.view1D8_24.f1D8 = (s32)player;
    player[3] = team;
    func_802097E8(((Player *)player)->views1454.view1454_1.f1454, player);
    ((Player *)player)->views13C8.view13C8_2.f13C8 = 0;
    ((Player *)player)->views5E8.view121C_160.f121C = slot * 2;
    ((Player *)player)->views5E8.view1220_162.f1220 = 0;
    ((Player *)player)->views122C.view122C_3.f122C = 0;
    ((Player *)player)->views5E8.view11CC_146.f11CC = 0;
    ((Player *)player)->views5E8.view1218_158.f1218 = 0;
    for (i = 0; i < 8; i++) {
        ((Player *)player)->views12CC.view12CC_1.splitsA[i] = 0;
        ((Player *)player)->views12F4.view12F4_1.splitsB[i] = 0;
    }
    ((Player *)player)->views1338.view1338_1.f1338 = -1;
    ((Player *)player)->views12C4.view12C4_1.f12C4 = 0;
    ((Player *)player)->views12C8.view12C8_1.f12C8 = 0;
    ((Player *)player)->views1334.view1334_1.f1334 = 0;
    ((Player *)player)->views13B4.view13B4_4.f13B4 = (s32)D_800CE8C8;
    ((Player *)player)->views5E8.view11E8_151.f11E8 = 0;
    func_8021A78C(player);
    ((Player *)player)->views16D4.view16D4_1.f16D4 = 0;
    ((func_8044AB34_S1 *)(player))->unk16D8 = 0;
    func_802A7F58((char *)player + 0xD40);
}
