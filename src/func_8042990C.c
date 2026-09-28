/* For network-connection-mode 3 events with subcode 2, calls func_8029A73C and dispatches on
   func_8029AA08's report to activate one of screen D_800E4EF0's option widgets (default value
   zero), or its player-count widget with the screen's default count. Returns zero. */
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

extern struct Screen *D_800E4EF0;
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_802A2B24(void *arg0, s32 arg1);

s32 func_8042990C(s32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 kind;
    void *widget;
    s32 value;

    kind = arg2 >> 0x10;
    if ((kind == 3) && (arg3 == 2)) {
        func_8029A73C();
        switch (func_8029AA08()) {
        case 0x363:
            widget = D_800E4EF0->widget24;
            value = 0;
            func_802A2B24(widget, value);
            break;
        case 0x361:
            widget = D_800E4EF0->widget28;
            value = 0;
            func_802A2B24(widget, value);
            break;
        case 0x35F:
            widget = D_800E4EF0->widget2C;
            value = 0;
            func_802A2B24(widget, value);
            break;
        case 0x365:
            widget = D_800E4EF0->widget30;
            value = 0;
            func_802A2B24(widget, value);
            break;
        case 0x36C:
            widget = D_800E4EF0->widget34;
            value = D_800E4EF0->countDefault;
            func_802A2B24(widget, value);
            break;
        }
    }
    return 0;
}
