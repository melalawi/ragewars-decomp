/* Intersects a rectangle with another in place, widening it to at least one unit and returning whether it was non-empty. */
#include "basetypes.h"

typedef struct Rect {
    s32 x0;
    s32 x1;
    s32 y0;
    s32 y1;
} Rect;

s32 func_8040F508(Rect *rect, Rect *clip) {
    s32 ok;
    s32 x0;
    s32 x1;
    s32 y0;
    s32 y1;
    s32 v;

    x0 = rect->x0;
    ok = 1;
    if (x0 < clip->x0) {
        x0 = clip->x0;
    }
    x1 = rect->x1;
    rect->x0 = x0;
    if (clip->x1 < x1) {
        x1 = clip->x1;
    }
    y0 = rect->y0;
    rect->x1 = x1;
    if (y0 < clip->y0) {
        y0 = clip->y0;
    }
    y1 = rect->y1;
    rect->y0 = y0;
    if (clip->y1 < y1) {
        y1 = clip->y1;
    }
    rect->y1 = y1;
    v = rect->x0 + 1;
    if (rect->x1 < v) {
        rect->x1 = v;
        ok = 0;
    }
    v = rect->y0 + 1;
    if (rect->y1 < v) {
        rect->y1 = v;
        ok = 0;
    }
    return ok;
}
