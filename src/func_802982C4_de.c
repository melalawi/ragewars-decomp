#include "span_1000/code_80297008.h"
#include "types.h"





extern WidgetTable_func_802982C4_de *D_80146E00;

/* Registers a widget handler under an identifier, reusing its slot or the first free one, or clears that slot when no handler is given. */
void func_802982C4_de(s32 id, s32 arg1, s32 callback, s32 arg3) {
    s32 slot = -1;
    s32 i;

    for (i = 0; i < 64; i++) {
        if (D_80146E00->handlers[i].x == id) {
            slot = i;
            break;
        }
        if (D_80146E00->handlers[i].x == -1 && slot == -1) {
            slot = i;
        }
    }
    if (arg1 != 0) {
        D_80146E00->handlers[slot].x = id;
        D_80146E00->handlers[slot].y = arg1;
        D_80146E00->handlers[slot].pad0 = callback;
        D_80146E00->handlers[slot].z = 0;
        D_80146E00->handlers[slot].pad1 = arg3;
    } else {
        D_80146E00->handlers[slot].x = -1;
        D_80146E00->handlers[slot].y = 0;
        D_80146E00->handlers[slot].pad0 = 0;
        D_80146E00->handlers[slot].z = 0;
    }
}
