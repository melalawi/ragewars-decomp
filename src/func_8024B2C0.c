#include "basetypes.h"

typedef struct {
    void *unk0;
    void (*callback)(void *, void *);
} TypeEntry;

extern char D_800CFB04[];
extern TypeEntry *D_800D0680[];
extern char *D_80145044;
extern s32 D_80145048;

void func_8024B2C0(char *arg0)
{
    s32 type;
    s32 i;
    s32 count;
    s32 limit;
    char *object;
    TypeEntry *entry;

    type = **(s32 **)(arg0 + 0x18);
    if ((u32)type < 15) {
        goto valid_type;
    }
zero_entry:
    entry = 0;
    goto selected;
special_entry:
    entry = (TypeEntry *)D_800CFB04;
    goto selected;
valid_type:
    if (type == 11) {
        count = D_80145048;
        i = 0;
        if (count > 0) {
            limit = count;
            object = D_80145044;
            do {
                if (object == arg0) {
                    goto zero_entry;
                }
                if (object + 0x2E8 == arg0) {
                    goto special_entry;
                }
                i++;
                object += 0x16E8;
            } while (i < limit);
        }
    }
    entry = D_800D0680[type];

selected:
    if (entry != 0 && entry->callback != 0) {
        entry->callback(arg0, arg0 + 0x170);
    }
    if ((*(u32 *)(arg0 + 0x100) & 0x08000000) != 0) {
        (*(u8 *)(arg0 + 0x23B))++;
    }
}
