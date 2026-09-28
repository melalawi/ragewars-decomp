#include "basetypes.h"
/* Tears down the UI resource set: releases eligible entries, closes active
   subsystems, frees each nested chunk allocation and the shared tables, then
   clears the complete state record. */
struct Entry { s32 unused, flags; char rest[0x14]; };
struct Resource { s32 id; s16 retained; s16 unused; };
struct State { void *active; char pad[0x25C]; void *resource; char pad264[0xC]; s16 count; };
struct Chunk { char pad[0x484]; void **primary; void **optional; char rest[0x10]; };
extern struct State D_801539B0;
extern s16 D_80153C0C, D_80153C20;
extern struct Entry *D_80153C10;
extern struct Resource *D_80153C18;
extern struct Chunk *D_80153C28;
extern void *D_80153C1C[];
extern void func_80411B70(s32), func_8040F600(void), func_802A1EB0(void *);
extern void func_80411964(s32), func_80410E9C(s32), func_80411D98(void);
extern void func_80254784(void *), func_802A1748(void *, s32, s32);

void func_8041023C(void) {
    s32 i;
    s32 invalid;
    s32 i_chunks;
    s32 offset_chunks;
    s32 offset;
    struct Resource *resource;
    struct Chunk *chunk;
    void **block;
    void **tables;
    void **first;
    void **second;
    struct State *state;
    i = 0;
    if (D_80153C0C > 0) {
        invalid = -1;
        offset = 0;
        do {
            if (((struct Entry *)(offset + (s32)D_80153C10))->flags & 1) {
                resource = D_80153C18 + i;
                if (resource->id != invalid && resource->retained == 0) {
                    func_80411B70(i);
                }
            }
            offset += 0x1C;
        } while (++i < D_80153C0C);
    }
    func_8040F600();
    state = &D_801539B0;
    if (state->active) func_802A1EB0(state->active);
    func_80411964(1);
    func_80410E9C(1);
    if (state->resource) func_80254784(state->resource);
    i_chunks = 0;
    func_80411D98();
    offset_chunks = 0;
    if (state->count > 0) {
        do {
            block = ((struct Chunk *)(offset_chunks + (s32)D_80153C28))->optional;
            if (block) {
                func_80254784(*block);
                func_80254784(((struct Chunk *)(offset_chunks + (s32)D_80153C28))->optional);
            }
            i_chunks++;
            func_80254784(*((struct Chunk *)(offset_chunks + (s32)D_80153C28))->primary);
            block = ((struct Chunk *)(offset_chunks + (s32)D_80153C28))->primary;
            offset_chunks += 0x49C;
            func_80254784(block);
        } while (i_chunks < D_80153C20);
    }
    tables = D_80153C1C;
    if (tables[0]) func_80254784(tables[0]);
    first = tables + 3;
    if (tables[3]) func_80254784(tables[3]);
    second = tables + 2;
    if (tables[2]) func_80254784(tables[2]);
    if (tables[13]) func_80254784(tables[13]);
    if (tables[-1]) func_80254784(tables[-1]);
    if (tables[10]) func_80254784(tables[10]);
    if (tables[11]) func_80254784(tables[11]);
    if (tables[-2]) func_80254784(tables[-2]);
    if (tables[12]) func_80254784(tables[12]);
    if (tables[7]) func_80254784(tables[7]);
    if (first[5]) func_80254784(first[5]);
    if (second[3]) func_80254784(second[3]);
    func_802A1748((char *)tables - 0x26C, 0, 0x2A8);
}
