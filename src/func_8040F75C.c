/* Relocates a loaded widget list and its children from the stored base to base: for widgets
   flagged 0x10 rebases the four resource words, then by widget type clears an out-of-range image
   index (type 3), rebases the extra pointer and marks the widget 0x800 (type 2), clears the fourth
   word (type 4) or turns the three packed resource references (index and offset) into pointers,
   acquiring resources through func_8041174C and marking them in D_80153C4C as needed (type 8);
   it then rebases the name (clearing it for an empty type 2 widget), the child list, which it
   relocates recursively, and the next pointer. */
#include "basetypes.h"

typedef struct Widget {
    s32 name;
    struct Widget *next;
    struct Widget *children;
    char padC[2];
    u16 type;
    char pad10[2];
    u16 flags;
    char pad14[0x18];
    s32 words[4];
    char pad3C[8];
    s32 extra;
} Widget;

extern s16 D_80153C0C;
extern u16 *D_80153C4C;

extern s32 func_80411E4C(u32 index);
extern void func_8041174C(u32 index);

static inline void func_8040F75C_resolve(Widget *widget) {
    Widget *w;
    u32 index;
    s32 offset;
    s32 data;

    w = widget;
    index = (u32)(w->words[0] & 0xFFFF0000) >> 16;
    offset = w->words[0] & 0xFFFF;
    if (index != 0 || offset != 0) {
        data = func_80411E4C(index);
        if (data == 0) {
            func_8041174C(index);
            data = func_80411E4C(index);
            D_80153C4C[index] |= 1;
        }
        w->words[0] = data + offset;
    }
    index = (u32)(w->words[1] & 0xFFFF0000) >> 16;
    offset = w->words[1] & 0xFFFF;
    if (index != 0 || offset != 0) {
        data = func_80411E4C(index);
        if (data == 0) {
            func_8041174C(index);
            data = func_80411E4C(index);
            D_80153C4C[index] |= 1;
        }
        w->words[1] = data + offset;
    }
    index = (u32)(w->words[2] & 0xFFFF0000) >> 16;
    offset = w->words[2] & 0xFFFF;
    if (index != 0 || offset != 0) {
        data = func_80411E4C(index);
        if (data == 0) {
            func_8041174C(index);
            data = func_80411E4C(index);
            D_80153C4C[index] |= 1;
        }
        w->words[2] = data + offset;
    }
}

void func_8040F75C(Widget *widget, s32 base, s32 old) {
    for (; widget != 0; widget = widget->next) {
        if (widget->flags & 0x10) {
            if (widget->words[0] != 0) {
                widget->words[0] = widget->words[0] + base - old;
            }
            if (widget->words[1] != 0) {
                widget->words[1] = widget->words[1] + base - old;
            }
            if (widget->words[2] != 0) {
                widget->words[2] = widget->words[2] + base - old;
            }
            if (widget->words[3] != 0) {
                widget->words[3] = widget->words[3] + base - old;
            }
        }
        switch (widget->type) {
            case 3:
                if (widget->words[0] < 0 || D_80153C0C - 1 < widget->words[0]) {
                    widget->words[0] = 0;
                }
                break;
            case 2:
                if (widget->extra != 0) {
                    widget->extra = widget->extra + base - old;
                }
                widget->flags |= 0x800;
                break;
            case 4:
                widget->words[3] = 0;
                break;
            case 8:
                func_8040F75C_resolve(widget);
                break;
        }
        if ((widget->name != 0 && (widget->next != 0 || widget->children != 0)) || widget->type != 2) {
            widget->name = widget->name + base - old;
        } else {
            widget->name = 0;
        }
        if (widget->children != 0) {
            widget->children = (Widget *)((s32)widget->children + base - old);
            func_8040F75C(widget->children, base, old);
        }
        if (widget->next != 0) {
            widget->next = (Widget *)((s32)widget->next + base - old);
        }
    }
}
