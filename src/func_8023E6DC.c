/* Clips a segment against a query: measures the heights of its two ends through func_80241718,
   raises the far end by D_800D0640[1] scaled to 10.24, and when the squared flat length plus the
   squared height difference is not zero, moves the far end to the fraction func_802BC380 returns
   for the flat share of that length, writing the interpolated height at 0x54 and position at 0x50
   and 0x58. The node at 0x74 is then faded by what is left of one after the limit at 0x10 of the
   record at 0x40, and not at all once that limit passes one. */
#include "basetypes.h"

struct Query;

typedef struct {
    char pad0[0x10];
    f32 limit;
} Limits;

typedef struct {
    char pad0[0x40];
    Limits *limits;
    f32 x0;
    char pad48[4];
    f32 y0;
    f32 x1;
    f32 height;
    f32 y1;
    char pad5C[0x74 - 0x5C];
    char node[1];
} Segment;

extern f32 D_800D0640[];
extern f32 func_80241718(struct Query *, f32, f32);
extern f32 func_802BC380(f32);
extern void func_8027200C(void *, void *, f32);

void func_8023E6DC(Segment *arg0, struct Query *arg1) {
    f32 start;
    f32 span;
    f32 flat;
    f32 total;
    f32 dx;
    f32 dy;
    f32 share;
    f32 limit;
    f32 nx;
    void *target;
    f32 fade;
    void *node;

    start = func_80241718(arg1, arg0->x0, arg0->y0);
    span = (func_80241718(arg1, arg0->x1, arg0->y1) + (D_800D0640[1] * 10.24f)) - start;
    dx = arg0->x1 - arg0->x0;
    dy = arg0->y1 - arg0->y0;
    flat = (dx * dx) + (dy * dy);
    total = flat + (span * span);
    if (total == 0.0f) {
        arg0->height = start;
        return;
    }
    share = func_802BC380(flat / total);
    node = arg0->node;
    nx = arg0->x0 + (share * (arg0->x1 - arg0->x0));
    arg0->height = start + (share * span);
    arg0->x1 = nx;
    arg0->y1 = arg0->y0 + (share * (arg0->y1 - arg0->y0));
    limit = arg0->limits->limit;
    target = node;
    if (1.0f < limit) {
        fade = 0.0f;
    } else {
        fade = 1.0f - limit;
    }
    func_8027200C(target, node, fade);
}
