/* Cancels player arg2's pickup when the state at 0x58 of its 2920-byte record is 12 and arg3 asks:
   sets the word at 0xBA0 to 2, clears 0xBA4, drops one from the count at 0xB9C, stamps 0x41 on
   that count's two-byte slot at 0xB8C when the slot is free, silences the sound handle taken from
   the player's entry of the slot array at 4 of the block, and reports the cancel through
   func_8025DF54. Records 13 and above are left alone; the function always returns zero. */
#include "basetypes.h"

struct Slots {
    char pad[0x4C];
    s32 values[1];
};

struct Row {
    char pad0[0x58];
    s32 state;
    char pad5C[0xB9C - 0x5C];
    s32 count;
    s32 phase;
    s32 timer;
};

struct Block {
    char pad0[4];
    struct Slots *slots;
};

struct Sound {
    char pad0[0x10];
    u8 volume;
};

extern struct Block *D_800E54A4;
extern struct Sound *func_8041B87C(struct Slots *, s32);
extern s32 func_8025DF54(s32);

s32 func_80430208(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct Sound *sound;
    struct Row *row;
    char *base;
    u8 *mark;
    s32 index;
    s32 offset;
    s32 state;
    s32 count;

    index = arg2 & 0xFFFF;
    offset = index * 0xB68;
    state = ((struct Row *)(offset + (char *)D_800E54A4))->state;
    if (state == 0xD) {
        return 0;
    }
    if (state >= 0xE) {
        return 0;
    }
    if (state == 0xC && arg3 == 1) {
        sound = func_8041B87C(D_800E54A4->slots, index);
        row = (struct Row *)(index * 0xB68 + (char *)D_800E54A4);
        row->phase = 2;
        count = row->count;
        row->timer = 0;
        if (count > 0) {
            row->count = count - 1;
        }
        base = (char *)D_800E54A4;
        mark = (u8 *)(base + ((((struct Row *)(offset + base))->count * 2) +
                              index * 0xB68) + 0xB8C);
        if (*mark == 0) {
            *mark = 0x41;
        }
        sound->volume = 0xFF;
        func_8025DF54(0xE74);
    }
    return 0;
}
