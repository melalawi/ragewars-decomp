/** Return the index of the link joining two nodes, accepting reversed links of two-way types, or -1. */
typedef struct Link {
    unsigned short from;
    unsigned short to;
    unsigned char type;
} Link;

typedef struct LinkTable {
    int stride;
    int pad4;
    Link first;
} LinkTable;

typedef struct Graph {
    char pad0[8];
    LinkTable *links;
    int count;
} Graph;

static inline int isTwoWay(Link *link) {
    switch (link->type) {
    case 1:
    case 4:
    case 7:
        return 1;
    }
    return 0;
}

int func_8020CC0C(Graph *graph, int from, int to) {
    int i;
    Link *link;

    for (i = 0; i < graph->count; i++) {
        link = (Link *)((char *)graph->links + 8 + i * graph->links->stride);
        if (link->from == from && link->to == to) {
            return i;
        }
        if (link->to == from && link->from == to && isTwoWay(link)) {
            return i;
        }
        if (link->to == from && link->from == to && link->type == 6) {
            return i;
        }
    }
    return -1;
}
