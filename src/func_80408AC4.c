/* Writes the 11-character rank title for the score D_8015371C into the end of the item's text:
   the title comes from the band the score falls in (below 50, 150, 300, 500, 800, 1300, 2000,
   3000, 4500, 6500 and 9999 and above), and the text position is the text length from
   func_80442158 minus 11; returns 0. */
#include "basetypes.h"

typedef struct {
    char pad0[0x14];
    char **text;
} Item;

extern u16 D_8015371C;
extern char *D_800D779C;
extern char *D_800D77A0;
extern char *D_800D77A4;
extern char *D_800D77A8;
extern char *D_800D77AC;
extern char *D_800D77B0;
extern char *D_800D77B4;
extern char *D_800D77B8;
extern char *D_800D77BC;
extern char *D_800D77C0;
extern char *D_800D77C4;
extern char *D_800D77C8;

extern s32 func_80442158(void);

s32 func_80408AC4(Item *item) {
    char *title;
    char *dest;
    s32 i;
    s32 score;

    title = 0;
    score = D_8015371C;
    if (D_8015371C < 50) {
        title = D_800D779C;
    } else if (score >= 50 && score < 150) {
        title = D_800D77A0;
    } else if (score >= 150 && score < 300) {
        title = D_800D77A4;
    } else if (score >= 300 && score < 500) {
        title = D_800D77A8;
    } else if (score >= 500 && score < 800) {
        title = D_800D77AC;
    } else if (score >= 800 && score < 1300) {
        title = D_800D77B0;
    } else if (score >= 1300 && score < 2000) {
        title = D_800D77B4;
    } else if (score >= 2000 && score < 3000) {
        title = D_800D77B8;
    } else if (score >= 3000 && score < 4500) {
        title = D_800D77BC;
    } else if (score >= 4500 && score < 6500) {
        title = D_800D77C0;
    } else if (score >= 6500 && score < 9999) {
        title = D_800D77C4;
    } else if (score >= 9999) {
        title = D_800D77C8;
    }
    dest = *item->text;
    dest += func_80442158() - 11;
    if (title != 0) {
        for (i = 0; i < 11; i++) {
            *dest++ = *title++;
        }
    }
    return 0;
}
