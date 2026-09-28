#include "basetypes.h"

extern s32 D_8014D080;

typedef struct Record14 {
    s32 id;
    s32 value4;
    s32 value8;
    s32 unkC;
    s32 unk10;
} Record14;

void func_8029A778(s32 arg0, s32 arg1, s32 arg2)
{
    s32 index;
    s32 count;
    Record14 *ptr;

    index = -1;
    count = 0;
    ptr = D_8014D080 + 0x1C;
loop:
    if (ptr->id != arg0) {
        goto not_found;
    }
    index = count;
    goto found;
not_found:
    count += 1;
    ptr += 1;
    if (count < 0x40) {
        if (ptr) {
            goto loop;
        } else {
            goto loop;
        }
    }
found:
    ptr = &((Record14 *)(D_8014D080 + 0x1C))[index];
    if (arg1 == 1) {
        ptr->value4 = arg2;
        ptr->value8 = 0;
        return;
    }
    ptr->value8 = arg2;
}
