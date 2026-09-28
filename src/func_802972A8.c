/* Reports what occupies the board cell at the given coordinates, or nothing when it is out of reach. */
#include "basetypes.h"

#define ABS(x) (((f32) (x) < 0.0f) ? -(x) : (x))

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 originX;
    s32 originY;
    s32 unk10;
    s32 unk14;
    s16 cells[17 * 17];
} Board;

s32 func_802972A8(Board *arg0, s32 arg1, s32 arg2) {
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
