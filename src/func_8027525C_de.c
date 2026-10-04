#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"






extern int D_800CD3E0;
extern int D_80111D30;
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);












f32 func_8027525C_de(Node75_func_802750B0_de *node, f32 x, f32 z) {
    Vec3 normal;
    Vec3 point;
    Vec3 a;
    Vec3 b;
    char *p;
    char *q;

    if (node == 0) {
        return 0.0f;
    }
    if ((int)node != D_800CD3E0) {
        p = node->cur;
        q = node->prev;
        a.x = ((func_80275120_S1 *)(p))->unk0 - ((func_80275120_S1 *)(q))->unk0;
        p = node->cur;
        q = node->prev;
        a.y = ((func_80275120_S1 *)(p))->unkC - ((func_80275120_S1 *)(q))->unkC;
        p = node->cur;
        q = node->prev;
        a.z = ((func_80275120_S1 *)(p))->unk8 - ((func_80275120_S1 *)(q))->unk8;
        p = node->next;
        q = node->cur;
        b.x = ((func_80275120_S1 *)(p))->unk0 - ((func_80275120_S1 *)(q))->unk0;
        p = node->next;
        q = node->cur;
        b.y = ((func_80275120_S1 *)(p))->unkC - ((func_80275120_S1 *)(q))->unkC;
        p = node->next;
        q = node->cur;
        b.z = ((func_80275120_S1 *)(p))->unk8 - ((func_80275120_S1 *)(q))->unk8;
        func_80272018_de((Vec3 *)&D_80111D30, &b, &a);
    }
    normal = *(Vec3 *)&D_80111D30;
    D_800CD3E0 = (int)node;
    if (normal.y == 0.0f) {
        return (((func_80216BF4_S1 *)(node->prev))->unkC +
                ((func_80216BF4_S1 *)(node->cur))->unkC +
                ((func_80216BF4_S1 *)(node->next))->unkC) * D_800C49C8_de;
    }
    p = node->prev;
    point.x = ((func_80275120_S1 *)(p))->unk0;
    p = node->prev;
    point.y = ((func_80275120_S1 *)(p))->unkC;
    p = node->prev;
    point.z = ((func_80275120_S1 *)(p))->unk8;
    return (((point.z - z) * normal.z) +
            ((point.x - x) * normal.x) + (point.y * normal.y)) /
           normal.y;
}
