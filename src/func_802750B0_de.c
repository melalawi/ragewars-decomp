#include "common/types.h"
#include "span_1000/code_80274A24.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"



/* Returns the normalised cross product of a path node's two edge vectors, cached in D_80115E00 for the last node seen, with a default up vector for a null node. Adapted from func_80275F28_de, which it inlines to compute the raw cross product, with the result normalised through func_8027207C_de and cached by a second last-node word; the inlined copy records its last node before copying its result. */


extern int D_80111D30;
extern int D_80111D40;
extern int D_800CD3E0;
extern int D_800CD3E4;
extern void func_80272018_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_8027207C_de(Vec3 *);






static inline Vec3 *cross_edges(Vec3 *out, Node75_func_802750B0_de *node) {
    Vec3 a;
    Vec3 b;
    char *p;
    char *q;

    if (node == 0) {
        ((Vec3 *)&D_80111D30)->x = 0;
        ((Vec3 *)&D_80111D30)->z = 0;
        ((Vec3 *)&D_80111D30)->y = D_800C49C4_de;
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
    D_800CD3E0 = (int)node;
    *out = *(Vec3 *)&D_80111D30;
    return out;
}

Vec3 *func_802750B0_de(Vec3 *out, Node75_func_802750B0_de *node) {
    if (node == 0) {
        ((Vec3 *)&D_80111D40)->x = 0;
        ((Vec3 *)&D_80111D40)->z = 0;
        ((Vec3 *)&D_80111D40)->y = D_800C49C0_de;
    } else if ((int)node != D_800CD3E4) {
        cross_edges((Vec3 *)&D_80111D40, node);
        func_8027207C_de((Vec3 *)&D_80111D40);
    }
    *out = *(Vec3 *)&D_80111D40;
    D_800CD3E4 = (int)node;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C48F0_4 = (-1.0f);
const float unbake_rodata_800C48F4_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9AB0_4 = (-1.0f);
const float unbake_rodata_800C9AB4_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C70_4 = (-1.0f);
const float unbake_rodata_800C4C74_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CB0_4 = (-1.0f);
const float unbake_rodata_800C4CB4_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C49C0_4 = (-1.0f);
const float unbake_rodata_800C49C4_4 = (-1.0f);
#endif
