typedef struct Node75 {
    int pad0;
    void *prev;
    void *cur;
    void *next;
} Node75;
typedef struct V3 { float x, y, z; } V3;

/* Returns the normalised cross product of a path node's two edge vectors, cached in D_80115E00 for the last node seen, with a default up vector for a null node. Adapted from func_80275F98, which it inlines to compute the raw cross product, with the result normalised through func_802720EC and cached by a second last-node word; the inlined copy records its last node before copying its result. */
extern float D_800C9AB0;
extern float D_800C9AB4;
extern int D_80115DF0;
extern int D_80115E00;
extern int D_800D2630;
extern int D_800D2634;
extern void func_80272088(V3 *, V3 *, V3 *);
extern void func_802720EC(V3 *);

typedef struct func_80275120_S1 func_80275120_S1;
typedef struct func_80275120_S2 func_80275120_S2;
struct func_80275120_S1 {
    float unk0;
    char pad0[0x8 - 0x0 - sizeof(float)];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
};
struct func_80275120_S2 {
    float unk0;
    char pad0[0x8 - 0x0 - sizeof(float)];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
};

static inline V3 *cross_edges(V3 *out, Node75 *node) {
    V3 a;
    V3 b;
    char *p;
    char *q;

    if (node == 0) {
        ((V3 *)&D_80115DF0)->x = 0;
        ((V3 *)&D_80115DF0)->z = 0;
        ((V3 *)&D_80115DF0)->y = D_800C9AB4;
    } else if ((int)node != D_800D2630) {
        p = node->cur;
        q = node->prev;
        a.x = ((func_80275120_S1 *)(p))->unk0 - ((func_80275120_S2 *)(q))->unk0;
        p = node->cur;
        q = node->prev;
        a.y = ((func_80275120_S1 *)(p))->unkC - ((func_80275120_S2 *)(q))->unkC;
        p = node->cur;
        q = node->prev;
        a.z = ((func_80275120_S1 *)(p))->unk8 - ((func_80275120_S2 *)(q))->unk8;
        p = node->next;
        q = node->cur;
        b.x = ((func_80275120_S1 *)(p))->unk0 - ((func_80275120_S2 *)(q))->unk0;
        p = node->next;
        q = node->cur;
        b.y = ((func_80275120_S1 *)(p))->unkC - ((func_80275120_S2 *)(q))->unkC;
        p = node->next;
        q = node->cur;
        b.z = ((func_80275120_S1 *)(p))->unk8 - ((func_80275120_S2 *)(q))->unk8;
        func_80272088((V3 *)&D_80115DF0, &b, &a);
    }
    D_800D2630 = (int)node;
    *out = *(V3 *)&D_80115DF0;
    return out;
}

V3 *func_80275120(V3 *out, Node75 *node) {
    if (node == 0) {
        ((V3 *)&D_80115E00)->x = 0;
        ((V3 *)&D_80115E00)->z = 0;
        ((V3 *)&D_80115E00)->y = D_800C9AB0;
    } else if ((int)node != D_800D2634) {
        cross_edges((V3 *)&D_80115E00, node);
        func_802720EC((V3 *)&D_80115E00);
    }
    *out = *(V3 *)&D_80115E00;
    D_800D2634 = (int)node;
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
