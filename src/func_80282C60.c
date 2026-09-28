#include "basetypes.h"

/* Returns whether any of the 22 records in D_800D052C holds, in either of its two three-entry lists, an entry of kind 1 whose id matches the given object's id. */

typedef struct {
    s16 kind;
    char pad[2];
    s16 id;
} Entry;

typedef struct {
    char pad[0x20];
    Entry *first[3];
    Entry *second[3];
} Record;

typedef struct {
    char pad[4];
    u16 id;
} Object;

extern Record *D_800D052C[];

s32 func_80282C60(Object *obj) {
    s32 i;
    s32 j;
    Entry *entry;

    for (i = 0; i < 22; i++) {
        for (j = 0; j < 3; j++) {
            entry = D_800D052C[i]->first[j];
            if (entry != 0 && entry->id == obj->id && entry->kind == 1) {
                return 1;
            }
            entry = D_800D052C[i]->second[j];
            if (entry != 0 && entry->id == obj->id && entry->kind == 1) {
                return 1;
            }
        }
    }
    return 0;
}
