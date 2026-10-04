#include "common/types.h"
#include "span_16E000/code_804288E0.h"
#include "span_16E000/types.h"
#include "types.h"

/* Sets the alpha of every catalogue icon on the screen D_800E4F60: for categories 0 to 3 (tables
   D_800E5240, D_800E5214, D_800E51F8 and D_800E51E4) it walks the count func_8042B154_de gives for the
   category's list func_8042B294_de and, for the first of the forty 16-byte icon records D_800E4F64
   whose key matches the entry, sets the alpha of the item its key names (and of the item its second
   word names unless that is -1) and shows them through func_8040E8D8_de while the alpha is at least
   12. */







extern struct func_80284AF4_G2 *D_800E0F10;
extern struct Icon D_800E0F14_de[];
extern s32 D_800E1194[];
extern s32 D_800E11A8_de[];
extern s32 D_800E11C4[];
extern s32 D_800E11F0_de[];
extern void *func_8042B294_de(s32);
extern s32 func_8042B154_de(void *);
extern struct Resource_func_80419E54_de *func_8040EC30_de(void *, s32);
extern void func_8040E8D8_de(struct Resource_func_80419E54_de *, s32);

void func_8042A7B4_de(s32 alpha) {
    struct Resource_func_80419E54_de *item;
    s32 *table;
    s32 visible;
    s32 category;
    s32 count;
    s32 list;
    s32 found;
    s32 i;
    s32 j;

    visible = alpha >= 12;
    for (category = 0; category < 4; category++) {
        switch (category) {
        case 3:
            table = D_800E1194;
            list = 3;
            break;
        case 2:
            table = D_800E11A8_de;
            list = 2;
            break;
        case 0:
            table = D_800E11F0_de;
            list = 0;
            break;
        case 1:
            table = D_800E11C4;
            list = 1;
            break;
        default:
            return;
        }
        do {
            count = func_8042B154_de(func_8042B294_de(list));
            for (i = 0; i < count; i++) {
                found = 0;
                j = 0;
            scan:
                if (table[i] == D_800E0F14_de[j].key) {
                    item = func_8040EC30_de(D_800E0F10->unk0, (u16)D_800E0F14_de[j].key);
                    func_8040E8D8_de(item, visible);
                    item->value = alpha;
                    if (D_800E0F14_de[j].other != -1) {
                        item = func_8040EC30_de(D_800E0F10->unk0, (u16)D_800E0F14_de[j].other);
                        func_8040E8D8_de(item, visible);
                        item->value = alpha;
                    }
                    found = 1;
                }
                j++;
                if (j < 40 && found == 0) {
                    goto scan;
                }
            }
        } while (0);
    }
}
