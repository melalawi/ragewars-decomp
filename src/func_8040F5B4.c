#include "basetypes.h"

/* Records the last column and row of a width by height area: stores width - 1 and height - 1 in
   D_800E2AB0 and D_800E2AB4, and fills the rectangle D_80153810 with zero to width - 1 and zero
   to height - 1. */
struct Rect {
    s32 left;
    s32 right;
    s32 top;
    s32 bottom;
};

extern s32 D_800E2AB0;
extern s32 D_800E2AB4;
extern struct Rect D_80153810;

void func_8040F5B4(s32 width, s32 height) {
    struct Rect *rect = &D_80153810;

    width--;
    height--;
    D_800E2AB0 = width;
    D_800E2AB4 = height;
    rect->top = 0;
    rect->left = 0;
    rect->right = width;
    rect->bottom = height;
}
