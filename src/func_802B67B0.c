#include "basetypes.h"

typedef struct EntryTable {
    char header[0x10];
    void *entries[1];
} EntryTable;

extern char D_800CC690;
extern char D_800CC694;
extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);

void *func_802B67B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 high;
    s32 low;
    s32 middle;
    u8 x;
    u8 y;
    void *table;
    void *entry;
    u8 *bounds;

    table = *(void **)((char *)*(void **)((char *)arg0 + 0x60) +
                         ((arg3 & 0xFF) * 0x10));
    high = *(s16 *)((char *)table + 0xE);
    low = 1;
    if (table == 0) {
        func_802BFD40(&D_800CC690, &D_800CC694, 0x376);
    }

    if (high > 0) {
        x = arg1;
        y = arg2;
        do {
            middle = (low + high) / 2;
            entry = ((EntryTable *)table)->entries[middle - 1];
            bounds = *(u8 **)((char *)entry + 4);
            if (x >= bounds[2] && x <= bounds[3] &&
                y >= bounds[0] && y <= bounds[1]) {
                return entry;
            }
            if (x < bounds[2] ||
                (y < bounds[0] && x <= bounds[3])) {
                high = middle - 1;
            } else {
                low = middle + 1;
            }
        } while (low <= high);
    }
    return 0;
}
