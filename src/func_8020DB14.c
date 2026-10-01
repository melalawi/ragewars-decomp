/** Find the first of an object's four nodes that starts a type-6 link, record it and return 0; return 1 when none does. */
typedef struct Link {
    unsigned short from;
    unsigned short to;
    unsigned char type;
} Link;

typedef struct Graph {
    char pad0[0xC];
    int count;
} Graph;

typedef struct Obj {
    char pad0[0x14];
    int nodes[4];
    char pad24[0x1BC - 0x24];
    int hits;
    int node;
    char pad1C4[4];
    int pending;
} Obj;

extern Graph D_8013B364;
extern Link *func_8020C9B0(Graph *, int);

int func_8020DB14(Obj *obj) {
    int j;
    int i;
    Link *link;
    Graph *graph = &D_8013B364;

    obj->node = -1;
    obj->pending = 0;
    for (j = 0; j < 4; j++) {
        for (i = 0; i < graph->count; i++) {
            link = func_8020C9B0(graph, i);
            if (link->from == obj->nodes[j] && link->type == 6) {
                obj->hits++;
                obj->node = obj->nodes[j];
                return 0;
            }
        }
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3898_4 = 1.0f;
const float unbake_rodata_800C389C_4 = 0.00872664712f;
const float unbake_rodata_800C38A0_4 = 0.5f;
const float unbake_rodata_800C38A4_4 = 0.00872664712f;
const float unbake_rodata_800C38A8_4 = 1.0f;
const float unbake_rodata_800C38AC_4 = 0.5f;
const float unbake_rodata_800C38B0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C88E0_4 = 0.00787401572f;
const float unbake_rodata_800C88E4_4 = 3.0f;
const float unbake_rodata_800C88E8_4 = 1.0f;
const float unbake_rodata_800C88EC_4 = 0.00872664712f;
const float unbake_rodata_800C88F0_4 = 6.28318548f;
const float unbake_rodata_800C88F4_4 = 6.28318548f;
const float unbake_rodata_800C88F8_4 = 0.0174532942f;
const float unbake_rodata_800C88FC_4 = 0.0174532942f;
const float unbake_rodata_800C8900_4 = 1.0f;
const float unbake_rodata_800C8904_4 = 0.200000003f;
const float unbake_rodata_800C8908_4 = 10.2399998f;
const float unbake_rodata_800C890C_4 = 4.0f;
const float unbake_rodata_800C8910_4 = 0.200000003f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C38E4_4 = 10.2399998f;
const float unbake_rodata_800C38E8_4 = 30.7199993f;
const float unbake_rodata_800C38EC_4 = 0.204799995f;
const float unbake_rodata_800C38F0_4 = 1.0f;
const float unbake_rodata_800C38F4_4 = 4.09600019f;
const float unbake_rodata_800C38F8_4 = 1.04857612f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3900_4 = 9.99999997e-07f;
const float unbake_rodata_800C3904_4 = 2.0f;
const float unbake_rodata_800C3908_4 = 9.99999997e-07f;
const float unbake_rodata_800C390C_4 = 2.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C37B4_4 = 0.0666666701f;
const float unbake_rodata_800C37B8_4 = 0.0666666701f;
const float unbake_rodata_800C37BC_4 = (-0.5f);
#endif
