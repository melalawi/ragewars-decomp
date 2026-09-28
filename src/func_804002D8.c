/* Builds a spline record of count nodes from points and weights: stores the node size 0x24 and the count, copies each point and weight into its node, accumulates the arc length at each node with func_80271FD8 and func_802BC380 (square root), and solves through func_80400000 the second derivatives of x, y and z over arc length and of arc length over weight into scratch arrays from func_80252FFC before freeing them; a single point gets zero derivatives. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    Vec3f p;
    Vec3f d2p;
    f32 s;
    f32 w;
    f32 d2s;
} SplineNode;

typedef struct {
    s32 nodeSize;
    s32 count;
    SplineNode nodes[1];
} Spline;

extern f32 *func_80252FFC(s32 size);
extern void func_80254784(f32 *block);
extern void func_80271FD8(Vec3f *out, Vec3f *a, Vec3f *b);
extern f32 func_802BC380(f32 value);
extern void func_80400000(s32 n, f32 *ys, f32 *xs, f32 *out);

void func_804002D8(s32 count, Vec3f *points, f32 *weights, Spline *spline) {
    Vec3f delta;
    f32 *ys;
    f32 *xs;
    f32 *d2;
    SplineNode *nodes;
    f32 length;
    s32 i;

    ys = func_80252FFC(count * 4);
    xs = func_80252FFC(count * 4);
    d2 = func_80252FFC(count * 4);
    nodes = spline->nodes;
    length = 0.0f;
    spline->nodeSize = 0x24;
    spline->count = count;
    if (count == 1) {
        spline->nodes[0].p.x = points->x;
        nodes->p.y = points->y;
        nodes->p.z = points->z;
        nodes->d2p.x = 0.0f;
        nodes->d2p.y = 0.0f;
        nodes->d2p.z = 0.0f;
        nodes->d2s = 0.0f;
        nodes->w = 0.0f;
        return;
    }
    for (i = 0; i < count; i++) {
        nodes[i].p.x = points[i].x;
        nodes[i].p.y = points[i].y;
        nodes[i].p.z = points[i].z;
        nodes[i].w = weights[i];
    }
    for (i = 0; i < count; i++) {
        nodes[i].s = length;
        if (i == count - 1) {
            break;
        }
        func_80271FD8(&delta, &nodes[i].p, &nodes[i + 1].p);
        length += func_802BC380(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.x;
        xs[i] = nodes[i].s;
    }
    func_80400000(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.x = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.y;
        xs[i] = nodes[i].s;
    }
    func_80400000(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.y = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.z;
        xs[i] = nodes[i].s;
    }
    func_80400000(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.z = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].s;
        xs[i] = nodes[i].w;
    }
    func_80400000(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2s = d2[i];
    }
    func_80254784(ys);
    func_80254784(xs);
    func_80254784(d2);
}
