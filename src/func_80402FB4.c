/* When the entry table is available, loads it through func_8028FE1C and func_802518DC, finds the
   last 0x4C-byte entry whose ids match the object's u16 ids at 4 and 0xA, and on a match records
   the owner, the id, the entry index and a pending flag in the current record; the loaded table
   is then released through func_802536F4. */
#include "basetypes.h"

typedef struct {
    s32 id0;
    s32 id4;
    char pad8[0x44];
} Entry;

typedef struct {
    char pad0[4];
    u16 id4;
    char pad6[4];
    u16 idA;
} Object;

typedef struct {
    char pad0[0x18];
    s32 owner;
    char pad1C[0x58 - 0x1C];
    s32 pending;
    char pad5C[0xD8 - 0x5C];
    s32 id;
    s32 index;
} Record;

extern s32 D_800E2838;
extern s32 *D_8011FEFC;
extern s32 D_8011FEBC;
extern Record *D_800E2830;
extern char D_800E0B2C;

extern s32 func_8028FE1C(s32 *, s32, s32, s32 *);
extern s32 **func_802518DC(s32, s32, s32, s32, s32, s32, s32, char *, s32);
extern void func_802536F4(s32, s32 **);

void func_80402FB4(s32 owner, Object *obj) {
    s32 size;
    s32 **table;
    s32 key;
    s32 found;
    s32 i;
    s32 n;
    Entry *entry;
    s32 id4;
    s32 idA;

    found = -1;
    if (D_800E2838 != 0) {
        id4 = obj->id4;
        idA = obj->idA;
        key = func_8028FE1C(D_8011FEFC, D_8011FEBC, 0, &size);
        if (key == 0) {
            table = 0;
        } else {
            table = func_802518DC(0, key, key, size, 0x33, 0, 0, &D_800E0B2C, 1);
        }
        n = *D_8011FEFC - 1;
        entry = (Entry *)(*table + 2);
        for (i = 0; i < n; i++, entry++) {
            if (entry->id4 == id4 && entry->id0 == idA) {
                found = i;
            }
        }
        if (found != -1) {
            D_800E2830->owner = owner;
            D_800E2830->id = idA;
            D_800E2830->index = found;
            D_800E2830->pending = 1;
        }
        func_802536F4(0, table);
    }
}
