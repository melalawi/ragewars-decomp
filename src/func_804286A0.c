/* Enumerates the eight item identifiers of the record func_8028D450 finds for a key and registers each nonzero identifier above 0x4C3 through func_8042872C, translated by 0x4C3 and numbered in order. */
#include "basetypes.h"

typedef struct {
    char pad0[6];
    u16 items[8];
} Record;

extern char D_8011FE88[];
extern void func_804288E0(void);
extern Record *func_8028D450(void *table, s32 key);
extern void func_8042872C(s32 slot, s32 item, s32 arg2);

void func_804286A0(s32 key) {
    Record *record;
    s32 count;
    s32 i;
    s32 item;

    func_804288E0();
    record = func_8028D450(D_8011FE88, key);
    count = 0;
    for (i = 0; i < 8; i++) {
        item = record->items[i];
        if (item >= 0x4C3) {
            item -= 0x4C3;
            if (item != 0) {
                func_8042872C(count, item, 0);
                count++;
            }
        }
    }
}
