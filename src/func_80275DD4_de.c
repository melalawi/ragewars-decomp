#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Returns the height of a path node's triangle plane at (x, z) from the cached edge cross product in D_80115E10, or the mean vertex height when the plane is vertical.
   Adapted from func_8027525C_de with the edge vectors computed through the func_80271F68_de subtract helper inside a static inline helper, the vertex read as a whole vector with y at offset 4, the null result a rodata constant, and the cache globals changed. */







extern int D_800CD3E8;
extern int D_80111D50;
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);

static inline void cross_edges(Node75 *node) {
    Vec3 a;
    Vec3 b;

    func_80271F68_de(&a, node->cur, node->prev);
    func_80271F68_de(&b, node->next, node->cur);
    func_80272018_de((Vec3 *)&D_80111D50, &a, &b);
}

f32 func_80275DD4_de(Node75 *node, f32 x, f32 z) {
    Vec3 normal;
    Vec3 point;

    if (node == 0) {
        return D_800C49FC_de;
    }
    if ((int)node != D_800CD3E8) {
        cross_edges(node);
    }
    normal = *(Vec3 *)&D_80111D50;
    D_800CD3E8 = (int)node;
    if (normal.y == 0.0f) {
        return (node->prev->y + node->cur->y + node->next->y) * D_800C4A00_de;
    }
    point = *node->prev;
    return (((point.z - z) * normal.z) +
            ((point.x - x) * normal.x) + (point.y * normal.y)) /
           normal.y;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C492C_4 = (-14336.0f);
const float unbake_rodata_800C4930_4 = 0.333333343f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9AEC_4 = (-14336.0f);
const float unbake_rodata_800C9AF0_4 = 0.333333343f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CAC_4 = (-14336.0f);
const float unbake_rodata_800C4CB0_4 = 0.333333343f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CEC_4 = (-14336.0f);
const float unbake_rodata_800C4CF0_4 = 0.333333343f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49FC_4 = (-14336.0f);
const float unbake_rodata_800C4A00_4 = 0.333333343f;
#endif
