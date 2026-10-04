#include "span_16E000/code_8040BBC0.h"
/* Returns the palette for the current screen mode D_800E28D8: modes 1, 2 and 3 have their own, mode 0
   and anything else use the first. */
extern int D_800DE888_de;
extern int D_800D3610;
extern int D_800D3614;
extern int D_800D3618;
extern int D_800D3620;

int *func_8040C3BC_de(void) {
    switch (D_800DE888_de) {
    case 0:
    default:
        return &D_800D3610;
    case 1:
        return &D_800D3614;
    case 2:
        return &D_800D3618;
    case 3:
        return &D_800D3620;
    }
}
