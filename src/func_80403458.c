/* Releases the current record's track-2 timed items whose time has come (or all live ones once the
   record's end time has passed): special items (kind and subkind 1 and 5, 9 and 4, 10 and 3) go to
   func_80402FB4 and clear the record's pending flag, others to func_80278EEC, then each entry is
   marked spent and its item is flagged and refreshed through func_8028BAF8. Adapted from func_8040332C: indexed entry
   access and the table base taken inside the loop. */
#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 resource;
    char pad8[0x14];
    f32 time;
    char pad20[0x14];
    f32 endTime;
    char pad38[0x18];
    s32 active;
    char pad54[4];
    s32 pending;
} Record;

typedef struct {
    f32 time;
    s32 side;
    s32 index;
} Entry;

typedef struct {
    char pad0[0xE];
    u8 flags;
    char padF[2];
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

extern s32 func_80245774(void);
extern s32 *func_8028FD94(s32 resource, s32 index);
extern void func_80402FB4(s32 mode, Item *item);
extern void func_80278EEC(Item *item);
extern void func_8028BAF8(Tables *tables, Item *item, s32 mode);

void func_80403458(void) {
    f32 time;
    s32 late;
    s32 *track;
    Entry *entry;
    Item *item;
    s32 n;
    s32 i;
    s32 hit;
    Tables *tables;

    time = D_800E2830->time;
    late = 0;
    if (func_80245774() == 0) {
        return;
    }
    if (D_800E2830->active == 0) {
        return;
    }
    track = func_8028FD94(D_800E2830->resource, 2);
    n = track[1];
    entry = (Entry *)(track + 2);
    if (n == 0) {
        return;
    }
    if (D_800E2830->endTime <= time) {
        late = 1;
    }
    for (i = 0; i < n; i++) {
        tables = &D_8011FE88;
        if (entry[i].time <= -10000.0f) {
            continue;
        }
        if (time < entry[i].time && late == 0) {
            continue;
        }
        if (entry[i].side == 0) {
            item = &tables->items[0][entry[i].index];
        } else {
            item = &tables->items[1][entry[i].index];
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
            func_80402FB4(0, item);
            D_800E2830->pending = 0;
        } else {
            func_80278EEC(item);
        }
        entry[i].time = -20000.0f;
        item->flags = (item->flags | 1) & 0xEF;
        func_8028BAF8(&D_8011FE88, item, 0);
    }
}
