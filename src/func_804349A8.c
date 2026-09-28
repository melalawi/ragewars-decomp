#include "basetypes.h"

/* Reorders the four 400-byte player records D_80102B00 by the players' choices: copies all four to
   the buffer at 0x2E28 of the block D_800E54A4 points to and resets each through func_8022EF20,
   copies back the record each player chose (index at 0xB28 of its 2920-byte record at 0x58) into
   that player's place, and then places every unchosen buffered record whose owner byte 0xD is not
   negative into the first place whose owner byte is still negative, all through func_802A1724. */

struct Record {
    char pad0[0xD];
    s8 owner;
    char padE[400 - 0xE];
};

struct Player {
    char pad0[0xB28];
    s32 chosen;
    char padB2C[0xB68 - 0xB2C];
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
    char pad2DF8[0x2E28 - 0x2DF8];
    struct Record saved[4];
};

extern struct Block *D_800E54A4;
extern struct Record D_80102B00[];
extern void func_802A1724(void *, void *, s32);
extern void func_8022EF20(struct Record *);

void func_804349A8(void) {
    s32 used[4];
    s32 size;
    s32 chosen;
    s32 i;
    s32 j;

    size = 400;
    func_802A1724(&D_800E54A4->saved, D_80102B00, 0x640);
    for (i = 0; i < 4; i++) {
        func_8022EF20(&D_80102B00[i]);
        used[i] = 0;
    }
    for (i = 0; i < 4; i++) {
        chosen = D_800E54A4->players[i].chosen;
        if (chosen >= 0) {
            func_802A1724(&D_80102B00[i], &D_800E54A4->saved[chosen], size);
            used[chosen] = 1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (used[i] != 0 || D_800E54A4->saved[i].owner < 0) {
            continue;
        }
        for (j = 0; j < 4; j++) {
            if (D_80102B00[j].owner < 0) {
                func_802A1724(&D_80102B00[j], &D_800E54A4->saved[i], size);
                break;
            }
        }
    }
}
