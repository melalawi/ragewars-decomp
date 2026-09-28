#include "basetypes.h"

/* Moves the focus of the current screen's selected widget in a direction (5 to 8 following its first, second, third or fourth link) past linked widgets flagged 0x100, and selects the first unflagged one through func_8029A1D4. */

typedef struct Widget {
    char pad0[0xC];
    s16 id;
    char padE[4];
    u16 flags;
    char pad14[0x2C - 0x14];
    struct Widget *links[4];
} Widget;

typedef struct Screen {
    char pad0[8];
    Widget *focus;
    char padC[0x1C - 0xC];
} Screen;

typedef struct Ui {
    s32 pad0;
    s32 current;
    s32 pad8;
    Screen *screens;
} Ui;

extern Ui *D_8014D080;
extern void func_8029A1D4(s32 id, Widget **links, s32 direction);

void func_80297CD0(s32 direction) {
    Widget *widget;
    Widget **links;
    s32 id;

    widget = D_8014D080->screens[D_8014D080->current].focus;
    id = -1;
    links = widget->links;
    if (widget == 0 || !(widget->flags & 0x10)) {
        return;
    }
    switch (direction) {
    case 5:
        while (links[0] != 0) {
            widget = links[0];
            if (!(widget->flags & 0x100)) {
                goto found;
            }
            links = widget->links;
        }
        break;
    case 6:
        while (links[1] != 0) {
            widget = links[1];
            links = widget->links;
            if (!(widget->flags & 0x100)) {
                goto found;
            }
        }
        break;
    case 7:
        while (links[2] != 0) {
            widget = links[2];
            links = widget->links;
            if (!(widget->flags & 0x100)) {
                goto found;
            }
        }
        break;
    found:
        id = widget->id;
        break;
    case 8:
        while (links[3] != 0) {
            widget = links[3];
            links = widget->links;
            if (!(widget->flags & 0x100)) {
                goto found;
            }
        }
        break;
    }
    if (id >= 0) {
        func_8029A1D4(id, links, direction);
    }
}
