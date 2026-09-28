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
        a.x = *(float *)(p + 0) - *(float *)(q + 0);
        p = node->cur;
        q = node->prev;
        a.y = *(float *)(p + 12) - *(float *)(q + 12);
        p = node->cur;
        q = node->prev;
        a.z = *(float *)(p + 8) - *(float *)(q + 8);
        p = node->next;
        q = node->cur;
        b.x = *(float *)(p + 0) - *(float *)(q + 0);
        p = node->next;
        q = node->cur;
        b.y = *(float *)(p + 12) - *(float *)(q + 12);
        p = node->next;
        q = node->cur;
        b.z = *(float *)(p + 8) - *(float *)(q + 8);
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
