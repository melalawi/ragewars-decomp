#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"



extern int D_80111D30;
extern int D_800CD3E0;
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);






Vec3 *func_80275F28_de(Vec3 *out, Node75_func_802750B0_de *node) {
    Vec3 a;
    Vec3 b;
    char *p;
    char *q;

    if (node == 0) {
        ((Vec3 *)&D_80111D30)->x = 0;
        ((Vec3 *)&D_80111D30)->z = 0;
        ((Vec3 *)&D_80111D30)->y = D_800C4A04_de;
    } else if ((int)node != D_800CD3E0) {
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
    *out = *(Vec3 *)&D_80111D30;
    D_800CD3E0 = (int)node;
    return out;
}
