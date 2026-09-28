#include "basetypes.h"

/* Moves player p's column cursor on the screen D_800E59E0: fades the shown item of the current
   column (D_800E5A1A[p][column]) to alpha 0x23, calls func_8040E958(0) on the item D_800E5A06[p][column]
   unless the column is 5, then steps the column back for direction 1 (0 wraps to 5, and in mode 1
   at 0x4D4 anything above 2 becomes 2) or forward otherwise (5 wraps to 0, and in mode 1 anything
   past 2 becomes 5), and redraws through func_8043BC3C. */

struct Item {
    char pad[0x10];
    unsigned char alpha;
};

struct Entry {
    char pad0[0x4AC];
    s32 column;
    char pad4B0[0x4CC - 0x4B0];
    s32 mode;
};

struct Screen {
    void *window;
    s32 pad4;
    struct Entry entries[4];
};

struct Cell {
    u16 id;
    u16 pad;
};

extern struct Screen *D_800E59E0;
extern struct Cell D_800E5A06[][19];
extern struct Cell D_800E5A1A[][19];
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_8040E9A8(struct Item *, s32);
extern void func_8043BC3C(s32, s32);

void func_8043AED0(s32 player, s32 direction) {
    struct Item *item;
    s32 column;

    column = D_800E59E0->entries[player].column;
    item = func_8040ECB0(D_800E59E0->window, D_800E5A1A[player][column].id);
    func_8040E9A8(item, 0);
    item->alpha = 0x23;
    if (column != 5) {
        func_8040E958(func_8040ECB0(D_800E59E0->window, D_800E5A06[player][column].id), 0);
    }
    if (direction == 1) {
        if (column == 0) {
            column = 5;
        } else {
            column--;
            if (D_800E59E0->entries[player].mode == 1 && column >= 3) {
                column = 2;
            }
        }
    } else {
        if (column == 5) {
            column = 0;
        } else {
            column++;
            if (D_800E59E0->entries[player].mode == 1 && column >= 3) {
                column = 5;
            }
        }
    }
    func_8043BC3C(player, column);
}
