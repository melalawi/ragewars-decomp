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

typedef struct func_80275F98_S1 func_80275F98_S1;
typedef struct func_80275F98_S2 func_80275F98_S2;
struct func_80275F98_S1 {
    float unk0;
    char pad0[0x8 - 0x0 - sizeof(float)];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
};
struct func_80275F98_S2 {
    float unk0;
    char pad0[0x8 - 0x0 - sizeof(float)];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
};

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
        a.x = ((func_80275F98_S1 *)(p))->unk0 - ((func_80275F98_S2 *)(q))->unk0;
        p = node->cur;
        q = node->prev;
        a.y = ((func_80275F98_S1 *)(p))->unkC - ((func_80275F98_S2 *)(q))->unkC;
        p = node->cur;
        q = node->prev;
        a.z = ((func_80275F98_S1 *)(p))->unk8 - ((func_80275F98_S2 *)(q))->unk8;
        p = node->next;
        q = node->cur;
        b.x = ((func_80275F98_S1 *)(p))->unk0 - ((func_80275F98_S2 *)(q))->unk0;
        p = node->next;
        q = node->cur;
        b.y = ((func_80275F98_S1 *)(p))->unkC - ((func_80275F98_S2 *)(q))->unkC;
        p = node->next;
        q = node->cur;
        b.z = ((func_80275F98_S1 *)(p))->unk8 - ((func_80275F98_S2 *)(q))->unk8;
        func_80272088((V3 *)&D_80115DF0, &b, &a);
    }
    *out = *(V3 *)&D_80115DF0;
    D_800D2630 = (int)node;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4934_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9AF4_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CB4_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CF4_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C4A04_4 = (-1.0f);
#endif
