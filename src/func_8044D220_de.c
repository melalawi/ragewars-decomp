#include "span_16E000/code_8044D024.h"
#include "types.h"

/* Copies up to max of a track's placed objects whose key matches into out: finds the key's index range in the track's sorted key table through func_80265550_de, queues each object in that range of the given kind (any kind for -1) on a local list through func_80255CA0_de and func_80255CB8_de, then takes them back off through func_80256190_de and func_80255ED8_de, copying each 20-byte object, and returns how many were copied. */








extern s32 *func_8028FDB4_de(s32, s32);
extern s32 func_80265550_de(s32 *, s32, s32, s32 *, s32 *);
extern void func_80255CA0_de(List_func_8044D220_de *, s32, s32);
extern void func_80255CB8_de(List_func_8044D220_de *, Node_func_8044D220_de *);
extern Node_func_8044D220_de *func_80256190_de(List_func_8044D220_de *);
extern void func_80255ED8_de(List_func_8044D220_de *, Node_func_8044D220_de *);

s32 func_8044D220_de(Track_func_8044D220_de *track, s32 kind, s32 key, Object_func_8044D220_de *out, s32 max) {
    List_func_8044D220_de list;
    Node_func_8044D220_de nodes[64];
    s32 first;
    s32 last;
    s32 found;
    s32 *keys;
    Object_func_8044D220_de *objects;
    Node_func_8044D220_de *node;
    s32 i;
    s32 match;
    s32 count;

    found = 0;
    count = (keys = func_8028FDB4_de(track->resource, 0))[1];
    keys += 2;
    objects = (Object_func_8044D220_de *)(func_8028FDB4_de(track->resource, 1) + 2);
    if (func_80265550_de(keys, count, key, &first, &last) != 0) {
        func_80255CA0_de(&list, 4, 8);
        node = nodes;
        for (i = first; i <= last; i++) {
            match = 1;
            if (kind != -1) {
                match = objects[i].kind == kind;
            }
            if (match) {
                node->index = i;
                func_80255CB8_de(&list, node);
                node++;
            }
        }
        for (max--; max != -1; max--) {
            if (list.count == 0) {
                return found;
            }
            node = func_80256190_de(&list);
            out[found++] = objects[node->index];
            func_80255ED8_de(&list, node);
        }
    }
    return found;
}
