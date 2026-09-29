#include "basetypes.h"

typedef struct {
    s32 id;
    s32 unk4;
    s32 unk8;
    s32 callback;
    s32 unk10;
} WidgetHandler;

typedef struct {
    u8 pad0[0x1C];
    WidgetHandler handlers[64];
} WidgetTable;

extern WidgetTable *D_8014D080;

/* Registers a widget handler under an identifier, reusing its slot or the first free one, or clears that slot when no handler is given. */
void func_802992C4(s32 id, s32 arg1, s32 callback, s32 arg3) {
    s32 slot = -1;
    s32 i;

    for (i = 0; i < 64; i++) {
        if (D_8014D080->handlers[i].id == id) {
            slot = i;
            break;
        }
        if (D_8014D080->handlers[i].id == -1 && slot == -1) {
            slot = i;
        }
    }
    if (arg1 != 0) {
        D_8014D080->handlers[slot].id = id;
        D_8014D080->handlers[slot].unk4 = arg1;
        D_8014D080->handlers[slot].callback = callback;
        D_8014D080->handlers[slot].unk8 = 0;
        D_8014D080->handlers[slot].unk10 = arg3;
    } else {
        D_8014D080->handlers[slot].id = -1;
        D_8014D080->handlers[slot].unk4 = 0;
        D_8014D080->handlers[slot].callback = 0;
        D_8014D080->handlers[slot].unk8 = 0;
    }
}
