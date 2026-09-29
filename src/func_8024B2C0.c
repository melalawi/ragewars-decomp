#include "basetypes.h"

typedef struct {
    void *unk0;
    void (*callback)(void *, void *);
} TypeEntry;

extern char D_800CFB04[];
extern TypeEntry *D_800D0680[];
extern char *D_80145044;
extern s32 D_80145048;

typedef struct func_8024B2C0_S1 func_8024B2C0_S1;
struct func_8024B2C0_S1 {
    char pad0[0x18];
    s32* unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    u32 unk100;
    char pad100[0x23B - 0x100 - sizeof(u32)];
    u8 unk23B;
};

void func_8024B2C0(char *arg0)
{
    s32 type;
    s32 i;
    s32 count;
    s32 limit;
    char *object;
    TypeEntry *entry;

    type = *((func_8024B2C0_S1 *)(arg0))->unk18;
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
        entry->callback(arg0, (char *)arg0 + 0x170);
    }
    if ((((func_8024B2C0_S1 *)(arg0))->unk100 & 0x08000000) != 0) {
        (((func_8024B2C0_S1 *)(arg0))->unk23B)++;
    }
}
