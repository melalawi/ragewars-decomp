#include "basetypes.h"

/* Moves player p's list cursor in the block D_800E54A4 points to: direction 1 steps the cursor at
   0xAD8 of the player's 2920-byte record at 0x58 forward below 15 and scrolls the window at 0xADC
   so the cursor stays in the three visible rows (at most 13), any other direction steps both back
   while positive; then it sets the three row labels at 0xAE0 to alpha 0xFF with the texts of the
   70-byte name entries at 0x658 from the scroll position, and points item 0x2D6 of the player's
   window at 0xC at the code at 0x3C of the entry under the cursor. */

struct Label {
    char pad[0x10];
    u8 alpha;
    char pad11[0x38 - 0x11];
    char *text;
};

struct Name {
    char text[0x3C];
    char code[70 - 0x3C];
};

struct Player {
    char pad0[0xC];
    void *window;
    char pad10[0x658 - 0x10];
    struct Name names[15];
    char padA72[0xAD8 - 0xA72];
    s32 cursor;
    s32 scroll;
    struct Label *labels[3];
    char padAEC[0xB68 - 0xAEC];
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
};

extern struct Block *D_800E54A4;
extern struct Label *func_8040ECB0(void *, s32);

void func_8043442C(s32 player, s32 direction) {
    s32 i;
    s32 cursor;

    if (direction == 1) {
        if (D_800E54A4->players[player].cursor < 15) {
            D_800E54A4->players[player].cursor++;
            if (D_800E54A4->players[player].cursor >= D_800E54A4->players[player].scroll + 3) {
                if (D_800E54A4->players[player].scroll + 3 < 15) {
                    D_800E54A4->players[player].scroll++;
                } else {
                    D_800E54A4->players[player].scroll = 13;
                }
            }
        }
    } else if (D_800E54A4->players[player].cursor > 0) {
        D_800E54A4->players[player].cursor--;
        if (D_800E54A4->players[player].scroll > 0 &&
            D_800E54A4->players[player].cursor - D_800E54A4->players[player].scroll < 0) {
            D_800E54A4->players[player].scroll--;
        }
    }
    for (i = 0; i < 3; i++) {
        D_800E54A4->players[player].labels[i]->alpha = 0xFF;
        D_800E54A4->players[player].labels[i]->text =
            D_800E54A4->players[player].names[D_800E54A4->players[player].scroll + i].text;
    }
    cursor = D_800E54A4->players[player].cursor;
    func_8040ECB0(D_800E54A4->players[player].window, 0x2D6)->text =
        D_800E54A4->players[player].names[cursor].code;
}
