/* Returns 1 unless one of the current record's track-2 references names an item, in the first or
   second item table of D_8011FE88 by its side flag, whose kind and subkind are 1 and 5, 9 and 4,
   or 10 and 3. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 resource;
} Record;

typedef struct {
    s32 unk0;
    s32 side;
    s32 index;
} Ref;

typedef struct {
    char pad0[0x11];
    u8 kind;
    u8 subkind;
    char pad13[1];
} Item;

typedef struct {
    char pad0[0x11D0];
    Item *items[2];
} Tables;

extern Record *D_800E2830;
extern Tables D_8011FE88;

extern s32 *func_8028FD94(s32 resource, s32 index);

s32 func_8040332C(void) {
    s32 found;
    s32 *track;
    Ref *refs;
    Item *item;
    s32 i;
    s32 n;
    s32 hit;
    Tables *tables;

    found = 0;
    track = func_8028FD94(D_800E2830->resource, 2);
    n = track[1];
    refs = (Ref *)(track + 2);
    for (i = 0; i < n; i++) {
        tables = &D_8011FE88;
        if (refs[i].side == 0) {
            item = &tables->items[0][refs[i].index];
        } else {
            item = &tables->items[1][refs[i].index];
        }
        hit = 0;
        switch (item->kind) {
            case 1:
                if (item->subkind == 5) {
                    hit = 1;
                }
                break;
            case 9:
                if (item->subkind == 4) {
                    hit = 1;
                }
                break;
            case 10:
                if (item->subkind == 3) {
                    hit = 1;
                }
                break;
            default:
                hit = 0;
                break;
        }
        if (hit) {
            found = 1;
        }
    }
    return found ^ 1;
}
