#include "common/types.h"
#include "span_1000/code_80245D38.h"
#include "types.h"



extern char D_800CA8C4_de[];
extern TypeEntry *D_800CB440_de[];
extern char *D_80140F84;





void func_8024B2D0_de(char *arg0)
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
    entry = (TypeEntry *)D_800CA8C4_de;
    goto selected;
valid_type:
    if (type == 11) {
        count = D_80140F88;
        i = 0;
        if (count > 0) {
            limit = count;
            object = D_80140F84;
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
    entry = D_800CB440_de[type];

selected:
    if (entry != 0 && entry->callback != 0) {
        entry->callback(arg0, (char *)arg0 + 0x170);
    }
    if ((((func_8024B2C0_S1 *)(arg0))->unk100 & 0x08000000) != 0) {
        (((func_8024B2C0_S1 *)(arg0))->unk23B)++;
    }
}
