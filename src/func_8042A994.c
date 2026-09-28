#include "basetypes.h"

/* Sets the alpha of every catalogue icon on the screen D_800E4F60: for categories 0 to 3 (tables
   D_800E5240, D_800E5214, D_800E51F8 and D_800E51E4) it walks the count func_8042B334 gives for the
   category's list func_8042B474 and, for the first of the forty 16-byte icon records D_800E4F64
   whose key matches the entry, sets the alpha of the item its key names (and of the item its second
   word names unless that is -1) and shows them through func_8040E958 while the alpha is at least
   12. */

struct Item {
    char pad[0x10];
    u8 alpha;
};

struct Icon {
    s32 key;
    s32 other;
    char pad8[0x10 - 0x8];
};

struct Screen {
    void *window;
};

extern struct Screen *D_800E4F60;
extern struct Icon D_800E4F64[];
extern s32 D_800E51E4[];
extern s32 D_800E51F8[];
extern s32 D_800E5214[];
extern s32 D_800E5240[];
extern void *func_8042B474(s32);
extern s32 func_8042B334(void *);
extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);

void func_8042A994(s32 alpha) {
    struct Item *item;
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
            table = D_800E51E4;
            list = 3;
            break;
        case 2:
            table = D_800E51F8;
            list = 2;
            break;
        case 0:
            table = D_800E5240;
            list = 0;
            break;
        case 1:
            table = D_800E5214;
            list = 1;
            break;
        default:
            return;
        }
        do {
            count = func_8042B334(func_8042B474(list));
            for (i = 0; i < count; i++) {
                found = 0;
                j = 0;
            scan:
                if (table[i] == D_800E4F64[j].key) {
                    item = func_8040ECB0(D_800E4F60->window, (u16)D_800E4F64[j].key);
                    func_8040E958(item, visible);
                    item->alpha = alpha;
                    if (D_800E4F64[j].other != -1) {
                        item = func_8040ECB0(D_800E4F60->window, (u16)D_800E4F64[j].other);
                        func_8040E958(item, visible);
                        item->alpha = alpha;
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
