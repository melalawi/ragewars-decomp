#include "basetypes.h"

/* Handles a cancel event for the player the low half of the third argument names: calls
   func_8029A73C and, when the block D_800E54A4 points to is in phase 7 at 0x54, returns to screen 3
   through func_80435958; otherwise by the player's state at the start of its 2920-byte record at
   0x58: in state 0 it leaves for screen 0x1B unless func_80435790 reports something pending, in
   state 0xC it blanks the character at the cursor of the name at 0xB34 of the record, and in
   states 0x16 and 0x1B it closes the keyboard through func_80433DA8 or func_80433F14 with -1,
   returns the player to state 0xD and redraws through func_80432488. Returns zero. Written from
   the assembly with the player index as an unsigned short parameter. */

struct Char {
    char c;
    char pad;
};

struct Player {
    s32 state;
    char pad4[0xB34 - 0x4];
    struct Char name[8];
    s32 cursor;
    char padB48[0xB68 - 0xB48];
};

struct Block {
    char pad0[0x54];
    s32 phase;
    struct Player players[4];
};

extern struct Block *D_800E54A4;
extern void func_8029A73C();
extern void func_80435958(s32);
extern s32 func_80435790();
extern void func_80433DA8(s32);
extern void func_80433F14(s32);
extern void func_80432488(s32);

s32 func_80432334(void *arg0, void *arg1, u16 player) {
    func_8029A73C();
    if (D_800E54A4->phase == 7) {
        func_80435958(3);
        return 0;
    }
    switch (D_800E54A4->players[player].state) {
    case 0:
        if (func_80435790() > 0) {
            return 0;
        }
        func_8029A73C();
        func_80435958(0x1B);
        return 0;
    case 0xC:
        func_8029A73C();
        D_800E54A4->players[player].name[D_800E54A4->players[player].cursor].c = ' ';
        break;
    case 0x16:
        func_8029A73C();
        func_80433DA8(-1);
        D_800E54A4->players[player].state = 0xD;
        func_80432488(player);
        break;
    case 0x1B:
        func_8029A73C();
        func_80433F14(-1);
        D_800E54A4->players[player].state = 0xD;
        func_80432488(player);
        break;
    default:
        return 0;
    }
    return 0;
}
