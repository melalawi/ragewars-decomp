/* Flags which of the 16 notes on the selected Controller Pak (D_800E28C8 when D_8015375C is set,
   otherwise the menu owner's channel byte) hold this game's save: an entry gets bit 0x1000000 when
   its note exists and, for save kind D_800E28C4 1 or 2, has four- and two-byte game and company
   codes equal to D_800D770C and D_800D7708 and the name D_800D7700 or D_800D7704 (or always for
   another kind), and loses the bit otherwise. */
#include "basetypes.h"

typedef struct {
    char pad0[8];
    u32 flags;
    char padC[0x1C];
} MenuItem;

typedef struct {
    char pad0[4];
    s8 channel;
} MenuOwner;

typedef struct {
    char pad0[0xC];
    MenuItem *items;
    char pad10[0x10];
    MenuOwner *owner;
} Menu;

extern s32 D_8015375C;
extern s32 D_800E28C8;
extern s32 D_800E28C4;
extern char *D_800D7700;
extern char *D_800D7704;
extern char *D_800D7708;
extern char *D_800D770C;

extern s32 func_8040458C(s32 ch, s32 index, s32 *exists, char *name, char *ext, s32 *size,
                         char *company, char *code);
extern s32 func_802A1238(char *);
extern s32 func_802A137C(char *a, char *b);

void func_80405F48(Menu *menu) {
    s32 ch;
    s32 i;
    s32 other;
    s32 result;
    s32 match;
    char *title;
    char ext[8];
    char company[8];
    char code[8];
    char name[16];
    s32 exists;
    s32 size;

    if (D_8015375C != 0) {
        ch = D_800E28C8;
    } else {
        ch = menu->owner->channel;
    }
    for (i = 0; i < 16; i++) {
        result = func_8040458C(ch, i, &exists, name, ext, &size, company, code);
        other = 1;
        if (result == 0 && exists != 0) {
            switch (D_800E28C4) {
                case 1:
                    if (func_802A1238(code) == 4 && func_802A1238(company) == 2 &&
                        func_802A137C(code, D_800D770C) == 0 && func_802A137C(company, D_800D7708) == 0) {
                        match = 1;
                    } else {
                        match = 0;
                    }
                    title = D_800D7700;
                    break;
                case 2:
                    if (func_802A1238(code) == 4 && func_802A1238(company) == 2 &&
                        func_802A137C(code, D_800D770C) == 0 && func_802A137C(company, D_800D7708) == 0) {
                        match = 1;
                    } else {
                        match = 0;
                    }
                    title = D_800D7704;
                    break;
                case 0:
                default:
                    other = 0;
                    goto done;
            }
            if (func_802A137C(name, title) == 0 && match != 0) {
                other = 0;
            }
        }
    done:
        if (other) {
            menu->items[i + 3].flags &= ~0x1000000;
        } else {
            menu->items[i + 3].flags |= 0x1000000;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2380_4[] = {0x80, 0x0C, 0xFF, 0x5C};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7700_4[] = {0x80, 0x0D, 0x52, 0xDC};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D36D4_4[] = {0x80, 0x0D, 0x18, 0xEC};
#endif
