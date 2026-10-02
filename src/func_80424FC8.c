/* Returns the rank title of player record D_80102B00[index]: counts which of the record's 50
   achievement flags at 0x4A func_80265670 reports set, maps the count to one of twenty ranks (two
   counts per rank up to 21, then three, then five), stores the rank in the record's byte 0x25 and
   returns its text from D_800D722C. Indexes of 4 and above get the first title unchanged. */
#include "shared/menu_state_records.h"
#include "shared/menu_language.h"



extern Record D_80102B00[];
extern char *D_800D722C[];

extern s32 func_80265670(u8 *, s32);

#if defined(VERSION_EU)
extern char *D_800E1254[];
extern char *D_800E1264[];
extern char *D_800E1274[];
extern char *D_800E1284[];
extern char *D_800E1294[];
extern char *D_800E12A4[];
extern char *D_800E12B4[];
extern char *D_800E12C4[];
extern char *D_800E12D4[];
extern char *D_800E12E4[];
extern char *D_800E12F4[];
extern char *D_800E1304[];
extern char *D_800E1314[];
extern char *D_800E1324[];
extern char *D_800E1334[];
extern char *D_800E1344[];
extern char *D_800E1354[];
extern char *D_800E1364[];
extern char *D_800E1374[];
extern char *D_800E1384[];
#elif defined(VERSION_EU_X)
extern char *D_800DD034[];
extern char *D_800DD040[];
extern char *D_800DD04C[];
extern char *D_800DD058[];
extern char *D_800DD064[];
extern char *D_800DD070[];
extern char *D_800DD07C[];
extern char *D_800DD088[];
extern char *D_800DD094[];
extern char *D_800DD0A0[];
extern char *D_800DD0AC[];
extern char *D_800DD0B8[];
extern char *D_800DD0C4[];
extern char *D_800DD0D0[];
extern char *D_800DD0DC[];
extern char *D_800DD0E8[];
extern char *D_800DD0F4[];
extern char *D_800DD100[];
extern char *D_800DD10C[];
extern char *D_800DD118[];
#endif
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
char *func_80424FC8(s32 index) {
    s32 count;
    s32 i;
    char *text;
    s32 rank;

    if (index >= 4) {
        return RW_LOCALIZED_TEXT(D_800D722C[0], D_800E1254, D_800DD034, D_80152789);
    }
    count = 0;
    i = 0;
    do {
        if (func_80265670(D_80102B00[index].achievementFlags, i) == 1) {
            count++;
        }
        i++;
    } while (i < 50);
    switch (count) {
    case 0:
    case 1:
        rank = 0;
        text = RW_LOCALIZED_TEXT(D_800D722C[0], D_800E1254, D_800DD034, D_80152789);
        break;
    case 2:
    case 3:
        rank = 1;
        text = RW_LOCALIZED_TEXT(D_800D722C[1], D_800E1264, D_800DD040, D_80152789);
        break;
    case 4:
    case 5:
        rank = 2;
        text = RW_LOCALIZED_TEXT(D_800D722C[2], D_800E1274, D_800DD04C, D_80152789);
        break;
    case 6:
    case 7:
        rank = 3;
        text = RW_LOCALIZED_TEXT(D_800D722C[3], D_800E1284, D_800DD058, D_80152789);
        break;
    case 8:
    case 9:
        rank = 4;
        text = RW_LOCALIZED_TEXT(D_800D722C[4], D_800E1294, D_800DD064, D_80152789);
        break;
    case 10:
    case 11:
        rank = 5;
        text = RW_LOCALIZED_TEXT(D_800D722C[5], D_800E12A4, D_800DD070, D_80152789);
        break;
    case 12:
    case 13:
        rank = 6;
        text = RW_LOCALIZED_TEXT(D_800D722C[6], D_800E12B4, D_800DD07C, D_80152789);
        break;
    case 14:
    case 15:
        rank = 7;
        text = RW_LOCALIZED_TEXT(D_800D722C[7], D_800E12C4, D_800DD088, D_80152789);
        break;
    case 16:
    case 17:
        rank = 8;
        text = RW_LOCALIZED_TEXT(D_800D722C[8], D_800E12D4, D_800DD094, D_80152789);
        break;
    case 18:
    case 19:
        rank = 9;
        text = RW_LOCALIZED_TEXT(D_800D722C[9], D_800E12E4, D_800DD0A0, D_80152789);
        break;
    case 20:
    case 21:
        rank = 10;
        text = RW_LOCALIZED_TEXT(D_800D722C[10], D_800E12F4, D_800DD0AC, D_80152789);
        break;
    case 22:
    case 23:
    case 24:
        rank = 11;
        text = RW_LOCALIZED_TEXT(D_800D722C[11], D_800E1304, D_800DD0B8, D_80152789);
        break;
    case 25:
    case 26:
    case 27:
        rank = 12;
        text = RW_LOCALIZED_TEXT(D_800D722C[12], D_800E1314, D_800DD0C4, D_80152789);
        break;
    case 28:
    case 29:
    case 30:
        rank = 13;
        text = RW_LOCALIZED_TEXT(D_800D722C[13], D_800E1324, D_800DD0D0, D_80152789);
        break;
    case 31:
    case 32:
    case 33:
        rank = 14;
        text = RW_LOCALIZED_TEXT(D_800D722C[14], D_800E1334, D_800DD0DC, D_80152789);
        break;
    case 34:
    case 35:
    case 36:
        rank = 15;
        text = RW_LOCALIZED_TEXT(D_800D722C[15], D_800E1344, D_800DD0E8, D_80152789);
        break;
    case 37:
    case 38:
    case 39:
        rank = 16;
        text = RW_LOCALIZED_TEXT(D_800D722C[16], D_800E1354, D_800DD0F4, D_80152789);
        break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
        rank = 17;
        text = RW_LOCALIZED_TEXT(D_800D722C[17], D_800E1364, D_800DD100, D_80152789);
        break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
        rank = 18;
        text = RW_LOCALIZED_TEXT(D_800D722C[18], D_800E1374, D_800DD10C, D_80152789);
        break;
    default:
        rank = 19;
        text = RW_LOCALIZED_TEXT(D_800D722C[19], D_800E1384, D_800DD118, D_80152789);
        break;
    }
    D_80102B00[index].rank = rank;
    return text;
}
