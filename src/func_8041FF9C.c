/* Enables character choices unlocked by active players and highlights the selected profile's unlocked characters. */
#include "basetypes.h"

typedef struct Widget {
    char pad0[0x10];
    u8 color;
} Widget;

typedef struct State {
    void *screen;
} State;

typedef struct Game {
    s32 flags;
    char pad4[9];
    u8 mode;
} Game;

extern Game D_801462C8[];
extern State *D_800E42D0;
extern char D_80102B00[][0x190];
extern signed char D_80102B0D[];
extern u8 D_80102B54[];
extern s32 D_800E3A54[][28];
extern u16 D_800E3A52[][56];
extern s32 func_8022F5B4(void *profile, s32 character);
extern s32 func_80265670(u8 *bits, s32 index);
extern void func_802656A8(u8 *bits, s32 index, s32 value);
extern void func_8040E9D0(Widget *widget, s32 hidden);
extern void func_8040E958(Widget *widget, s32 visible);
extern Widget *func_8040ECB0(void *parent, s32 id);

void func_8041FF9C(void) {
    u8 bits[4];
    s32 i;
    s32 j;
    s32 found;
    Widget *widget;
    Widget *mark;

    for (i = 0; i < 17; i++) {
        found = 0;
        for (j = 0; j < 4 && !found; j++) {
            if (D_80102B0D[j * 0x190] >= 0) {
                found = found || func_8022F5B4(D_80102B00[j], D_800E3A54[i][0]);
            }
        }
        if (D_801462C8->mode == 0 || D_801462C8->mode == 2) {
            if (D_801462C8->flags & 0x8000000) {
                found = 1;
            }
        }
        func_802656A8(bits, i, found);
    }
    if (D_801462C8->mode == 1) {
        func_802656A8(bits, 11, 0);
        func_802656A8(bits, 12, 0);
        func_802656A8(bits, 13, 0);
        func_802656A8(bits, 14, 0);
    }
    if (D_801462C8->mode == 0 || D_801462C8->mode == 2) {
        func_802656A8(bits, 1, 1);
    }
    for (i = 0; i < 17; i++) {
        widget = func_8040ECB0(D_800E42D0->screen, D_800E3A52[i][0]);
        func_8040E9D0(widget, 0);
        if (!func_80265670(bits, i)) {
            if (widget) {
                func_8040E9D0(widget, 1);
                func_8040E958(widget, 0);
            }
        } else if (D_801462C8->mode == 1 && func_80265670(D_80102B54, D_800E3A54[i][0]) == 1) {
            mark = func_8040ECB0(widget, 0x83);
            func_8040E958(mark, 1);
            mark->color = 50;
        }
    }
}
