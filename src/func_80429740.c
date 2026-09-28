/* Synchronizes screen D_800E4EF0's option widgets and player-count widget with the stored option
 * block D_801462C8 and the live player count: pushes the four stored option bytes back into their
 * checkbox widgets, sets the player-count widget to the lesser of the screen's cap and the live
 * player count (or the screen's default when that count is zero), and sets the selection and
 * cursor widgets from the stored selection byte and the current cursor value. */
#include "basetypes.h"

struct Screen {
    char pad0[0x1C];
    void *selectWidget;
    void *cursorWidget;
    void *widget24;
    void *widget28;
    void *widget2C;
    void *widget30;
    void *widget34;
    s32 countCap;
    s32 countDefault;
};

struct Options {
    char pad[0x24];
    s8 val0;
    s8 val1;
    s8 val2;
    s8 val3;
    u8 val4;
};

extern struct Screen *D_800E4EF0;
extern struct Options D_801462C8;
extern void func_802A2B24(void *arg0, s32 arg1);
extern void func_8041AD90(void *arg0, s32 arg1);
extern s32 func_8041E790(void);
extern s32 func_8041EBC0(void);

void func_80429740(void) {
    struct Options *opts;
    s32 count;
    s32 cap;

    opts = &D_801462C8;
    func_802A2B24(D_800E4EF0->widget24, opts->val1);
    func_802A2B24(D_800E4EF0->widget28, opts->val0);
    func_802A2B24(D_800E4EF0->widget2C, opts->val2);
    func_802A2B24(D_800E4EF0->widget30, opts->val3);
    count = func_8041EBC0();
    cap = D_800E4EF0->countCap;
    if (cap < count) {
        count = cap;
    }
    if (count == 0) {
        count = D_800E4EF0->countDefault;
    }
    func_802A2B24(D_800E4EF0->widget34, count);
    func_8041AD90(D_800E4EF0->selectWidget, opts->val4);
    func_8041AD90(D_800E4EF0->cursorWidget, func_8041E790());
}
