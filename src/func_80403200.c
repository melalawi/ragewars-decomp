/* When the entry table is available, loads it through func_8028FE1C and func_802518DC and finds
   the first 0x4C-byte entry whose name matches the given one through func_80293424; for it the
   current record takes the entry's key, index, id and a pending flag. The table is then released
   through func_802536F4. Adapted from func_804030E0 and matched the same way. */
#include "basetypes.h"

typedef struct {
    s32 id0;
    s32 id4;
    s32 id8;
    s32 flags;
    char pad10[8];
    char name[0x34];
} Entry;

typedef struct {
    char pad0[0x18];
    s32 owner;
    char pad1C[0x58 - 0x1C];
    s32 pending;
    char pad5C[0xD8 - 0x5C];
    s32 id;
    s32 index;
    s32 key;
} Record;

extern s32 D_800E2838;
extern s32 *D_8011FEFC;
extern s32 D_8011FEBC;
extern Record *D_800E2830;
extern char D_800E0B2C;

extern s32 func_8028FE1C(s32 *, s32, s32, s32 *);
extern s32 **func_802518DC(s32, s32, s32, s32, s32, s32, s32, char *, s32);
extern void func_802536F4(s32, s32 **);

extern s32 func_80293424(char *a, char *b);

void func_80403200(char *name) {
    s32 size;
    s32 **table;
    s32 loaded;
    s32 i;
    s32 id;
    s32 n;
    Entry *entries;

    if (D_800E2838 != 0) {
        loaded = func_8028FE1C(D_8011FEFC, D_8011FEBC, 0, &size);
        if (loaded == 0) {
            table = 0;
        } else {
            table = func_802518DC(0, loaded, loaded, size, 0x33, 0, 0, &D_800E0B2C, 1);
        }
        i = 0;
        entries = (Entry *)(*table + 2);
        n = *D_8011FEFC - 1;
        for (; i < n; i++) {
            if (func_80293424(name, entries[i].name) == 0) {
                D_800E2830->key = entries[i].id8;
                id = entries[i].id0;
                D_800E2830->index = i;
                D_800E2830->pending = 1;
                D_800E2830->id = id;
                break;
            }
        }
        func_802536F4(0, table);
    }
}
