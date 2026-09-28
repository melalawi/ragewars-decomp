/* Returns the rank title of player record D_80102B00[index]: counts which of the record's 50
   achievement flags at 0x4A func_80265670 reports set, maps the count to one of twenty ranks (two
   counts per rank up to 21, then three, then five), stores the rank in the record's byte 0x25 and
   returns its text from D_800D722C. Indexes of 4 and above get the first title unchanged. */
#include "basetypes.h"

struct Record {
    char pad0[0x25];
    u8 rank;
    char pad26[0x4A - 0x26];
    u8 flags[0x190 - 0x4A];
};

extern struct Record D_80102B00[];
extern char *D_800D722C[];

extern s32 func_80265670(u8 *, s32);

char *func_80424FC8(s32 index) {
    s32 count;
    s32 i;
    char *text;
    s32 rank;

    if (index >= 4) {
        return D_800D722C[0];
    }
    count = 0;
    i = 0;
    do {
        if (func_80265670(D_80102B00[index].flags, i) == 1) {
            count++;
        }
        i++;
    } while (i < 50);
    switch (count) {
    case 0:
    case 1:
        rank = 0;
        text = D_800D722C[0];
        break;
    case 2:
    case 3:
        rank = 1;
        text = D_800D722C[1];
        break;
    case 4:
    case 5:
        rank = 2;
        text = D_800D722C[2];
        break;
    case 6:
    case 7:
        rank = 3;
        text = D_800D722C[3];
        break;
    case 8:
    case 9:
        rank = 4;
        text = D_800D722C[4];
        break;
    case 10:
    case 11:
        rank = 5;
        text = D_800D722C[5];
        break;
    case 12:
    case 13:
        rank = 6;
        text = D_800D722C[6];
        break;
    case 14:
    case 15:
        rank = 7;
        text = D_800D722C[7];
        break;
    case 16:
    case 17:
        rank = 8;
        text = D_800D722C[8];
        break;
    case 18:
    case 19:
        rank = 9;
        text = D_800D722C[9];
        break;
    case 20:
    case 21:
        rank = 10;
        text = D_800D722C[10];
        break;
    case 22:
    case 23:
    case 24:
        rank = 11;
        text = D_800D722C[11];
        break;
    case 25:
    case 26:
    case 27:
        rank = 12;
        text = D_800D722C[12];
        break;
    case 28:
    case 29:
    case 30:
        rank = 13;
        text = D_800D722C[13];
        break;
    case 31:
    case 32:
    case 33:
        rank = 14;
        text = D_800D722C[14];
        break;
    case 34:
    case 35:
    case 36:
        rank = 15;
        text = D_800D722C[15];
        break;
    case 37:
    case 38:
    case 39:
        rank = 16;
        text = D_800D722C[16];
        break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
        rank = 17;
        text = D_800D722C[17];
        break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
        rank = 18;
        text = D_800D722C[18];
        break;
    default:
        rank = 19;
        text = D_800D722C[19];
        break;
    }
    D_80102B00[index].rank = rank;
    return text;
}
