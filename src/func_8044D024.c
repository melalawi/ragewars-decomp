/* Packs a collision mesh into one allocated block: copies the node's vertex list, the triangle source
   and the trailing chunk behind a five-offset header, builds a 0x20-byte triangle record per source
   face, lowers the world's minimum height to every triangle vertex, and flags triangles whose group
   bit, callback or neighbours mark them with the default surface mask. */
#include "basetypes.h"

typedef struct Vertex {
    f32 x;
    f32 y;
    char pad8[8];
} Vertex;

typedef struct Triangle {
    u16 kind;
    u16 flags;
    Vertex *v[3];
    struct Triangle *adj[3];
    s32 mask;
} Triangle;

typedef struct Header {
    s32 count;
    s32 offsets[5];
} Header;

typedef struct Face {
    char pad0[0x14];
} Face;

typedef struct List {
    s32 kind;
    s32 count;
    Face items[1];
} List;

typedef struct World {
    char pad0[0x84];
    void *tree;
    char pad88[0x1B2FC - 0x88];
    f32 minY;
    char pad1B300[0x1B40C - 0x1B300];
    s32 group;
} World;

extern s32 D_800D2B40;

extern s32 func_80245788();
extern void func_80253CB0(s32 arg0, void ***handle, Header **block);
extern Header **func_80254420(s32 arg0, void ***handle, s32 size);
extern void func_80275AC8(Vertex *vertex);
extern void func_80275B14(Triangle *tri, void *face, Vertex *verts, s32 nverts, Triangle *tris, s32 ntris);
extern s32 func_80285150(void ***handle, s32 arg1);
extern void *func_8028FD94(void *node, s32 index);
extern void *func_8028FDA8(void *node, s32 index, s32 *size);
extern void func_8028FDD8(void *node, s32 arg1);
extern void func_8028FEEC(void *src, void *dst, s32 arg2);

static inline s32 testBit(s32 n, u8 *bits) {
    s32 mask = 1 << (n & 7);

    return bits[n / 8] & mask;
}

void func_8044D024(World *world, void ***handle) {
    s32 size0;
    s32 size1;
    s32 size3;
    void *chunk;
    s32 tableSize;
    char *base;
    Vertex *verts;
    Triangle *tris;
    Header **block;
    void *node;
    void *first;
    List *vlist;
    List *flist;
    s32 ntris;
    Header *hdr;
    s32 offset;
    char *dst;
    char *vdst;
    s32 nverts;
    s32 i;
    s32 j;
    s32 k;
    Triangle *tri;
    Face *face;
    f32 y;
    void *group;
    s32 index;
    u8 *bits;

    if (func_80285150(handle, 1) != 0) {
        node = **handle;
        first = func_8028FDA8(node, 0, &size0);
        vlist = func_8028FDA8(node, 1, &size1);
        flist = func_8028FD94(node, 2);
        ntris = flist->count;
        chunk = func_8028FDA8(node, 3, &size3);
        tableSize = (ntris << 5) | 8;
        block = func_80254420(0, handle, size0 + 0x18 + size1 + tableSize + size3);
        if (block != 0) {
            offset = 0x18;
            hdr = *block;
            i = 0;
            hdr->count = 0;
            hdr->offsets[0] = offset;
            func_8028FEEC(first, (char *) hdr + offset, 0);
            hdr->count = 1;
            offset += size0;
            vdst = (char *) hdr + offset;
            hdr->offsets[1] = offset;
            func_8028FEEC(vlist, vdst, 0);
            hdr->count = 2;
            offset += size1;
            dst = (char *) hdr + offset;
            hdr->offsets[2] = offset;
            func_8028FEEC(flist, dst, 1);
            face = flist->items;
            ((List *) dst)->kind = 0x20;
            ((List *) dst)->count = ntris;
            base = (char *) hdr;
            tris = (Triangle *) (dst + 8);
            nverts = vlist->count;
            verts = (Vertex *) (vdst + 8);
            for (i = 0; i < nverts; i++) {
                func_80275AC8(&verts[i]);
            }
            for (j = 0; j < ntris; j++) {
                tri = &tris[j];
                func_80275B14(tri, &face[j], verts, nverts, tris, ntris);
                for (i = 0; i < 3; i++) {
                    y = tri->v[i]->y;
                    if (!(y <= world->minY)) {
                        y = world->minY;
                    }
                    world->minY = y;
                }
                index = world->group;
                group = func_8028FD94(func_8028FD94(func_8028FD94(world->tree, 0), index), 0);
                func_8028FD94(group, 0);
                func_8028FDD8(group, 1);
                bits = func_8028FD94(group, 1);
                if (testBit(j, bits)) {
                    tri->flags |= 0x400;
                }
                if (!(tri->mask & D_800D2B40)) {
                    tri->mask = D_800D2B40;
                }
                if (func_80245788() != 0) {
                    tri->mask = D_800D2B40;
                }
                if (tri->flags & 0x2000) {
                    tri->mask = D_800D2B40;
                }
            }
            for (j = 0; j < ntris; j++) {
                tri = &tris[j];
                for (k = 0; k < 3; k++) {
                    if (tri->adj[k] != 0 && (tri->adj[k]->flags & 0x2000)) {
                        *(s32 *) ((char *) tri + 0x1C) = D_800D2B40;
                    }
                }
            }
            offset += tableSize;
            hdr->count = 3;
            hdr->offsets[3] = offset;
            func_8028FEEC(chunk, base + offset, 0);
            hdr->count = 4;
            offset += size3;
            hdr->offsets[4] = offset;
        }
        func_80253CB0(0, handle, block);
    }
}
