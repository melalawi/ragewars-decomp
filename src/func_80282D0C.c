#include "basetypes.h"

/* Accepts special id 0x427 or an id found in either record list with entry kind zero. */

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

s32 func_80282D0C(Object *obj) {
    s32 i;
    s32 j;
    Entry *entry;

    if (obj->id == 0x427) return 1;
    for (i = 0; i < 22; i++) {
        for (j = 0; j < 3; j++) {
            entry = D_800D052C[i]->first[j];
            if (entry != 0 && entry->id == obj->id && entry->kind == 0) {
                return 1;
            }
            entry = D_800D052C[i]->second[j];
            if (entry != 0 && entry->id == obj->id && entry->kind == 0) {
                return 1;
            }
        }
    }
    return 0;
}
