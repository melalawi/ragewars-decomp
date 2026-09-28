/* Returns the normalised cross product of a path node's two edge vectors, cached in D_80115E20 for the last node seen, with a default up vector for a null node.
   Adapted from func_80275120 with the edge vectors computed through the func_80271FD8 subtract helper, the cross product arguments in forward order, and the cache globals changed. */
typedef struct Node75 {
    int pad0;
    void *prev;
    void *cur;
    void *next;
} Node75;
typedef struct V3 { float x, y, z; } V3;

extern float D_800C9AE4;
extern float D_800C9AE8;
extern int D_80115E10;
extern int D_80115E20;
extern int D_800D2638;
extern int D_800D263C;
extern void func_80271FD8(V3 *, void *, void *);
extern void func_80272088(V3 *, V3 *, V3 *);
extern void func_802720EC(V3 *);

static inline V3 *cross_edges(V3 *out, Node75 *node) {
    V3 a;
    V3 b;

    if (node == 0) {
        ((V3 *)&D_80115E10)->x = 0;
        ((V3 *)&D_80115E10)->z = 0;
        ((V3 *)&D_80115E10)->y = D_800C9AE8;
    } else if ((int)node != D_800D2638) {
        func_80271FD8(&a, node->cur, node->prev);
        func_80271FD8(&b, node->next, node->cur);
        func_80272088((V3 *)&D_80115E10, &a, &b);
    }
    D_800D2638 = (int)node;
    *out = *(V3 *)&D_80115E10;
    return out;
}

V3 *func_80275D04(V3 *out, Node75 *node) {
    if (node == 0) {
        ((V3 *)&D_80115E20)->x = 0;
        ((V3 *)&D_80115E20)->z = 0;
        ((V3 *)&D_80115E20)->y = D_800C9AE4;
    } else if ((int)node != D_800D263C) {
        cross_edges((V3 *)&D_80115E20, node);
        func_802720EC((V3 *)&D_80115E20);
    }
    *out = *(V3 *)&D_80115E20;
    D_800D263C = (int)node;
    return out;
}
