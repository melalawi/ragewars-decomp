#include "common/types.h"
#include "span_1000/code_802B510C.h"
#include "span_1000/types.h"
#include "types.h"





extern char D_800C7440;
extern char D_800C7444;
extern void func_802BAC50_de(void *arg0, void *arg1, s32 arg2);








void *func_802B16E0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 high;
    s32 low;
    s32 middle;
    u8 x;
    u8 y;
    void *table;
    void *entry;
    u8 *bounds;

    table = ((TableSlot *)((func_802B67B0_S1 *)arg0)->unk60)[arg3 & 0xFF].entry;
    high = ((func_802B67B0_S2 *)(table))->unkE;
    low = 1;
    if (table == 0) {
        func_802BAC50_de(&D_800C7440, &D_800C7444, 0x376);
    }

    if (high > 0) {
        x = arg1;
        y = arg2;
        do {
            middle = (low + high) / 2;
            entry = ((EntryTable *)table)->entries[middle - 1];
            bounds = ((func_802B67B0_S3 *)(entry))->unk4;
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
