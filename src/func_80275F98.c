typedef struct Node75 {
    int pad0;
    void *prev;
    void *cur;
    void *next;
} Node75;
typedef struct V3 { float x, y, z; } V3;
extern float D_800C9AF4;
extern int D_80115DF0;
extern int D_800D2630;
extern void func_80272088(V3 *, V3 *, V3 *);

V3 *func_80275F98(V3 *out, Node75 *node) {
    V3 a;
    V3 b;
    char *p;
    char *q;

    if (node == 0) {
        ((V3 *)&D_80115DF0)->x = 0;
        ((V3 *)&D_80115DF0)->z = 0;
        ((V3 *)&D_80115DF0)->y = D_800C9AF4;
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
    *out = *(V3 *)&D_80115DF0;
    D_800D2630 = (int)node;
    return out;
}
