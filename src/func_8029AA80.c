#include "basetypes.h"

typedef struct {
    s32 words[10];
} WidgetEvent;

typedef s32 (*WidgetCallback)(void *, WidgetEvent);

typedef struct {
    s32 id;
    s32 unk4;
    s32 unk8;
    WidgetCallback callback;
    s32 unk10;
} WidgetHandler;

typedef struct {
    u8 pad0[0x1C];
    WidgetHandler handlers[64];
} WidgetTable;

typedef struct {
    u8 pad0[0xE];
    u16 id;
} Widget;

extern WidgetTable *D_8014D080;

static inline WidgetCallback func_8029AA80_find(s32 id) {
    WidgetHandler *h = D_8014D080->handlers;
    s32 i;

    for (i = 0; i < 64; i++, h++) {
        if (h->id == id) {
            return h->callback;
        }
    }
    return 0;
}

/* Finds the widget's handler by identifier and, if present, calls it with the widget and the by-value event arguments. */
s32 func_8029AA80(Widget *arg0, WidgetEvent event) {
    WidgetCallback cb = func_8029AA80_find(arg0->id);

    if (cb != 0) {
        cb(arg0, event);
        return 1;
    }
    return 0;
}
