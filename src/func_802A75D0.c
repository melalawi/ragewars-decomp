/* Steps a four-item toggle menu: counts frames, and once func_802A8088 allows input opens the menu on button 0x20 or, on release, closes it after running the selected item's select callback (toggling it when that reports 1, or directly when it has none); each frame it settles every item's bounce animation toward zero, toggles the selected item off when an enabled item's update callback fails, advances the blink counter twice, and then either finishes opening, finishes closing, or moves the selection through func_802A80C4 on buttons 0x100 and 0x200. Toggling an item starts its bounce at +5 with the current frame and its restore values, or at -5 when switching off. */
#include "basetypes.h"

typedef struct MenuItem {
    s32 active;
    s32 on;
    char pad8[0x18 - 0x8];
    s16 bounce;
    s32 startFrame;
    f32 value;
    s32 extra;
    f32 restoreValue;
    s32 restoreExtra;
    s32 (*select)(void *input, struct MenuItem *item);
    s32 (*update)(void *input, struct MenuItem *item);
} MenuItem;

typedef struct {
    u8 state;
    u8 timer;
    MenuItem items[4];
    u16 selected;
    s16 blink;
    s32 frame;
} Menu;

typedef struct {
    char pad0[0x6AC];
    s32 held;
    s32 pressed;
} Input;

#define ABS(x) ((x) < 0.0f ? -(x) : (x))

extern s32 func_802A8088(void);
extern void func_802A80C4(Menu *menu, s32 direction);

static inline void toggle(Menu *menu, MenuItem *item) {
    if ((item->on = !item->on) != 0) {
        item->bounce = 5;
        item->startFrame = menu->frame;
        item->value = item->restoreValue;
        item->extra = item->restoreExtra;
    } else {
        item->bounce = -5;
    }
}

void func_802A75D0(Menu *menu, Input *input) {
    s16 bounce;
    s32 i;

    /* FAKEMATCH: preserve the original frame-update instruction scheduling at the function entry. */
do {
    } while (0);
    menu->frame++;
    if (func_802A8088() == 0) {
        return;
    }
    if (menu->state < 2) {
        if ((input->held & 0x20) && menu->state != 1) {
            menu->state = 1;
        }
    } else if (!(input->held & 0x20) && menu->state != 3) {
        menu->state = 3;
        if (menu->items[menu->selected].active != 0) {
            if (menu->items[menu->selected].select != 0) {
                if (menu->items[menu->selected].select(input, &menu->items[menu->selected]) == 1) {
                    toggle(menu, &menu->items[menu->selected]);
                }
            } else {
                toggle(menu, &menu->items[menu->selected]);
            }
        }
    }
    for (i = 0; i < 4; i++) {
        bounce = ABS(menu->items[i].bounce);
        if (bounce != 0) {
            if (bounce == menu->items[i].bounce) {
                menu->items[i].bounce--;
            } else {
                menu->items[i].bounce++;
            }
        }
        if (menu->items[i].active != 0 && menu->items[i].on != 0 && menu->items[i].update != 0 &&
            menu->items[i].update(input, &menu->items[i]) == 0) {
            toggle(menu, &menu->items[menu->selected]);
        }
    }
    if (++menu->blink >= 5) {
        menu->blink = -5;
    }
    if (++menu->blink >= 5) {
        menu->blink = -5;
    }
    if (menu->state == 1) {
        if (++menu->timer >= 5) {
            menu->state = 2;
        }
    } else if (menu->state == 3) {
        if (--menu->timer == 0) {
            menu->state = 0;
        }
    } else if (input->pressed & 0x100) {
        func_802A80C4(menu, 0);
    } else if (input->pressed & 0x200) {
        func_802A80C4(menu, 1);
    }
}
