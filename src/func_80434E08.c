#include "basetypes.h"

/* Labels player p's roster rows: for each of the four 400-byte records of D_80102B00 whose byte
   0xE is clear and whose owner byte 0xD is p, when the matching 150-byte status record at 0xD0 of
   D_801462C8 has byte 0x78 equal to one and byte 0x91 clear, points the text at 0x38 of the next
   row item (0x2BA, 0x2E5, 0x2E6, then 0x2E7) of the window at 0xC of p's 2920-byte record at 0x58
   of the block D_800E54A4 points to at that record. Adapted from func_80434CE4 with the copy
   replaced by the row label. */

#if defined(VERSION_DE)
#define VALUE_2D6 0x2AC
#define VALUE_2C2 0x2AA
#define VALUE_2C6 0x2AB
#elif defined(VERSION_EU_MUL)
#define VALUE_2D6 0x2C7
#define VALUE_2C2 0x2C2
#define VALUE_2C6 0x2C6
#else
#define VALUE_2D6 0x2E6
#define VALUE_2C2 0x2BA
#define VALUE_2C6 0x2E5
#endif

struct Item {
    char pad[0x38];
    u8 *text;
};

struct Player {
    char pad0[0xC];
    void *window;
    char pad10[0xB68 - 0x10];
};

struct Block {
    char pad0[0x58];
    struct Player players[4];
};

struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[0x91 - 0x79];
    u8 out;
    char pad92[150 - 0x92];
};

struct Globals {
    char pad0[0xD0];
    struct Status status[8];
};

extern struct Block *D_800E54A4;
extern u8 D_80102B00[];
extern s8 D_80102B0D[];
extern s8 D_80102B0E[];
extern struct Globals D_801462C8;
extern struct Item *func_8040ECB0(void *, s32);

void func_80434E08(s32 player) {
    struct Globals *globals;
    s32 row;
    s32 id;
    s32 i;

    row = 0;
    globals = &D_801462C8;
    for (i = 0; i < 4; i++) {
        switch (row) {
        case 0:
            id = VALUE_2C2;
            break;
        case 1:
            id = VALUE_2C6;
            break;
        case 2:
            id = VALUE_2D6;
            break;
        default:
            id = VALUE_2D6 + 1;
            break;
        }
        if (D_80102B0E[i * 400] == 0 && D_80102B0D[i * 400] == player &&
            globals->status[i].active == 1 && globals->status[i].out == 0) {
            func_8040ECB0(D_800E54A4->players[player].window, id)->text = &D_80102B00[i * 400];
            row++;
        }
    }
}
