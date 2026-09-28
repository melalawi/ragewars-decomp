/* Slider widget message handler: clamps the current value into range, then dispatches on the
   message to get/set the value, range, step or user word, adjusts by one step, or posts the new
   value to the parent. */
#include "basetypes.h"

typedef struct {
    char pad[0xC];
    s16 parentId;
    char pad2[0x44 - 0xC - 2];
    s32 lo;
    s32 hi;
    s32 step;
    s32 value;
    char pad3[0x6C - 0x50 - 4];
    s32 userWord;
} Widget;

extern void func_8040C9D0(Widget *);
extern s32 func_8029A958(void);
extern void func_8029A5D4(s32, s32, s32, s32, s32);
extern void func_8029A73C(void);

s32 func_8040C780(Widget *arg0, s32 msg, s32 arg2, s32 arg3) {
    s32 result;
    Widget *widget = arg0;

    if (widget->value < widget->lo) {
        widget->value = widget->lo;
    }
    if (widget->value > widget->hi) {
        widget->value = widget->hi;
    }

    switch (msg) {
        case 5:
        case 8:
            if (arg3 != 0) {
                s32 v = widget->value + widget->step;
                s32 hi = widget->hi;
                widget->value = v;
                if (hi < v) {
                    widget->value = hi;
                }
            }
            goto post;

        case 6:
        case 7:
            if (arg3 != 0) {
                s32 v = widget->value - widget->step;
                s32 lo = widget->lo;
                widget->value = v;
                if (v < lo) {
                    widget->value = lo;
                }
            }
            goto post;

        case 0x1000:
            result = widget->value;
            goto end;

        case 0x1002:
            result = widget->lo;
            goto end;

        case 0x1003:
            result = widget->hi;
            goto end;

        case 0x1006:
            result = widget->step;
            goto end;

        case 0x1008:
            result = widget->userWord;
            goto end;

        case 0x1005:
            if (arg2 < widget->lo) {
                goto post;
            }
            if (widget->hi < arg2) {
                goto post;
            }
            widget->value = arg2;
            goto post;

        case 0x1004:
            if (widget->lo < arg2) {
                widget->hi = arg2;
            }
            if (arg3 < widget->hi) {
                widget->lo = arg3;
            }
            goto post;

        case 0x1007:
            if (arg2 < (widget->hi - widget->lo)) {
                widget->step = arg2;
            }
            goto post;

        case 0x1009:
            widget->userWord = arg2;
            goto post;

        default:
            result = 0;
            goto end;
    }

post:
    func_8040C9D0(widget);
    func_8029A5D4(func_8029A958(), 0x100A, arg0->parentId, widget->value, 0);
    func_8029A73C();
    result = 0;

end:
    return result;
}
