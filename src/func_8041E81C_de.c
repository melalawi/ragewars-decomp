
#include "types.h"
struct Prize { s32 id; char **name; };
struct Reward { s32 id; s32 tier; s32 mode; s32 shown; char name[12]; };
/* Deals out random rewards for count entries at difficulty level: starts every entry at 5 points
   from the level's budget in D_800DF768, then for up to 10001 random picks doubles an entry below
   20 points while the budget covers it; each entry then records mode 4 and its tier (points / 10)
   in D_8014DCF0's 0x1C-byte records and draws random tier items from the seventeen per tier in
   D_800DF7CC, copying the item's name, until it gets one that exists. */





extern s32 D_800DF768[];
extern struct Prize D_800DF7CC[][17];
extern struct Reward D_8014DCF0[];

extern s32 func_802744D4_de(void);
extern void func_802A025C_de(char *dst, char *src);

void func_8041E81C_de(s32 count, s32 level) {
    s32 points[3];
    s32 *p;
    s32 budget;
    s32 i;
    s32 *entry;
    s32 tier;
    s32 value;
    s32 pick;
    s32 last;

    if (count <= 0) {
        return;
    }
    for (i = 2, p = points + i; i >= 0; i--) {
        *p-- = 0;
    }
    last = count - 1;
    if (count <= 0) {
        budget = 0;
    } else {
        budget = D_800DF768[level * 5 + last];
    }
    for (i = 0; i < count; i++) {
        points[i] = 5;
        budget -= 5;
    }
    i = 0;
    while (budget > 0) {
        entry = &points[func_802744D4_de() % count];
        value = *entry;
        if (value < 20 && budget >= value) {
            *entry = value * 2;
            budget -= value;
        }
        if (++i >= 10001) {
            break;
        }
    }
    for (i = 0; i < count; i++) {
        tier = points[i] / 10;
        D_8014DCF0[i].mode = 4;
        D_8014DCF0[i].tier = tier;
        D_8014DCF0[i].shown = tier;
        do {
            pick = func_802744D4_de() % 17;
            D_8014DCF0[i].id = D_800DF7CC[tier][pick].id;
            func_802A025C_de(D_8014DCF0[i].name, *D_800DF7CC[tier][pick].name);
        } while (D_8014DCF0[i].id == -1);
    }
}
