#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80423280.h"

/* Count achievements, store the rank, and select its version-specific title. */
extern Record_func_80433914_de D_800FEB00[];
extern s32 func_80265650_de(s32 bits, s32 index);

#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
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
extern char *D_800E1374_eu[];
extern char *D_800E1384[];
#define RANK_TEXT(index, table) ((table)[D_80152789])
#else
extern char *D_800D3200[];
#define RANK_TEXT(index, table) (D_800D3200[index])
#endif

char *func_80424DE8_de(s32 index) {
    s32 count;
    s32 i;
    char *text;
    s32 rank;

    if (index >= 4) {
        return RANK_TEXT(0, D_800E1254);
    }
    count = 0;
    i = 0;
    do {
        if (func_80265650_de((s32)D_800FEB00[index].achievementFlags, i) == 1) {
            count++;
        }
        i++;
    } while (i < 50);
    switch (count) {
    case 0:
    case 1:
        rank = 0;
        text = RANK_TEXT(0, D_800E1254);
        break;
    case 2:
    case 3:
        rank = 1;
        text = RANK_TEXT(1, D_800E1264);
        break;
    case 4:
    case 5:
        rank = 2;
        text = RANK_TEXT(2, D_800E1274);
        break;
    case 6:
    case 7:
        rank = 3;
        text = RANK_TEXT(3, D_800E1284);
        break;
    case 8:
    case 9:
        rank = 4;
        text = RANK_TEXT(4, D_800E1294);
        break;
    case 10:
    case 11:
        rank = 5;
        text = RANK_TEXT(5, D_800E12A4);
        break;
    case 12:
    case 13:
        rank = 6;
        text = RANK_TEXT(6, D_800E12B4);
        break;
    case 14:
    case 15:
        rank = 7;
        text = RANK_TEXT(7, D_800E12C4);
        break;
    case 16:
    case 17:
        rank = 8;
        text = RANK_TEXT(8, D_800E12D4);
        break;
    case 18:
    case 19:
        rank = 9;
        text = RANK_TEXT(9, D_800E12E4);
        break;
    case 20:
    case 21:
        rank = 10;
        text = RANK_TEXT(10, D_800E12F4);
        break;
    case 22:
    case 23:
    case 24:
        rank = 11;
        text = RANK_TEXT(11, D_800E1304);
        break;
    case 25:
    case 26:
    case 27:
        rank = 12;
        text = RANK_TEXT(12, D_800E1314);
        break;
    case 28:
    case 29:
    case 30:
        rank = 13;
        text = RANK_TEXT(13, D_800E1324);
        break;
    case 31:
    case 32:
    case 33:
        rank = 14;
        text = RANK_TEXT(14, D_800E1334);
        break;
    case 34:
    case 35:
    case 36:
        rank = 15;
        text = RANK_TEXT(15, D_800E1344);
        break;
    case 37:
    case 38:
    case 39:
        rank = 16;
        text = RANK_TEXT(16, D_800E1354);
        break;
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
        rank = 17;
        text = RANK_TEXT(17, D_800E1364);
        break;
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
        rank = 18;
        text = RANK_TEXT(18, D_800E1374_eu);
        break;
    default:
        rank = 19;
        text = RANK_TEXT(19, D_800E1384);
        break;
    }
    D_800FEB00[index].rank = rank;
    return text;
}
