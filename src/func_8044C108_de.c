#include "common/types.h"
#include "span_16E000/code_80449968.h"
#include "types.h"
/* Binds a loaded collision mesh to the world: records the vertex, face and edge lists from the
   node's four chunks with their counts, resets the two bucket lists and files the 48 buckets into
   the second, then for every face of both lists clears the solid bit when it is hidden and marks it
   0xF0 when its group bit is set in the current group's bitmap. */









extern void func_80255CA0_de(void *list, s32 arg1, s32 arg2);
extern void func_80255D14_de(void *list, void *item);
extern s32 func_80285180_de(void ***handle, s32 arg1);
extern void *func_8028FDB4_de(void *node, s32 index);
extern void func_8028FDF8_de(void *node, s32 arg1);

static inline s32 groupHas(World_func_8044C108_de *world, s32 n) {
    s32 index;
    void *g;
    u8 *bits;
    s32 mask;

    index = world->group;
    g = func_8028FDB4_de(func_8028FDB4_de(func_8028FDB4_de(world->tree, 0), index), 2);
    func_8028FDB4_de(g, 0);
    func_8028FDF8_de(g, 1);
    bits = func_8028FDB4_de(g, 1);
    mask = 1 << (n & 7);
    return bits[n / 8] & mask;
}










void func_8044C108_de(World_func_8044C108_de *world, void ***handle) {
    void *node;
    struct Shape_func_802764D4_de_2 *l0;
    struct Shape_func_802764D4_de_2 *l1;
    struct Shape_func_802764D4_de_2 *l2;
    struct Shape_func_802764D4_de_2 *l3;
    s32 k;
    s32 i;
    s32 n;
    s32 count;
    Face *face;

    if (func_80285180_de(handle, 0) != 0) {
        node = **handle;
        l0 = func_8028FDB4_de(node, 0);
        l1 = func_8028FDB4_de(node, 1);
        l2 = func_8028FDB4_de(node, 2);
        l3 = func_8028FDB4_de(node, 3);
        count = l0->field_4;
        world->verts = &((func_8020CC0C_S1 *)(l0))->unk8;
        world->faces = &((func_8044CD58_S2 *)(l1))->unk8;
        world->nfaces = count;
        count = l2->field_4;
        world->edgeData = &((func_8020CC0C_S1 *)(l2))->unk8;
        world->edges = &((func_8044CD58_S2 *)(l3))->unk8;
        world->nedges = count;
        func_80255CA0_de(world->listA, 0, 4);
        func_80255CA0_de(world->listB, 0, 4);
        for (k = 0; k < 0x30; k++) {
            func_80255D14_de(world->listB, &world->buckets[k]);
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
