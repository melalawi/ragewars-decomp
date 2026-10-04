#include "common/types.h"
#include "span_16E000/code_80400000.h"
#include "types.h"
/* Builds a spline record of count nodes from points and weights: stores the node size 0x24 and the count, copies each point and weight into its node, accumulates the arc length at each node with func_80271F68_de and func_802B72B0_de (square root), and solves through func_80400000_de the second derivatives of x, y and z over arc length and of arc length over weight into scratch arrays from func_8025305C_de before freeing them; a single point gets zero derivatives. */







extern f32 *func_8025305C_de(s32 size);
extern void func_802547E4_de(f32 *block);
extern void func_80271F68_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_802B72B0_de(f32 value);
extern void func_80400000_de(s32 n, f32 *ys, f32 *xs, f32 *out);

void func_804002D8_de(s32 count, Vec3 *points, f32 *weights, Spline *spline) {
    Vec3 delta;
    f32 *ys;
    f32 *xs;
    f32 *d2;
    SplineNode *nodes;
    f32 length;
    s32 i;

    ys = func_8025305C_de(count * 4);
    xs = func_8025305C_de(count * 4);
    d2 = func_8025305C_de(count * 4);
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
        func_80271F68_de(&delta, &nodes[i].p, &nodes[i + 1].p);
        length += func_802B72B0_de(delta.x * delta.x + delta.y * delta.y + delta.z * delta.z);
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.x;
        xs[i] = nodes[i].s;
    }
    func_80400000_de(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.x = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.y;
        xs[i] = nodes[i].s;
    }
    func_80400000_de(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.y = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].p.z;
        xs[i] = nodes[i].s;
    }
    func_80400000_de(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2p.z = d2[i];
    }
    for (i = 0; i < count; i++) {
        ys[i] = nodes[i].s;
        xs[i] = nodes[i].w;
    }
    func_80400000_de(count, ys, xs, d2);
    for (i = 0; i < count; i++) {
        nodes[i].d2s = d2[i];
    }
    func_802547E4_de(ys);
    func_802547E4_de(xs);
    func_802547E4_de(d2);
}
