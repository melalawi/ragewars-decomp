#include "basetypes.h"

/* Copies up to max of a track's placed objects whose key matches into out: finds the key's index range in the track's sorted key table through func_80265570, queues each object in that range of the given kind (any kind for -1) on a local list through func_80255C40 and func_80255C58, then takes them back off through func_80256130 and func_80255E78, copying each 20-byte object, and returns how many were copied. */
typedef struct {
    s32 w[4];
    s16 kind;
    s16 pad12;
} Object;

typedef struct {
    s32 index;
    s32 link[2];
} Node;

typedef struct {
    char pad0[0x10];
    s32 count;
    s32 pad14;
} List;

typedef struct {
    char pad0[0x90];
    s32 resource;
} Track;

extern s32 *func_8028FD94(s32, s32);
extern s32 func_80265570(s32 *, s32, s32, s32 *, s32 *);
extern void func_80255C40(List *, s32, s32);
extern void func_80255C58(List *, Node *);
extern Node *func_80256130(List *);
extern void func_80255E78(List *, Node *);

s32 func_8044DE70(Track *track, s32 kind, s32 key, Object *out, s32 max) {
    List list;
    Node nodes[64];
    s32 first;
    s32 last;
    s32 found;
    s32 *keys;
    Object *objects;
    Node *node;
    s32 i;
    s32 match;
    s32 count;

    found = 0;
    count = (keys = func_8028FD94(track->resource, 0))[1];
    keys += 2;
    objects = (Object *)(func_8028FD94(track->resource, 1) + 2);
    if (func_80265570(keys, count, key, &first, &last) != 0) {
        func_80255C40(&list, 4, 8);
        node = nodes;
        for (i = first; i <= last; i++) {
            match = 1;
            if (kind != -1) {
                match = objects[i].kind == kind;
            }
            if (match) {
                node->index = i;
                func_80255C58(&list, node);
                node++;
            }
        }
        for (max--; max != -1; max--) {
            if (list.count == 0) {
                return found;
            }
            node = func_80256130(&list);
            out[found++] = objects[node->index];
            func_80255E78(&list, node);
        }
    }
    return found;
}
