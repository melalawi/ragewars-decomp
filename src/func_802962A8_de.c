#include "span_1000/code_80297008.h"
#include "types.h"
/* Reports what occupies the board cell at the given coordinates, or nothing when it is out of reach. */

#define ABS(x) (((f32) (x) < 0.0f) ? -(x) : (x))



s32 func_802962A8_de(Board *arg0, s32 arg1, s32 arg2) {
    s32 col;
    s32 row;
    s16 cell;

    if (ABS(arg1 - arg0->originX) >= 9) {
        return 0;
    }
    if (ABS(arg2 - arg0->originY) >= 9) {
        return 0;
    }
    col = (arg1 - arg0->originX) + 8;
    row = (arg2 - arg0->originY) + 8;
    cell = arg0->cells[col + (row * 17)];
    if (cell == -2) {
        return 1;
    }
    if (cell == -3) {
        return 0;
    }
    if (cell == -1) {
        return 3;
    }
    return 2;
}
