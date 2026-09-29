/* Binds a loaded collision mesh to the world: records the vertex, face and edge lists from the
   node's four chunks with their counts, resets the two bucket lists and files the 48 buckets into
   the second, then for every face of both lists clears the solid bit when it is hidden and marks it
   0xF0 when its group bit is set in the current group's bitmap. */
#include "basetypes.h"

typedef struct Face {
    char pad0[0xE];
    u8 flags;
    u8 hidden;
    char pad10[3];
    u8 group;
} Face;

typedef struct List {
    s32 kind;
    s32 count;
} List;

typedef struct Bucket {
    char pad0[0x10];
} Bucket;

typedef struct World {
    char pad0[0x80];
    void *tree;
    char pad84[0x11C0 - 0x84];
    s32 nfaces;
    s32 nedges;
    void *verts;
    void *edgeData;
    Face *faces;
    Face *edges;
    char listA[0x14];
    char listB[0x14];
    Bucket buckets[0x30];
    char pad1500[0x1B40C - 0x1500];
    s32 group;
} World;

extern void func_80255C40(void *list, s32 arg1, s32 arg2);
extern void func_80255CB4(void *list, void *item);
extern s32 func_80285150(void ***handle, s32 arg1);
extern void *func_8028FD94(void *node, s32 index);
extern void func_8028FDD8(void *node, s32 arg1);

static inline s32 groupHas(World *world, s32 n) {
    s32 index;
    void *g;
    u8 *bits;
    s32 mask;

    index = world->group;
    g = func_8028FD94(func_8028FD94(func_8028FD94(world->tree, 0), index), 2);
    func_8028FD94(g, 0);
    func_8028FDD8(g, 1);
    bits = func_8028FD94(g, 1);
    mask = 1 << (n & 7);
    return bits[n / 8] & mask;
}

void func_8044CD58(World *world, void ***handle) {
    void *node;
    List *l0;
    List *l1;
    List *l2;
    List *l3;
    s32 k;
    s32 i;
    s32 n;
    s32 count;
    Face *face;

    if (func_80285150(handle, 0) != 0) {
        node = **handle;
        l0 = func_8028FD94(node, 0);
        l1 = func_8028FD94(node, 1);
        l2 = func_8028FD94(node, 2);
        l3 = func_8028FD94(node, 3);
        count = l0->count;
        world->verts = (char *) l0 + 8;
        world->faces = (Face *) ((char *) l1 + 8);
        world->nfaces = count;
        count = l2->count;
        world->edgeData = (char *) l2 + 8;
        world->edges = (Face *) ((char *) l3 + 8);
        world->nedges = count;
        func_80255C40(world->listA, 0, 4);
        func_80255C40(world->listB, 0, 4);
        for (k = 0; k < 0x30; k++) {
            func_80255CB4(world->listB, &world->buckets[k]);
        }
        n = world->nfaces;
        for (i = 0; i < n; i++) {
            face = &world->faces[i];
            if (face->hidden != 0) {
                face->flags &= 0xFE;
            }
            if (groupHas(world, face->group)) {
                face->flags |= 0xF0;
            }
        }
        n = world->nedges;
        for (i = 0; i < n; i++) {
            face = &world->edges[i];
            if (face->hidden != 0) {
                face->flags &= 0xFE;
            }
            if (groupHas(world, face->group)) {
                face->flags |= 0xF0;
            }
        }
    }
}
