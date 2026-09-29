/* Handles input on the level select: confirm starts the selected level (or the final one, 8000) with
   its time/score target from the level index, while the previous/next buttons step D_80154034 to the
   nearest level whose unlock bit is set in the rules' mask, or -1 when none is unlocked. */
#include "basetypes.h"

typedef struct Pad {
    char pad0[0x20];
    s32 buttons;
} Pad;

extern u8 D_801462C8[];
extern s32 D_801462CC;
extern u8 D_801462E6;
extern s32 D_80154034;
extern char D_8011FAC0[];
extern char D_8011FE88[];

extern s32 func_8026439C(s32 buttons);
extern s32 func_802643A8(s32 buttons);
extern s32 func_802643C0(s32 buttons);
extern void func_80293268(void *menu, s32 target);
extern s32 func_802934DC(void);
extern void func_80293808(void *menu, s32 id);
extern void func_8043DEDC(Pad *pad);
extern void func_8044E178(void *menu, s32 target, s32 arg2);

static inline s32 levelBit(s32 level) {
    s32 bit;

    switch (level) {
    default:
    case 0:
        bit = 0x10000;
        break;
    case 1:
        bit = 0x20000;
        break;
    case 2:
        bit = 0x40000;
        break;
    case 3:
        bit = 0x80000;
        break;
    case 4:
        bit = 0x100000;
        break;
    case 5:
        bit = 0x200000;
        break;
    case 6:
        bit = 0x800000;
        break;
    case 7:
        bit = 0x400000;
        break;
    case 8:
        bit = 0x1000000;
        break;
    case 9:
        bit = 0x2000000;
        break;
    case 10:
        bit = 0x4000000;
        break;
    }
    return bit;
}

static inline s32 findUnlocked(s32 level, s32 step) {
    s32 i;

    for (i = 0; i < 11; i++) {
        level += step;
        if (level >= 11) {
            level = 0;
        } else if (level < 0) {
            level = 10;
        }
        if (D_801462CC & levelBit(level)) {
            return level;
        }
    }
    return -1;
}

s32 func_8043C868(s32 arg0, Pad *pad) {
    s32 target;
    u8 *rules;

    switch (D_80154034) {
    default:
    case 0:
        target = 1000;
        break;
    case 1:
        target = 2000;
        break;
    case 2:
        target = 3000;
        break;
    case 3:
        target = 4000;
        break;
    case 4:
        target = 5000;
        break;
    case 5:
        target = 6000;
        break;
    case 6:
        target = 7401;
        break;
    case 7:
        target = 7501;
        break;
    case 8:
        target = 7601;
        break;
    case 9:
        target = 7602;
        break;
    case 10:
        target = 8000;
        break;
    }

    if (func_8026439C(pad->buttons) != 0) {
        if (target == 8000) {
            D_801462E6 = 1;
            func_8043DEDC(pad);
            func_80293808(D_8011FAC0, 0x11);
            return 1;
        }
        if (func_802934DC() != 0) {
            func_8044E178(D_8011FE88, target, 2);
            return 0;
        }
        rules = D_801462C8;
        rules[0x1D] = 0;
        rules[0x1E] = 1;
        func_8043DEDC(pad);
        func_80293268(D_8011FAC0, target);
        return 1;
    }

    if (func_802643A8(pad->buttons) != 0) {
        D_80154034 = findUnlocked(D_80154034, -1);
    } else if (func_802643C0(pad->buttons) != 0) {
        D_80154034 = findUnlocked(D_80154034, 1);
    }
    return 0;
}
