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
